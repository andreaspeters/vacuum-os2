#include "statusicons.h"

#include <QTimer>

#define ADR_RULE                          Action::DR_Parametr1
#define ADR_SUBSTORAGE                    Action::DR_Parametr2

StatusIcons::StatusIcons()
{
	FPresencePlugin = NULL;
	FRosterPlugin = NULL;
	FRostersModel = NULL;
	FRostersViewPlugin = NULL;
	FMultiUserChatPlugin = NULL;
	FOptionsManager = NULL;

	FDefaultStorage = NULL;
	FCustomIconMenu = NULL;
	FDefaultIconAction = NULL;
	FStatusIconsChangedStarted = false;
}

StatusIcons::~StatusIcons()
{
	delete FCustomIconMenu;
}

void StatusIcons::pluginInfo(IPluginInfo *APluginInfo)
{
	APluginInfo->name = tr("Status Icons Manager");
	APluginInfo->description = tr("Allows to set the status icons for contacts on the basis of standard rules or user-defined");
	APluginInfo->version = "1.0";
	APluginInfo->author = "Potapov S.A. aka Lion";
	APluginInfo->homePage = "http://www.vacuum-im.org";
}

bool StatusIcons::initConnections(IPluginManager *APluginManager, int &AInitOrder)
{
	Q_UNUSED(AInitOrder);
	IPlugin *plugin = APluginManager->pluginInterface("IPresencePlugin").value(0,NULL);
	if (plugin)
	{
		FPresencePlugin = qobject_cast<IPresencePlugin *>(plugin->instance());
		if (FPresencePlugin)
		{
			connect(FPresencePlugin->instance(),SIGNAL(presenceChanged(IPresence *, int, const QString &, int)),
				SLOT(onPresenceChanged(IPresence *, int , const QString &, int)));
			connect(FPresencePlugin->instance(),SIGNAL(presenceItemReceived(IPresence *, const IPresenceItem &, const IPresenceItem &)),
				SLOT(onPresenceItemReceived(IPresence *, const IPresenceItem &, const IPresenceItem &)));
		}
	}

	plugin = APluginManager->pluginInterface("IRosterPlugin").value(0,NULL);
	if (plugin)
	{
		FRosterPlugin = qobject_cast<IRosterPlugin *>(plugin->instance());
		if (FRosterPlugin)
		{
			connect(FRosterPlugin->instance(),SIGNAL(rosterItemReceived(IRoster *, const IRosterItem &, const IRosterItem &)),
				SLOT(onRosterItemReceived(IRoster *, const IRosterItem &, const IRosterItem &)));
		}
	}

	plugin = APluginManager->pluginInterface("IRostersModel").value(0,NULL);
	if (plugin)
	{
		FRostersModel = qobject_cast<IRostersModel *>(plugin->instance());
	}

	plugin = APluginManager->pluginInterface("IRostersViewPlugin").value(0,NULL);
	if (plugin)
	{
		FRostersViewPlugin = qobject_cast<IRostersViewPlugin *>(plugin->instance());
		if (FRostersViewPlugin)
		{
			connect(FRostersViewPlugin->rostersView()->instance(),SIGNAL(indexMultiSelection(const QList<IRosterIndex *> &, bool &)), 
				SLOT(onRosterIndexMultiSelection(const QList<IRosterIndex *> &, bool &)));
			connect(FRostersViewPlugin->rostersView()->instance(),SIGNAL(indexContextMenu(const QList<IRosterIndex *> &, quint32, Menu *)), 
				SLOT(onRosterIndexContextMenu(const QList<IRosterIndex *> &, quint32, Menu *)));
		}
	}

	plugin = APluginManager->pluginInterface("IOptionsManager").value(0,NULL);
	if (plugin)
	{
		FOptionsManager = qobject_cast<IOptionsManager *>(plugin->instance());
	}

	plugin = APluginManager->pluginInterface("IMultiUserChatPlugin").value(0,NULL);
	if (plugin)
	{
		FMultiUserChatPlugin = qobject_cast<IMultiUserChatPlugin *>(plugin->instance());
		if (FMultiUserChatPlugin)
		{
			connect(FMultiUserChatPlugin->instance(),SIGNAL(multiUserContextMenu(IMultiUserChatWindow *, IMultiUser *, Menu *)),
				SLOT(onMultiUserContextMenu(IMultiUserChatWindow *, IMultiUser *, Menu *)));
		}
	}

	connect(Options::instance(),SIGNAL(optionsOpened()),SLOT(onOptionsOpened()));
	connect(Options::instance(),SIGNAL(optionsClosed()),SLOT(onOptionsClosed()));
	connect(Options::instance(),SIGNAL(optionsChanged(const OptionsNode &)),SLOT(onOptionsChanged(const OptionsNode &)));

	return true;
}

bool StatusIcons::initObjects()
{
	FCustomIconMenu = new Menu;
	FCustomIconMenu->setTitle(tr("Status icon"));

	FDefaultIconAction = new Action(FCustomIconMenu);
	FDefaultIconAction->setText(tr("Default"));
	FDefaultIconAction->setCheckable(true);
	connect(FDefaultIconAction,SIGNAL(triggered(bool)),SLOT(onSetCustomIconset(bool)));
	FCustomIconMenu->addAction(FDefaultIconAction,AG_DEFAULT-1,true);

	FDefaultStorage = IconStorage::staticStorage(RSR_STORAGE_STATUSICONS);
	connect(FDefaultStorage,SIGNAL(storageChanged()),SLOT(onDefaultIconsetChanged()));

	if (FRostersModel)
	{
		FRostersModel->insertDefaultDataHolder(this);
	}

	loadStorages();
	return true;
}

bool StatusIcons::initSettings()
{
	Options::setDefaultValue(OPV_STATUSICONS_DEFAULT,STORAGE_SHARED_DIR);
	Options::setDefaultValue(OPV_STATUSICONS_RULE_ICONSET,STORAGE_SHARED_DIR);

	if (FOptionsManager)
	{
		IOptionsDialogNode dnode = { ONO_STATUSICONS, OPN_STATUSICONS, tr("Status icons"), MNI_STATUSICONS_OPTIONS };
		FOptionsManager->insertOptionsDialogNode(dnode);
		FOptionsManager->insertOptionsHolder(this);
	}
	return true;
}

QMultiMap<int, IOptionsWidget *> StatusIcons::optionsWidgets(const QString &ANodeId, QWidget *AParent)
{
	QMultiMap<int, IOptionsWidget *> widgets;
	if (ANodeId == OPN_STATUSICONS)
	{
		widgets.insertMulti(OWO_STATUSICONS, new IconsOptionsWidget(this,AParent));
	}
	return widgets;
}

int StatusIcons::rosterDataOrder() const
{
	return RDHO_DEFAULT;
}

QList<int> StatusIcons::rosterDataRoles() const
{
	static QList<int> dataRoles = QList<int>()
	                              << Qt::DecorationRole;
	return dataRoles;
}

QList<int> StatusIcons::rosterDataTypes() const
{
	static QList<int> indexTypes = QList<int>()
	                               << RIT_STREAM_ROOT
	                               << RIT_CONTACT
	                               << RIT_AGENT
	                               << RIT_MY_RESOURCE;
	return indexTypes;
}

QVariant StatusIcons::rosterData(const IRosterIndex *AIndex, int ARole) const
{
	if (ARole == Qt::DecorationRole)
	{
		return iconByJid(AIndex->data(RDR_STREAM_JID).toString(),AIndex->data(RDR_FULL_JID).toString());
	}
	return QVariant();
}

bool StatusIcons::setRosterData(IRosterIndex *AIndex, int ARole, const QVariant &AValue)
{
	Q_UNUSED(AIndex);
	Q_UNUSED(ARole);
	Q_UNUSED(AValue);
	return false;
}

QList<QString> StatusIcons::rules(RuleType ARuleType) const
{
	switch (ARuleType)
	{
	case UserRule:
		return FUserRules.keys();
	case DefaultRule:
		return FDefaultRules.keys();
	}
	return QList<QString>();
}

QString StatusIcons::ruleIconset(const QString &APattern, RuleType ARuleType) const
{
	switch (ARuleType)
	{
	case UserRule:
		return FUserRules.value(APattern,STORAGE_SHARED_DIR);
	case DefaultRule:
		return FDefaultRules.value(APattern,STORAGE_SHARED_DIR);
	}
	return QString::null;
}

void StatusIcons::insertRule(const QString &APattern, const QString &ASubStorage, RuleType ARuleType)
{
	if (APattern.isEmpty() || ASubStorage.isEmpty() || !QRegExp(APattern).isValid())
		return;

	switch (ARuleType)
	{
	case UserRule:
		FUserRules.insert(APattern,ASubStorage);
		break;
	case DefaultRule:
		FDefaultRules.insert(APattern,ASubStorage);
		break;
	}

	FJid2Storage.clear();
	emit ruleInserted(APattern,ASubStorage,ARuleType);
	startStatusIconsChanged();
}

void StatusIcons::removeRule(const QString &APattern, RuleType ARuleType)
{
	switch (ARuleType)
	{
	case UserRule:
		FUserRules.remove(APattern);
		break;
	case DefaultRule:
		FDefaultRules.remove(APattern);
		break;
	}

	FJid2Storage.clear();
	emit ruleRemoved(APattern,ARuleType);
	startStatusIconsChanged();
}

QIcon StatusIcons::iconByJid(const Jid &AStreamJid, const Jid &AContactJid) const
{
	QString substorage = iconsetByJid(AContactJid);
	QString iconKey = iconKeyByJid(AStreamJid, AContactJid);
	IconStorage *storage = FStorages.value(substorage,FDefaultStorage);
	return storage!=NULL ? storage->getIcon(iconKey) : QIcon();
}

QIcon StatusIcons::iconByStatus(int AShow, const QString &ASubscription, bool AAsk) const
{
	QString iconKey = iconKeyByStatus(AShow,ASubscription,AAsk);
	return FDefaultStorage!=NULL ? FDefaultStorage->getIcon(iconKey) : QIcon();
}

QIcon StatusIcons::iconByJidStatus(const Jid &AContactJid, int AShow, const QString &ASubscription, bool AAsk) const
{
	QString substorage = iconsetByJid(AContactJid);
	QString iconKey = iconKeyByStatus(AShow,ASubscription,AAsk);
	IconStorage *storage = FStorages.value(substorage,FDefaultStorage);
	return storage!=NULL ? storage->getIcon(iconKey) : QIcon();
}

QString StatusIcons::iconsetByJid(const Jid &AContactJid) const
{
	if (!FJid2Storage.contains(AContactJid))
	{
		QRegExp regExp;
		regExp.setCaseSensitivity(Qt::CaseInsensitive);

		QString substorage;
		foreach (QString pattern, FUserRules.keys())
		{
			regExp.setPattern(pattern);
			if (AContactJid.pFull().contains(regExp))
			{
				substorage = FUserRules.value(pattern);
				break;
			}
		}

		if (substorage.isEmpty())
		{
			foreach (QString pattern, FDefaultRules.keys())
			{
				regExp.setPattern(pattern);
				if (AContactJid.pFull().contains(regExp))
				{
					substorage = FDefaultRules.value(pattern);
					break;
				}
			}
		}

		if (substorage.isEmpty())
		{
			substorage = FDefaultStorage!=NULL ? FDefaultStorage->subStorage() : STORAGE_SHARED_DIR;
		}

		FJid2Storage.insert(AContactJid,substorage);
		return substorage;
	}
	return FJid2Storage.value(AContactJid);
}

QString StatusIcons::iconKeyByJid(const Jid &AStreamJid, const Jid &AContactJid) const
{
	bool ask = false;
	int show = IPresence::Offline;
	QString subscription = SUBSCRIPTION_NONE;

	IPresence *presence = FPresencePlugin!=NULL ? FPresencePlugin->findPresence(AStreamJid) : NULL;
	if (AStreamJid == AContactJid)
	{
		subscription = SUBSCRIPTION_BOTH;
		show = presence!=NULL ? presence->show() : show;
	}
	else if (AStreamJid && AContactJid)
	{
		subscription = SUBSCRIPTION_BOTH;
		show = presence!=NULL ? presence->presenceItem(AContactJid).show : show;
	}
	else
	{
		IRoster *roster = FRosterPlugin!=NULL ? FRosterPlugin->findRoster(AStreamJid) : NULL;
		IRosterItem ritem = roster!=NULL ? roster->rosterItem(AContactJid) : IRosterItem();
		ask = !ritem.ask.isEmpty();
		subscription = ritem.subscription;
		show = presence!=NULL ? presence->presenceItem(AContactJid).show : show;
	}
	return iconKeyByStatus(show,subscription,ask);
}

QString StatusIcons::iconKeyByStatus(int AShow, const QString &ASubscription, bool AAsk) const
{
	switch (AShow)
	{
	case IPresence::Offline:
		if (AAsk)
			return STI_ASK;
		if (ASubscription==SUBSCRIPTION_NONE)
			return STI_NOAUTH;
		return STI_OFFLINE;
	case IPresence::Online:
		return STI_ONLINE;
	case IPresence::Chat:
		return STI_CHAT;
	case IPresence::Away:
		return STI_AWAY;
	case IPresence::ExtendedAway:
		return STI_XAWAY;
	case IPresence::DoNotDisturb:
		return STI_DND;
	case IPresence::Invisible:
		return STI_INVISIBLE;
	default:
		return STI_ERROR;
	}
}

QString StatusIcons::iconFileName(const QString &ASubStorage, const QString &AIconKey) const
{
	IconStorage *storage = FStorages.value(ASubStorage,FDefaultStorage);
	return storage!=NULL ? storage->fileFullName(AIconKey) : QString::null;
}

void StatusIcons::loadStorages()
{
	clearStorages();

	QList<QString> storages = FileStorage::availSubStorages(RSR_STORAGE_STATUSICONS);
	foreach(QString substorage, storages)
	{
		IconStorage *storage = new IconStorage(RSR_STORAGE_STATUSICONS,substorage,this);
		FStorages.insert(substorage,storage);

		QString pattern = storage->option(STO_PATTERN);
		if (!pattern.isEmpty())
		{
			insertRule(pattern,substorage,IStatusIcons::DefaultRule);
			FStatusRules += pattern;
		}

		QString name = storage->option(STORAGE_NAME);
		Action *action = new Action(FCustomIconMenu);
		action->setCheckable(true);
		action->setIcon(storage->getIcon(iconKeyByStatus(IPresence::Online,QString::null,false)));
		action->setText(!name.isEmpty() ? name : substorage);
		action->setData(ADR_SUBSTORAGE,substorage);
		connect(action,SIGNAL(triggered(bool)),SLOT(onSetCustomIconset(bool)));
		FCustomIconActions.insert(substorage,action);
		FCustomIconMenu->addAction(action,AG_DEFAULT,true);
	}
}

void StatusIcons::clearStorages()
{
	foreach(QString rule, FStatusRules)
		removeRule(rule,IStatusIcons::DefaultRule);
	FStatusRules.clear();
	FCustomIconActions.clear();
	qDeleteAll(FStorages);
	qDeleteAll(FCustomIconMenu->groupActions(AG_DEFAULT));
}

void StatusIcons::startStatusIconsChanged()
{
	if (!FStatusIconsChangedStarted)
	{
		QTimer::singleShot(0,this,SLOT(onStatusIconsChangedTimer()));
		FStatusIconsChangedStarted = true;
	}
}

void StatusIcons::updateCustomIconMenu(const QStringList &APatterns)
{
	QString substorage = ruleIconset(APatterns.value(0),IStatusIcons::UserRule);
	FDefaultIconAction->setData(ADR_RULE,APatterns);
	FDefaultIconAction->setIcon(iconByStatus(IPresence::Online,SUBSCRIPTION_BOTH,false));
	FDefaultIconAction->setChecked(APatterns.count()==1 && FDefaultStorage!=NULL && FDefaultStorage->subStorage()==substorage);
	foreach(Action *action, FCustomIconActions)
	{
		action->setData(ADR_RULE, APatterns);
		action->setChecked(APatterns.count()==1 && action->data(ADR_SUBSTORAGE).toString()==substorage);
	}
}

bool StatusIcons::isSelectionAccepted(const QList<IRosterIndex *> &ASelected) const
{
	if (!ASelected.isEmpty())
	{
		foreach(IRosterIndex *index, ASelected)
		{
			Jid streamJid = index->data(RDR_STREAM_JID).toString();
			Jid contactJid = index->data(RDR_PREP_BARE_JID).toString();
			if (!contactJid.isValid() || contactJid.pBare()==streamJid.pBare())
				return false;
		}
		return true;
	}
	return false;
}

void StatusIcons::onStatusIconsChangedTimer()
{
	emit statusIconsChanged();
	emit rosterDataChanged(NULL,Qt::DecorationRole);
	FStatusIconsChangedStarted = false;
}

void StatusIcons::onPresenceChanged(IPresence *APresence, int AShow, const QString &AStatus, int APriority)
{
	Q_UNUSED(AShow); Q_UNUSED(AStatus); Q_UNUSED(APriority);
	IRosterIndex *index = FRostersModel!=NULL ? FRostersModel->streamRoot(APresence->streamJid()) : NULL;
	if (index)
		emit rosterDataChanged(index,Qt::DecorationRole);
}

void StatusIcons::onRosterItemReceived(IRoster *ARoster, const IRosterItem &AItem, const IRosterItem &ABefore)
{
	if (FRostersModel && (AItem.subscription!=ABefore.subscription || AItem.ask!=ABefore.ask))
	{
		foreach (IRosterIndex *index, FRostersModel->getContactIndexList(ARoster->streamJid(),AItem.itemJid))
			emit rosterDataChanged(index,Qt::DecorationRole);
	}
}

void StatusIcons::onPresenceItemReceived(IPresence *APresence, const IPresenceItem &AItem, const IPresenceItem &ABefore)
{
	if (FRostersModel && AItem.show!=ABefore.show)
	{
		foreach (IRosterIndex *index, FRostersModel->getContactIndexList(APresence->streamJid(),AItem.itemJid))
			emit rosterDataChanged(index,Qt::DecorationRole);
	}
}

void StatusIcons::onRosterIndexMultiSelection(const QList<IRosterIndex *> &ASelected, bool &AAccepted)
{
	AAccepted = AAccepted || isSelectionAccepted(ASelected);
}

void StatusIcons::onRosterIndexContextMenu(const QList<IRosterIndex *> &AIndexes, quint32 ALabelId, Menu *AMenu)
{
	if (ALabelId==AdvancedDelegateItem::DisplayId && isSelectionAccepted(AIndexes))
	{
		QMap<int, QStringList> rolesMap = FRostersViewPlugin->rostersView()->indexesRolesMap(AIndexes,QList<int>()<<RDR_PREP_BARE_JID,RDR_PREP_BARE_JID);
		
		QStringList patterns;
		foreach(QString contactJid, rolesMap.value(RDR_PREP_BARE_JID))
			patterns.append(QRegExp::escape(contactJid));
		updateCustomIconMenu(patterns);

		if (AIndexes.count() > 1)
			FCustomIconMenu->setIcon(iconByStatus(IPresence::Online,SUBSCRIPTION_BOTH,false));
		else if (AIndexes.count() == 1)
			FCustomIconMenu->setIcon(iconByJidStatus(AIndexes.first()->data(RDR_FULL_JID).toString(),IPresence::Online,SUBSCRIPTION_BOTH,false));

		AMenu->addAction(FCustomIconMenu->menuAction(),AG_RVCM_STATUSICONS,true);
	}
}

void StatusIcons::onMultiUserContextMenu(IMultiUserChatWindow *AWindow, IMultiUser *AUser, Menu *AMenu)
{
	Q_UNUSED(AWindow);
	QString rule = QString(".*@%1/%2").arg(QRegExp::escape(AUser->contactJid().domain())).arg(QRegExp::escape(AUser->nickName()));
	updateCustomIconMenu(QStringList()<<rule);
	FCustomIconMenu->setIcon(iconByJidStatus(AUser->contactJid(),IPresence::Online,SUBSCRIPTION_BOTH,false));
	AMenu->addAction(FCustomIconMenu->menuAction(),AG_MUCM_STATUSICONS,true);
}

void StatusIcons::onOptionsOpened()
{
	foreach(QString nspace, Options::node(OPV_STATUSICONS_RULES_ROOT).childNSpaces("rule"))
	{
		OptionsNode ruleNode = Options::node(OPV_STATUSICONS_RULES_ROOT).node("rule",nspace);
		insertRule(ruleNode.value("pattern").toString(),ruleNode.value("iconset").toString(),IStatusIcons::UserRule);
	}
	onOptionsChanged(Options::node(OPV_STATUSICONS_DEFAULT));
}

void StatusIcons::onOptionsClosed()
{
	Options::node(OPV_STATUSICONS_RULES_ROOT).removeChilds();

	int nspace = 0;
	QMap<QString,QString>::const_iterator it = FUserRules.constBegin();
	while (it != FUserRules.constEnd())
	{
		OptionsNode ruleNode = Options::node(OPV_STATUSICONS_RULES_ROOT).node("rule",QString::number(nspace));
		ruleNode.setValue(it.key(),"pattern");
		ruleNode.setValue(it.value(),"iconset");
		++it;
		nspace++;
	}
}

void StatusIcons::onOptionsChanged(const OptionsNode &ANode)
{
	if (FDefaultStorage && ANode.path()==OPV_STATUSICONS_DEFAULT)
	{
		if (IconStorage::availSubStorages(RSR_STORAGE_STATUSICONS).contains(ANode.value().toString()))
			FDefaultStorage->setSubStorage(ANode.value().toString());
		else
			FDefaultStorage->setSubStorage(STORAGE_SHARED_DIR);
	}
}

void StatusIcons::onDefaultIconsetChanged()
{
	IconStorage *storage = qobject_cast<IconStorage*>(sender());
	if (storage)
	{
		FJid2Storage.clear();
		emit defaultIconsetChanged(storage->subStorage());
		emit defaultIconsChanged();
		startStatusIconsChanged();
	}
}

void StatusIcons::onSetCustomIconset(bool)
{
	Action *action = qobject_cast<Action *>(sender());
	if (action)
	{
		QString substorage = action->data(ADR_SUBSTORAGE).toString();
		foreach(QString rule, action->data(ADR_RULE).toStringList())
		{
			if (substorage.isEmpty())
				removeRule(rule,IStatusIcons::UserRule);
			else
				insertRule(rule,substorage,IStatusIcons::UserRule);
		}
	}
}

Q_EXPORT_PLUGIN2(plg_statusicons, StatusIcons)
