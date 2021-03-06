#ifndef NOTIFYWIDGET_H
#define NOTIFYWIDGET_H

#include <QMouseEvent>
#include <QDesktopWidget>
#include <QNetworkAccessManager>
#include <definitions/optionvalues.h>
#include <definitions/notificationdataroles.h>
#include <interfaces/inotifications.h>
#include <interfaces/imainwindow.h>
#include <utils/message.h>
#include <utils/options.h>
#include <utils/textmanager.h>
#include "ui_notifywidget.h"

class NotifyWidget :
			public QWidget
{
	Q_OBJECT;
public:
	NotifyWidget(const INotification &ANotification);
	~NotifyWidget();
	void appear();
	void animateTo(int AYPos);
	void setAnimated(bool AAnimated);
	void setNetworkAccessManager(QNetworkAccessManager *ANetworkAccessManager);
	static void setMainWindow(IMainWindow *AMainWindow);
signals:
	void notifyActivated();
	void notifyRemoved();
	void windowDestroyed();
protected:
	virtual void resizeEvent(QResizeEvent *AEvent);
	virtual void mouseReleaseEvent(QMouseEvent *AEvent);
protected slots:
	void onAnimateStep();
	void adjustHeight();
	void updateElidedText();
private:
	Ui::NotifyWidgetClass ui;
private:
	int FYPos;
	int FTimeOut;
	int FAnimateStep;
	QString FTitle;
	QString FCaption;
private:
	static void layoutWidgets();
	static IMainWindow *FMainWindow;
	static QDesktopWidget *FDesktop;
	static QList<NotifyWidget *> FWidgets;
	static QRect FDisplay;
};

#endif // NOTIFYWIDGET_H
