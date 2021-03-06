#include "adiummessagestyle.h"

#include <QUrl>
#include <QDir>
#include <QFile>
#include <QRegExp>
#include <QMimeData>
#include <QWebFrame>
#include <QByteArray>
#include <QClipboard>
#include <QStringList>
#include <QTextCursor>
#include <QWebSettings>
#include <QDomDocument>
#include <QApplication>
#include <QTextDocument>
#include <QWebHitTestResult>

#define SCROLL_TIMEOUT                      100
#define EVALUTE_TIMEOUT                     10

#define SHARED_STYLE_PATH                   RESOURCES_DIR"/"RSR_STORAGE_ADIUMMESSAGESTYLES"/"STORAGE_SHARED_DIR
#define STYLE_CONTENTS_PATH                 "Contents"
#define STYLE_RESOURCES_PATH                STYLE_CONTENTS_PATH"/Resources"

#define APPEND_MESSAGE_WITH_SCROLL          "checkIfScrollToBottomIsNeeded(); appendMessage(\"%1\"); scrollToBottomIfNeeded();"
#define APPEND_NEXT_MESSAGE_WITH_SCROLL     "checkIfScrollToBottomIsNeeded(); appendNextMessage(\"%1\"); scrollToBottomIfNeeded();"
#define APPEND_MESSAGE                      "appendMessage(\"%1\");"
#define APPEND_NEXT_MESSAGE                 "appendNextMessage(\"%1\");"
#define APPEND_MESSAGE_NO_SCROLL            "appendMessageNoScroll(\"%1\");"
#define APPEND_NEXT_MESSAGE_NO_SCROLL       "appendNextMessageNoScroll(\"%1\");"
#define REPLACE_LAST_MESSAGE                "replaceLastMessage(\"%1\");"

#define TOPIC_MAIN_DIV	                    "<div id=\"topic\"></div>"
#define TOPIC_INDIVIDUAL_WRAPPER            "<span id=\"topicEdit\" ondblclick=\"this.setAttribute('contentEditable', true); this.focus();\">%1</span>"

static const char *SenderColors[] =  {
	"blue", "blueviolet", "brown", "cadetblue", "chocolate", "coral", "cornflowerblue", "crimson",
	"darkblue", "darkcyan", "darkgoldenrod", "darkgreen", "darkmagenta", "darkolivegreen", "darkorange",
	"darkorchid", "darkred", "darksalmon", "darkslateblue", "darkslategrey", "darkturquoise", "darkviolet",
	"deeppink", "deepskyblue", "dodgerblue", "firebrick", "forestgreen", "fuchsia", "gold", "green",
	"hotpink", "indianred", "indigo", "lightcoral", "lightseagreen", "limegreen", "magenta", "maroon",
	"mediumblue", "mediumorchid", "mediumpurple", "mediumseagreen", "mediumslateblue", "mediumvioletred",
	"midnightblue", "navy", "olive", "olivedrab", "orange", "orangered", "orchid", "palevioletred", "peru",
	"purple", "red", "rosybrown", "royalblue", "saddlebrown", "salmon", "seagreen", "sienna", "slateblue",
	"steelblue", "teal", "tomato", "violet"
};

static int SenderColorsCount = sizeof(SenderColors)/sizeof(SenderColors[0]);

AdiumMessageStyle::AdiumMessageStyle(const QString &AStylePath, QNetworkAccessManager *ANetworkAccessManager, QObject *AParent) : QObject(AParent)
{
	FInfo = styleInfo(AStylePath);
	FVariants = styleVariants(AStylePath);
	FResourcePath = AStylePath+"/"STYLE_RESOURCES_PATH;
	FNetworkAccessManager = ANetworkAccessManager;

	initStyleSettings();
	loadTemplates();
	loadSenderColors();

	FScrollTimer.setSingleShot(true);
	FScrollTimer.setInterval(SCROLL_TIMEOUT);
	connect(&FScrollTimer,SIGNAL(timeout()),SLOT(onScrollAfterResize()));

	FPendingTimer.setSingleShot(true);
	FPendingTimer.setInterval(EVALUTE_TIMEOUT);
	connect(&FPendingTimer,SIGNAL(timeout()),SLOT(onEvaluateNextPendingScript()));

	connect(AParent,SIGNAL(styleWidgetAdded(IMessageStyle *, QWidget *)),SLOT(onStyleWidgetAdded(IMessageStyle *, QWidget *)));
}

AdiumMessageStyle::~AdiumMessageStyle()
{

}

bool AdiumMessageStyle::isValid() const
{
	return !FIn_ContentHTML.isEmpty() && !styleId().isEmpty();
}

QString AdiumMessageStyle::styleId() const
{
	return FInfo.value(MSIV_NAME).toString();
}

QList<QWidget *> AdiumMessageStyle::styleWidgets() const
{
	return FWidgetStatus.keys();
}

QWidget *AdiumMessageStyle::createWidget(const IMessageStyleOptions &AOptions, QWidget *AParent)
{
	StyleViewer *view = new StyleViewer(AParent);
	if (FNetworkAccessManager)
		view->page()->setNetworkAccessManager(FNetworkAccessManager);
	changeOptions(view,AOptions,true);
	return view;
}

QString AdiumMessageStyle::senderColor(const QString &ASenderId) const
{
	if (!FSenderColors.isEmpty())
		return FSenderColors.at(qHash(ASenderId) % FSenderColors.count());
	return QString(SenderColors[qHash(ASenderId) % SenderColorsCount]);
}

QTextDocumentFragment AdiumMessageStyle::selection(QWidget *AWidget) const
{
	StyleViewer *view = qobject_cast<StyleViewer *>(AWidget);
#if QT_VERSION >= 0x040800
	if (view && view->hasSelection())
		return QTextDocumentFragment::fromHtml(view->selectedHtml());
#else
	if (view && !view->page()->selectedText().isEmpty())
	{
		view->page()->triggerAction(QWebPage::Copy);
		return QTextDocumentFragment::fromHtml(QApplication::clipboard()->mimeData()->html());
	}
#endif
	return QTextDocumentFragment();
}

QTextDocumentFragment AdiumMessageStyle::textUnderPosition(const QPoint &APosition, QWidget *AWidget) const
{
	StyleViewer *view = qobject_cast<StyleViewer *>(AWidget);
	if (view)
	{
#if QT_VERSION >= 0x040800
		QWebHitTestResult result = view->page()->currentFrame()->hitTestContent(APosition);
		if (!result.isContentSelected())
		{
			if (result.linkUrl().isValid())
				return QTextDocumentFragment::fromHtml(QString("<a href='%1'>%2</a>").arg(result.linkUrl().toString(),result.linkText()));
		}
		else
#endif
		{
			return selection(AWidget);
		}
	}
	return QTextDocumentFragment();
}

bool AdiumMessageStyle::changeOptions(QWidget *AWidget, const IMessageStyleOptions &AOptions, bool AClean)
{
	StyleViewer *view = qobject_cast<StyleViewer *>(AWidget);
	if (view && AOptions.extended.value(MSO_STYLE_ID).toString()==styleId())
	{
		if (!FWidgetStatus.contains(view))
		{
			AClean = true;
			FWidgetStatus[view].wait = 0;
			FWidgetStatus[view].scrollStarted = false;
			view->installEventFilter(this);
			connect(view,SIGNAL(linkClicked(const QUrl &)),SLOT(onLinkClicked(const QUrl &)));
			connect(view,SIGNAL(loadFinished(bool)),SLOT(onStyleWidgetLoadFinished(bool)));
			connect(view,SIGNAL(destroyed(QObject *)),SLOT(onStyleWidgetDestroyed(QObject *)));
			emit widgetAdded(AWidget);
		}
		else
		{
			FWidgetStatus[view].lastKind = -1;
		}

		if (AClean)
		{
			WidgetStatus &wstatus = FWidgetStatus[view];
			wstatus.wait++;
			wstatus.pending.clear();
			wstatus.lastKind = -1;
			wstatus.lastId = QString::null;
			wstatus.lastTime = QDateTime();
			QString html = makeStyleTemplate(AOptions);
			fillStyleKeywords(html,AOptions);
			view->setHtml(html);
		}
		else
		{
			setVariant(AWidget,AOptions.extended.value(MSO_VARIANT).toString());
		}

		int fontSize = AOptions.extended.value(MSO_FONT_SIZE).toInt();
		QString fontFamily = AOptions.extended.value(MSO_FONT_FAMILY).toString();
		view->page()->settings()->setFontSize(QWebSettings::DefaultFontSize, fontSize!=0 ? fontSize : QWebSettings::globalSettings()->fontSize(QWebSettings::DefaultFontSize));
		view->page()->settings()->setFontFamily(QWebSettings::StandardFont, !fontFamily.isEmpty() ? fontFamily : QWebSettings::globalSettings()->fontFamily(QWebSettings::StandardFont));

		emit optionsChanged(AWidget,AOptions,AClean);
		return true;
	}
	return false;
}

bool AdiumMessageStyle::appendContent(QWidget *AWidget, const QString &AHtml, const IMessageContentOptions &AOptions)
{
	StyleViewer *view = FWidgetStatus.contains(AWidget) ? qobject_cast<StyleViewer *>(AWidget) : NULL;
	if (view)
	{
		bool sameSender = isSameSender(AWidget,AOptions);
		QString html = makeContentTemplate(AOptions,sameSender);
		fillContentKeywords(html,AOptions,sameSender);
		html.replace("%message%",prepareMessage(AHtml,AOptions));
		if (AOptions.kind == IMessageContentOptions::KindTopic)
			html.replace("%topic%",QString(TOPIC_INDIVIDUAL_WRAPPER).arg(AHtml));

		WidgetStatus &wstatus = FWidgetStatus[AWidget];
		wstatus.lastKind = AOptions.kind;
		wstatus.lastId = AOptions.senderId;
		wstatus.lastTime = AOptions.time;

		escapeStringForScript(html);
		QString script = scriptForAppendContent(sameSender,AOptions.noScroll).arg(html);

		if (wstatus.pending.isEmpty())
			FPendingTimer.start();
		wstatus.pending.append(script);

		emit contentAppended(AWidget,AHtml,AOptions);
		return true;
	}
	return false;
}

int AdiumMessageStyle::version() const
{
	return FInfo.value(MSIV_VERSION,0).toInt();
}

QMap<QString, QVariant> AdiumMessageStyle::infoValues() const
{
	return FInfo;
}

QList<QString> AdiumMessageStyle::variants() const
{
	return FVariants;
}

QList<QString> AdiumMessageStyle::styleVariants(const QString &AStylePath)
{
	QList<QString> files;
	if (!AStylePath.isEmpty())
	{
		QDir dir(AStylePath+"/"STYLE_RESOURCES_PATH"/Variants");
		files = dir.entryList(QStringList("*.css"),QDir::Files,QDir::Name);
		for (int i=0; i<files.count();i++)
			files[i].chop(4);
	}
	return files;
}

QMap<QString, QVariant> AdiumMessageStyle::styleInfo(const QString &AStylePath)
{
	QMap<QString, QVariant> info;

	QFile file(AStylePath+"/"STYLE_CONTENTS_PATH"/Info.plist");
	if (!AStylePath.isEmpty() && file.open(QFile::ReadOnly))
	{
		QDomDocument doc;
		if (doc.setContent(file.readAll(),true))
		{
			QDomElement elem = doc.documentElement().firstChildElement("dict").firstChildElement("key");
			while (!elem.isNull())
			{
				QString key = elem.text();
				if (!key.isEmpty())
				{
					elem = elem.nextSiblingElement();
					if (elem.tagName() == "string")
						info.insert(key,elem.text());
					else if (elem.tagName() == "integer")
						info.insert(key,elem.text().toInt());
					else if (elem.tagName() == "true")
						info.insert(key,true);
					else if (elem.tagName() == "false")
						info.insert(key,false);
				}
				elem = elem.nextSiblingElement("key");
			}
		}
	}
	return info;
}

bool AdiumMessageStyle::isSameSender(QWidget *AWidget, const IMessageContentOptions &AOptions) const
{
	if (!FCombineConsecutive)
		return false;
	if (AOptions.kind != IMessageContentOptions::KindMessage)
		return false;
	if (AOptions.senderId.isEmpty())
		return false;

	const WidgetStatus &wstatus = FWidgetStatus.value(AWidget);
	if (wstatus.lastKind != AOptions.kind)
		return false;
	if (wstatus.lastId != AOptions.senderId)
		return false;
	if (wstatus.lastTime.secsTo(AOptions.time)>2*60)
		return false;

	return true;
}

void AdiumMessageStyle::setVariant(QWidget *AWidget, const QString &AVariant)
{
	StyleViewer *view = FWidgetStatus.contains(AWidget) ? qobject_cast<StyleViewer *>(AWidget) : NULL;
	if (view)
	{
		QString variant = QDir::cleanPath(QString("Variants/%1.css").arg(!FVariants.contains(AVariant) ? FInfo.value(MSIV_DEFAULT_VARIANT,"../main").toString() : AVariant));
		escapeStringForScript(variant);
		QString script = QString("setStylesheet(\"%1\",\"%2\");").arg("mainStyle").arg(variant);
		view->page()->mainFrame()->evaluateJavaScript(script);
	}
}

QString AdiumMessageStyle::makeStyleTemplate(const IMessageStyleOptions &AOptions)
{
	FUsingCustomTemplate = true;
	QString htmlFileName = FResourcePath+"/Template.html";
	if (!QFile::exists(htmlFileName))
	{
		FUsingCustomTemplate = false;
		htmlFileName = qApp->applicationDirPath()+"/"SHARED_STYLE_PATH"/Template.html";
	}

	QString html = loadFileData(htmlFileName,QString::null);
	if (!html.isEmpty())
	{
		QString headerHTML;
		if (AOptions.extended.value(MSO_HEADER_TYPE).toInt() == AdiumMessageStyle::HeaderTopic)
			headerHTML = TOPIC_MAIN_DIV;
		else if (AOptions.extended.value(MSO_HEADER_TYPE).toInt() == AdiumMessageStyle::HeaderNormal)
			headerHTML =  loadFileData(FResourcePath+"/Header.html",QString::null);
		QString footerHTML = loadFileData(FResourcePath+"/Footer.html",QString::null);

		QString variant = AOptions.extended.value(MSO_VARIANT).toString();
		if (!FVariants.contains(variant))
			variant = FInfo.value(MSIV_DEFAULT_VARIANT,"../main").toString();
		variant = QDir::cleanPath(QString("Variants/%1.css").arg(variant));

		html.replace(html.indexOf("%@"),2,QUrl::fromLocalFile(FResourcePath).toString()+"/");
		if (!FUsingCustomTemplate || version()>=3)
			html.replace(html.indexOf("%@"),2, version()>=3 ? "@import url( \"main.css\" );" : "");
		html.replace(html.indexOf("%@"),2,variant);
		html.replace(html.indexOf("%@"),2,headerHTML);
		html.replace(html.indexOf("%@"),2,footerHTML);
	}
	return html;
}

void AdiumMessageStyle::fillStyleKeywords(QString &AHtml, const IMessageStyleOptions &AOptions) const
{
	AHtml.replace("%chatName%",AOptions.extended.value(MSO_CHAT_NAME).toString());
	AHtml.replace("%timeOpened%",Qt::escape(AOptions.extended.value(MSO_START_DATE_TIME).toDateTime().time().toString()));
	AHtml.replace("%dateOpened%",Qt::escape(AOptions.extended.value(MSO_START_DATE_TIME).toDateTime().date().toString()));
	AHtml.replace("%sourceName%",AOptions.extended.value(MSO_ACCOUNT_NAME).toString());
	AHtml.replace("%destinationName%",AOptions.extended.value(MSO_CHAT_NAME).toString());
	AHtml.replace("%destinationDisplayName%",AOptions.extended.value(MSO_CHAT_NAME).toString());
	AHtml.replace("%outgoingIconPath%",AOptions.extended.value(MSO_SELF_AVATAR,"outgoing_icon.png").toString());
	AHtml.replace("%incomingIconPath%",AOptions.extended.value(MSO_CONTACT_AVATAR,"incoming_icon.png").toString());
	AHtml.replace("%outgoingColor%",AOptions.extended.value(MSO_SELF_COLOR).toString());
	AHtml.replace("%incomingColor%",AOptions.extended.value(MSO_CONTACT_COLOR).toString());
	AHtml.replace("%serviceIconPath%", AOptions.extended.value(MSO_SERVICE_ICON_PATH).toString());
	AHtml.replace("%serviceIconImg%", QString("<img class=\"serviceIcon\" src=\"%1\">")
		.arg(AOptions.extended.value(MSO_SERVICE_ICON_PATH,"outgoing_icon.png").toString()));

	QString background;
	if (FAllowCustomBackground)
	{
		if (!AOptions.extended.value(MSO_BG_IMAGE_FILE).toString().isEmpty())
		{
			int imageLayout = AOptions.extended.value(MSO_BG_IMAGE_LAYOUT).toInt();
			if (imageLayout == ImageNormal)
				background.append("background-image: url('%1'); background-repeat: no-repeat; background-attachment:fixed;");
			else if (imageLayout == ImageCenter)
				background.append("background-image: url('%1'); background-position: center; background-repeat: no-repeat; background-attachment:fixed;");
			else if (imageLayout == ImageTitle)
				background.append("background-image: url('%1'); background-repeat: repeat;");
			else if (imageLayout == ImageTitleCenter)
				background.append("background-image: url('%1'); background-repeat: repeat; background-position: center;");
			else if (imageLayout == ImageScale)
				background.append("background-image: url('%1'); -webkit-background-size: 100% 100%; background-size: 100% 100%; background-attachment: fixed;");
			background = background.arg(AOptions.extended.value(MSO_BG_IMAGE_FILE).toString());
		}
		if (!AOptions.extended.value(MSO_BG_COLOR).toString().isEmpty())
		{
			QColor color(AOptions.extended.value(MSO_BG_COLOR).toString());
			if (!color.isValid())
				color.setNamedColor("#"+AOptions.extended.value(MSO_BG_COLOR).toString());
			if (color.isValid())
			{
				int r,g,b,a;
				color.getRgb(&r,&g,&b,&a);
				background.append(QString("background-color: rgba(%1, %2, %3, %4);").arg(r).arg(g).arg(b).arg(qreal(a)/255.0));
			}
		}
	}
	AHtml.replace("==bodyBackground==", background);
}

QString AdiumMessageStyle::makeContentTemplate(const IMessageContentOptions &AOptions, bool ASameSender) const
{
	QString html;
	if (false && AOptions.kind == IMessageContentOptions::KindTopic && !FTopicHTML.isEmpty())
	{
		html = FTopicHTML;
	}
	else if (AOptions.kind == IMessageContentOptions::KindStatus && !FStatusHTML.isEmpty())
	{
		html = FStatusHTML;
	}
	else if (AOptions.kind==IMessageContentOptions::KindMeCommand && (!FMeCommandHTML.isEmpty() || !FStatusHTML.isEmpty()))
	{
		html = !FMeCommandHTML.isEmpty() ? FMeCommandHTML : FStatusHTML;
	}
	else
	{
		if (AOptions.type & IMessageContentOptions::TypeHistory)
		{
			if (AOptions.direction == IMessageContentOptions::DirectionIn)
				html = ASameSender ? FIn_NextContextHTML : FIn_ContextHTML;
			else
				html = ASameSender ? FOut_NextContextHTML : FOut_ContextHTML;
		}
		else if (AOptions.direction == IMessageContentOptions::DirectionIn)
		{
			html = ASameSender ? FIn_NextContentHTML : FIn_ContentHTML;
		}
		else
		{
			html = ASameSender ? FOut_NextContentHTML : FOut_ContentHTML;
		}
	}
	return html;
}

void AdiumMessageStyle::fillContentKeywords(QString &AHtml, const IMessageContentOptions &AOptions, bool ASameSender) const
{
	bool isDirectionIn = AOptions.direction==IMessageContentOptions::DirectionIn;

	QStringList messageClasses;
	if (FCombineConsecutive && ASameSender)
		messageClasses << MSMC_CONSECUTIVE;
	
	if (AOptions.kind==IMessageContentOptions::KindMeCommand)
		messageClasses << (!FMeCommandHTML.isEmpty() ? MSMC_MECOMMAND : MSMC_STATUS);
	else if (AOptions.kind == IMessageContentOptions::KindStatus)
		messageClasses << MSMC_STATUS;
	else
		messageClasses << MSMC_MESSAGE;
	
	if (isDirectionIn)
		messageClasses << MSMC_INCOMING;
	else
		messageClasses << MSMC_OUTGOING;
	
	if (AOptions.type & IMessageContentOptions::TypeGroupchat)
		messageClasses << MSMC_GROUPCHAT;
	if (AOptions.type & IMessageContentOptions::TypeHistory)
		messageClasses << MSMC_HISTORY;
	if (AOptions.type & IMessageContentOptions::TypeEvent)
		messageClasses << MSMC_EVENT;
	if (AOptions.type & IMessageContentOptions::TypeMention)
		messageClasses << MSMC_MENTION;
	if (AOptions.type & IMessageContentOptions::TypeNotification)
		messageClasses << MSMC_NOTIFICATION;

	QString messageStatus;
	if (AOptions.status == IMessageContentOptions::StatusOnline)
		messageStatus = MSSK_ONLINE;
	else if (AOptions.status == IMessageContentOptions::StatusOffline)
		messageStatus = MSSK_OFFLINE;
	else if (AOptions.status == IMessageContentOptions::StatusAway)
		messageStatus = MSSK_AWAY;
	else if (AOptions.status == IMessageContentOptions::StatusAwayMessage)
		messageStatus = MSSK_AWAY_MESSAGE;
	else if (AOptions.status == IMessageContentOptions::StatusReturnAway)
		messageStatus = MSSK_RETURN_AWAY;
	else if (AOptions.status == IMessageContentOptions::StatusIdle)
		messageStatus = MSSK_IDLE;
	else if (AOptions.status == IMessageContentOptions::StatusReturnIdle)
		messageStatus = MSSK_RETURN_IDLE;
	else if (AOptions.status == IMessageContentOptions::StatusDateSeparator)
		messageStatus = MSSK_DATE_SEPARATOR;
	else if (AOptions.status == IMessageContentOptions::StatusJoined)
		messageStatus = MSSK_CONTACT_JOINED;
	else if (AOptions.status == IMessageContentOptions::StatusLeft)
		messageStatus = MSSK_CONTACT_LEFT;
	else if (AOptions.status == IMessageContentOptions::StatusError)
		messageStatus = MSSK_ERROR;
	else if (AOptions.status == IMessageContentOptions::StatusTimeout)
		messageStatus = MSSK_TIMED_OUT;
	else if (AOptions.status == IMessageContentOptions::StatusEncryption)
		messageStatus = MSSK_ENCRYPTION;
	else if (AOptions.status == IMessageContentOptions::StatusFileTransferBegan)
		messageStatus = MSSK_FILETRANSFER_BEGAN;
	else if (AOptions.status == IMessageContentOptions::StatusFileTransferComplete)
		messageStatus = MSSK_FILETRANSFER_COMPLETE;
	if (!messageStatus.isEmpty())
		messageClasses << messageStatus;

	AHtml.replace("%messageClasses%", messageClasses.join(" "));

	//AHtml.replace("%messageDirection%", AOptions.isAlignLTR ? "ltr" : "rtl" );
	AHtml.replace("%senderStatusIcon%",AOptions.senderIcon);
	AHtml.replace("%shortTime%", Qt::escape(AOptions.time.toString(tr("hh:mm"))));
	AHtml.replace("%service%",QString::null);

	QString avatar = AOptions.senderAvatar;
	if (!QFile::exists(avatar))
	{
		avatar = isDirectionIn ? "Incoming/buddy_icon.png" : "Outgoing/buddy_icon.png";
		if (!isDirectionIn && !QFile::exists(FResourcePath+"/"+avatar))
			avatar = "Incoming/buddy_icon.png";
	}
	AHtml.replace("%userIconPath%",avatar);

	QString timeFormat = !AOptions.timeFormat.isEmpty() ? AOptions.timeFormat : tr("hh:mm:ss");
	QString time = Qt::escape(AOptions.time.toString(timeFormat));
	AHtml.replace("%time%", time);

	QRegExp timeRegExp("%time\\{([^}]*)\\}%");
	for (int pos=0; pos!=-1; pos = timeRegExp.indexIn(AHtml, pos))
		if (!timeRegExp.cap(0).isEmpty())
			AHtml.replace(pos, timeRegExp.cap(0).length(), time);

	QString sColor = !AOptions.senderColor.isEmpty() ? AOptions.senderColor : senderColor(AOptions.senderId);
	AHtml.replace("%senderColor%",sColor);

	QRegExp scolorRegExp("%senderColor\\{([^}]*)\\}%");
	for (int pos=0; pos!=-1; pos = scolorRegExp.indexIn(AHtml, pos))
		if (!scolorRegExp.cap(0).isEmpty())
			AHtml.replace(pos, scolorRegExp.cap(0).length(), sColor);

	if (AOptions.kind == IMessageContentOptions::KindStatus)
	{
		AHtml.replace("%status%",messageStatus);
		AHtml.replace("%statusSender%",AOptions.senderName);
	}
	else
	{
		AHtml.replace("%senderScreenName%",AOptions.senderId);
		AHtml.replace("%sender%",AOptions.senderName);
		AHtml.replace("%senderDisplayName%",AOptions.senderName);
		AHtml.replace("%senderPrefix%",QString::null);

		QString rgbaColor;
		QColor bgColor(AOptions.textBGColor);
		QRegExp colorRegExp("%textbackgroundcolor\\{([^}]*)\\}%");
		for (int pos=0; pos!=-1; pos = colorRegExp.indexIn(AHtml, pos))
		{
			if (!colorRegExp.cap(0).isEmpty())
			{
				if (bgColor.isValid())
				{
					int r,g,b;
					bool ok = false;
					qreal a = colorRegExp.cap(1).toDouble(&ok);
					bgColor.setAlphaF(ok ? a : 1.0);
					bgColor.getRgb(&r,&g,&b);
					rgbaColor = QString("rgba(%1, %2, %3, %4)").arg(r).arg(g).arg(b).arg(a);
				}
				else if (rgbaColor.isEmpty())
				{
					rgbaColor = "inherit";
				}
				AHtml.replace(pos, colorRegExp.cap(0).length(), rgbaColor);
			}
		}
	}
}

void AdiumMessageStyle::escapeStringForScript(QString &AText) const
{
	AText.replace("\\","\\\\");
	AText.replace("\"","\\\"");
	AText.replace("\n","");
	AText.replace("\r","<br>");
}

QString AdiumMessageStyle::scriptForAppendContent(bool ASameSender, bool ANoScroll) const
{
	QString script;
	if (!FUsingCustomTemplate && version() >= 4)
	{
		if (ANoScroll)
			script = (FCombineConsecutive && ASameSender ? APPEND_NEXT_MESSAGE_NO_SCROLL : APPEND_MESSAGE_NO_SCROLL);
		else
			script = (FCombineConsecutive && ASameSender ? APPEND_NEXT_MESSAGE : APPEND_MESSAGE);
	}
	else if (version() >= 3)
	{
		if (ANoScroll)
			script = (FCombineConsecutive && ASameSender ? APPEND_NEXT_MESSAGE_NO_SCROLL : APPEND_MESSAGE_NO_SCROLL);
		else
			script = (FCombineConsecutive && ASameSender ? APPEND_NEXT_MESSAGE : APPEND_MESSAGE);
	}
	else if (version() >= 1)
	{
		script = (ASameSender ? APPEND_NEXT_MESSAGE : APPEND_MESSAGE);
	}
	else
	{
		if (FUsingCustomTemplate)
			script = (ASameSender ? APPEND_NEXT_MESSAGE_WITH_SCROLL : APPEND_MESSAGE_WITH_SCROLL);
		else
			script = (ASameSender ? APPEND_NEXT_MESSAGE : APPEND_MESSAGE);
	}
	return script;
}

QString AdiumMessageStyle::prepareMessage(const QString &AHtml, const IMessageContentOptions &AOptions) const
{
	if (AOptions.kind==IMessageContentOptions::KindMeCommand && FMeCommandHTML.isEmpty())
	{
		QTextDocument doc;
		doc.setHtml(AHtml);
		QTextCursor cursor(&doc);
		cursor.insertHtml(QString("<i>*&nbsp;%1</i>&nbsp;").arg(AOptions.senderName));
		return TextManager::getDocumentBody(doc);
	}
	return AHtml;
}

QString AdiumMessageStyle::loadFileData(const QString &AFileName, const QString &DefValue) const
{
	if (QFile::exists(AFileName))
	{
		QFile file(AFileName);
		if (file.open(QFile::ReadOnly))
		{
			QByteArray html = file.readAll();
			return QString::fromUtf8(html.data(),html.size());
		}
	}
	return DefValue;
}

void AdiumMessageStyle::loadTemplates()
{
	FIn_ContentHTML =      loadFileData(FResourcePath+"/Content.html",QString::null);

	FIn_ContentHTML =      loadFileData(FResourcePath+"/Incoming/Content.html",FIn_ContentHTML);
	FIn_NextContentHTML =  loadFileData(FResourcePath+"/Incoming/NextContent.html",FIn_ContentHTML);
	FIn_ContextHTML =      loadFileData(FResourcePath+"/Incoming/Context.html",FIn_ContentHTML);
	FIn_NextContextHTML =  loadFileData(FResourcePath+"/Incoming/NextContext.html",FIn_NextContentHTML);

	FOut_ContentHTML =     loadFileData(FResourcePath+"/Outgoing/Content.html",FIn_ContentHTML);
	FOut_NextContentHTML = loadFileData(FResourcePath+"/Outgoing/NextContent.html",FOut_ContentHTML);
	FOut_ContextHTML =     loadFileData(FResourcePath+"/Outgoing/Context.html",FOut_ContentHTML);
	FOut_NextContextHTML = loadFileData(FResourcePath+"/Outgoing/NextContext.html",FOut_NextContentHTML);

	FTopicHTML =           loadFileData(FResourcePath+"/Topic.html",QString::null);
	FStatusHTML =          loadFileData(FResourcePath+"/Status.html",FIn_ContentHTML);
	FMeCommandHTML =       loadFileData(FResourcePath+"/MeCommand.html",QString::null);
}

void AdiumMessageStyle::loadSenderColors()
{
	QFile colors(FResourcePath + "/Incoming/SenderColors.txt");
	if (colors.open(QFile::ReadOnly))
		FSenderColors = QString::fromUtf8(colors.readAll()).split(':',QString::SkipEmptyParts);
}

void AdiumMessageStyle::initStyleSettings()
{
	FCombineConsecutive = !FInfo.value(MSIV_DISABLE_COMBINE_CONSECUTIVE,false).toBool();
	FAllowCustomBackground = !FInfo.value(MSIV_DISABLE_CUSTOM_BACKGROUND,false).toBool();
}

bool AdiumMessageStyle::eventFilter(QObject *AWatched, QEvent *AEvent)
{
	if (AEvent->type() == QEvent::Resize)
	{
		StyleViewer *view = qobject_cast<StyleViewer *>(AWatched);
		if (FWidgetStatus.contains(view))
		{
			WidgetStatus &wstatus = FWidgetStatus[view];
			QWebFrame *frame = view->page()->mainFrame();
			if (!wstatus.scrollStarted && frame->scrollBarValue(Qt::Vertical)==frame->scrollBarMaximum(Qt::Vertical))
			{
				wstatus.scrollStarted = true;
				FScrollTimer.start();
			}
		}
	}
	return QObject::eventFilter(AWatched,AEvent);
}

void AdiumMessageStyle::onLinkClicked(const QUrl &AUrl)
{
	StyleViewer *view = qobject_cast<StyleViewer *>(sender());
	emit urlClicked(view,AUrl);
}

void AdiumMessageStyle::onScrollAfterResize()
{
	for (QMap<QWidget*,WidgetStatus>::iterator it = FWidgetStatus.begin(); it!= FWidgetStatus.end(); ++it)
	{
		if (it->scrollStarted)
		{
			StyleViewer *view = qobject_cast<StyleViewer *>(it.key());
			QWebFrame *frame = view->page()->mainFrame();
			frame->evaluateJavaScript("alignChat(false);");
			frame->setScrollBarValue(Qt::Vertical,frame->scrollBarMaximum(Qt::Vertical));
			it->scrollStarted = false;
		}
	}
}

void AdiumMessageStyle::onEvaluateNextPendingScript()
{
	bool restart = false;
	for(QMap<QWidget *, WidgetStatus>::iterator it=FWidgetStatus.begin(); it!=FWidgetStatus.end(); ++it)
	{
		StyleViewer *view = qobject_cast<StyleViewer *>(it.key());
		if (view && it->wait==0 && !it->pending.isEmpty())
		{
			QString script = it->pending.takeFirst();
			restart = restart || !it->pending.isEmpty();
			view->page()->mainFrame()->evaluateJavaScript(script);
		}
	}
	if (restart)
	{
		FPendingTimer.start();
	}
}

void AdiumMessageStyle::onStyleWidgetAdded(IMessageStyle *AStyle, QWidget *AWidget)
{
	if (AStyle!=this && FWidgetStatus.contains(AWidget))
	{
		AWidget->removeEventFilter(this);
		FWidgetStatus.remove(AWidget);
		emit widgetRemoved(AWidget);
	}
}

void AdiumMessageStyle::onStyleWidgetDestroyed(QObject *AObject)
{
	FWidgetStatus.remove((QWidget *)AObject);
	emit widgetRemoved((QWidget *)AObject);
}

void AdiumMessageStyle::onStyleWidgetLoadFinished(bool AOk)
{
	StyleViewer *view = qobject_cast<StyleViewer *>(sender());
	if (view)
	{
		WidgetStatus &wstatus = FWidgetStatus[view];
		if (--wstatus.wait == 0)
		{
			if (AOk)
			{
				if (!wstatus.pending.isEmpty())
					FPendingTimer.start();
				view->page()->mainFrame()->evaluateJavaScript("alignChat(false);");
			}
			else
			{
				wstatus.wait++;
				view->setHtml("Style Template Load Error!");
			}
		}
	}
}
