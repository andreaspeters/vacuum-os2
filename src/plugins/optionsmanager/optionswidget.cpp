#include "optionswidget.h"

#include <QKeyEvent>
#include <QKeySequence>
#include <QIntValidator>
#include <QDoubleValidator>

// ?????? ?????????? ??? ?????? ?????????? ????? ? ????????? ????????
#define CAPTION_STRATCH 3

OptionsWidget::OptionsWidget(const OptionsNode &ANode, const QString &ACaption, QWidget *AParent) : QWidget(AParent)
{
	FNode = ANode;
	FValue = FNode.value();
	QHBoxLayout *FLayout = new QHBoxLayout(this);

	if (FValue.type() == QVariant::Bool)
	{
		FCheckBox = new QCheckBox(ACaption,this);
		FCheckBox->setChecked(FValue.toBool());
		connect(FCheckBox,SIGNAL(stateChanged(int)),SIGNAL(modified()));
		FLayout->addWidget(FCheckBox);
	}
	else if (FValue.type()==QVariant::Time || FValue.type()==QVariant::Date || FValue.type()==QVariant::DateTime)
	{
		if (FValue.type() == QVariant::Time)
			FDateTimeEdit = new QTimeEdit(FValue.toTime(), this);
		else if (FValue.type() == QVariant::Date)
			FDateTimeEdit = new QDateEdit(FValue.toDate(), this);
		else
			FDateTimeEdit = new QDateTimeEdit(FValue.toDateTime(),this);
		FDateTimeEdit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
		connect(FDateTimeEdit,SIGNAL(dateTimeChanged(const QDateTime &)),SIGNAL(modified()));
		insertCaption(ACaption,FDateTimeEdit,FLayout);
		FLayout->addWidget(FDateTimeEdit);
	}
	else if (FValue.type() == QVariant::Color)
	{
		FComboBox = new QComboBox(this);
		foreach(QString color, QColor::colorNames())
		{
			FComboBox->addItem(color,QColor(color));
			FComboBox->setItemData(FComboBox->count()-1,QColor(color),Qt::DecorationRole);
		}
		FComboBox->setCurrentIndex(FComboBox->findData(FValue));
		FComboBox->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
		connect(FComboBox,SIGNAL(currentIndexChanged(int)),SIGNAL(modified()));
		insertCaption(ACaption,FComboBox,FLayout);
		FLayout->addWidget(FComboBox);
	}
	else if (FValue.type() == QVariant::Font)
	{
		FFontComboBox = new QFontComboBox(this);
		FFontComboBox->setCurrentFont(FValue.value<QFont>());
		FFontComboBox->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
		connect(FFontComboBox,SIGNAL(currentFontChanged(const QFont &)),SIGNAL(modified()));
		insertCaption(ACaption,FFontComboBox,FLayout);
		FLayout->addWidget(FFontComboBox);
	}
	else if (FValue.canConvert(QVariant::String))
	{
		FLineEdit = new QLineEdit(this);
		FLineEdit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
		if (FValue.type()==QVariant::Int || FValue.type()==QVariant::LongLong)
		{
			QIntValidator *validator = new QIntValidator(FLineEdit);
			FLineEdit->setValidator(validator);
		}
		else if (FValue.type()==QVariant::UInt || FValue.type()==QVariant::ULongLong)
		{
			QIntValidator *validator = new QIntValidator(FLineEdit);
			validator->setBottom(0);
			FLineEdit->setValidator(validator);
		}
		else if (FValue.type() == QVariant::Double)
		{
			QDoubleValidator *validator = new QDoubleValidator(FLineEdit);
			FLineEdit->setValidator(validator);
		}
		else if (FValue.type() == QVariant::KeySequence)
		{
			FLineEdit->installEventFilter(this);
		}
		FLineEdit->setText(FValue.toString());
		connect(FLineEdit,SIGNAL(textChanged(const QString &)),SIGNAL(modified()));
		insertCaption(ACaption,FLineEdit,FLayout);
		FLayout->addWidget(FLineEdit);
	}

	setLayout(FLayout);
	layout()->setMargin(0);
}

OptionsWidget::~OptionsWidget()
{

}

void OptionsWidget::apply()
{
	if (FValue.type() == QVariant::Bool)
	{
		FValue = FCheckBox->isChecked();
	}
	else if (FValue.type() == QVariant::Time)
	{
		FValue = FDateTimeEdit->time();
	}
	else if (FValue.type() == QVariant::Date)
	{
		FValue = FDateTimeEdit->date();
	}
	else if (FValue.type() == QVariant::DateTime)
	{
		FValue = FDateTimeEdit->dateTime();
	}
	else if (FValue.type() == QVariant::Color)
	{
		if (FComboBox->currentIndex() >= 0)
			FValue = FComboBox->itemData(FComboBox->currentIndex());
	}
	else if (FValue.type() == QVariant::Font)
	{
		FValue = FFontComboBox->currentFont();
	}
	else if (FValue.canConvert(QVariant::String))
	{
		QVariant strValue = FLineEdit->text();
		if (strValue.convert(FValue.type()))
			FValue = strValue;
	}
	FNode.setValue(FValue);

	emit childApply();
}

void OptionsWidget::reset()
{
	if (FValue.type() == QVariant::Bool)
	{
		FCheckBox->setChecked(FValue.toBool());
	}
	else if (FValue.type() == QVariant::Time)
	{
		FDateTimeEdit->setTime(FValue.toTime());
	}
	else if (FValue.type() == QVariant::Date)
	{
		FDateTimeEdit->setDate(FValue.toDate());
	}
	else if (FValue.type() == QVariant::DateTime)
	{
		FDateTimeEdit->setDateTime(FValue.toDateTime());
	}
	else if (FValue.type() == QVariant::Color)
	{
		FComboBox->setCurrentIndex(FComboBox->findData(FValue));
	}
	else if (FValue.type() == QVariant::Font)
	{
		FFontComboBox->setCurrentFont(FValue.value<QFont>());
	}
	else if (FValue.canConvert(QVariant::String))
	{
		FLineEdit->setText(FValue.toString());
	}
	emit childReset();
}

void OptionsWidget::insertCaption(const QString &ACaption, QWidget *ABuddy, QHBoxLayout *ALayout)
{
	if (!ACaption.isEmpty())
	{
		FLabel = new QLabel(this);
		FLabel->setWordWrap(true);
		FLabel->setTextFormat(Qt::PlainText);
		FLabel->setText(ACaption);
		FLabel->setBuddy(ABuddy);
		ALayout->addWidget(FLabel,CAPTION_STRATCH);
	}
}

bool OptionsWidget::eventFilter(QObject *AWatched, QEvent *AEvent)
{
	if (FValue.type()==QVariant::KeySequence && AWatched==FLineEdit && AEvent->type()==QEvent::KeyPress)
	{
		static const int extKeyMask = 0x01000000;
		static const int modifMask = Qt::META|Qt::SHIFT|Qt::CTRL|Qt::ALT;
		static const QList<int> controlKeys =  QList<int>() <<  Qt::Key_Shift << Qt::Key_Control << Qt::Key_Meta << Qt::Key_Alt << Qt::Key_AltGr;

		QKeyEvent *keyEvent = static_cast<QKeyEvent *>(AEvent);
		if (keyEvent->key()==0 || keyEvent->key()==Qt::Key_unknown)
			return true;
		if (keyEvent->key()>0x7F && (keyEvent->key() & extKeyMask)==0)
			return true;
		if (controlKeys.contains(keyEvent->key()))
			return true;
		if ((keyEvent->modifiers() & modifMask)==Qt::SHIFT && (keyEvent->key() & extKeyMask)==0)
			return true;

		QKeySequence keySeq((keyEvent->modifiers() & modifMask) | keyEvent->key());
		FLineEdit->setText(keySeq.toString(QKeySequence::NativeText));
		return true;
	}
	return QWidget::eventFilter(AWatched,AEvent);
}
