#include "statusbarwidget.h"

StatusBarWidget::StatusBarWidget(IInfoWidget *AInfo, IViewWidget *AView, IEditWidget *AEdit, IReceiversWidget *AReceivers, QWidget *AParent) : QStatusBar(AParent)
{
	FInfoWidget = AInfo;
	FViewWidget = AView;
	FEditWidget = AEdit;
	FReceiversWidget = AReceivers;
	FStatusBarChanger = new StatusBarChanger(this);
}

StatusBarWidget::~StatusBarWidget()
{

}
