#include "optionswidget.h"

#include <QtGui/QVBoxLayout>

OptionsWidget::OptionsWidget(QWidget *optpage, QWidget *AParent)
	: QWidget(AParent)
{
	QVBoxLayout* l = new QVBoxLayout(this);
	l->setSpacing(0);
	l->setMargin(0);
	l->addWidget(optpage);

	reset();
}

OptionsWidget::~OptionsWidget()
{

}

void OptionsWidget::apply()
{
	emit childApply();
}

void OptionsWidget::reset()
{
	emit childReset();
}
