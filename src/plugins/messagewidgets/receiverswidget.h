#ifndef RECEIVERSWIDGET_H
#define RECEIVERSWIDGET_H

#include <definitions/rosterindextyperole.h>
#include <interfaces/imessagewidgets.h>
#include <interfaces/iroster.h>
#include <interfaces/ipresence.h>
#include <interfaces/istatusicons.h>
#include <interfaces/irostersmodel.h>
#include "ui_receiverswidget.h"

class ReceiversWidget :
			public QWidget,
			public IReceiversWidget
{
	Q_OBJECT;
	Q_INTERFACES(IReceiversWidget);
public:
	ReceiversWidget(IMessageWidgets *AMessageWidgets, const Jid &AStreamJid, QWidget *AParent);
	~ReceiversWidget();
	virtual QWidget *instance() { return this; }
	virtual const Jid &streamJid() const { return FStreamJid; }
	virtual void setStreamJid(const Jid &AStreamJid);
	virtual QList<Jid> receivers() const { return FReceivers; }
	virtual QString receiverName(const Jid &AReceiver) const;
	virtual void addReceiversGroup(const QString &AGroup);
	virtual void removeReceiversGroup(const QString &AGroup);
	virtual void addReceiver(const Jid &AReceiver);
	virtual void removeReceiver(const Jid &AReceiver);
	virtual void clear();
signals:
	void streamJidChanged(const Jid &ABefore);
	void receiverAdded(const Jid &AReceiver);
	void receiverRemoved(const Jid &AReceiver);
protected:
	void initialize();
	QTreeWidgetItem *getReceiversGroup(const QString &AGroup);
	QTreeWidgetItem *getReceiver(const Jid &AReceiver, const QString &AName, QTreeWidgetItem *AParent);
	void createRosterTree();
protected slots:
	void onReceiversItemChanged(QTreeWidgetItem *AItem, int AColumn);
	void onSelectAllClicked();
	void onSelectAllOnlineClicked();
	void onSelectNoneClicked();
	void onAddClicked();
	void onUpdateClicked();
private:
	Ui::ReceiversWidgetClass ui;
private:
	IMessageWidgets *FMessageWidgets;
	IRoster *FRoster;
	IPresence *FPresence;
	IStatusIcons *FStatusIcons;
	IRostersModel *FRostersModel;
private:
	Jid FStreamJid;
	QList<Jid> FReceivers;
	QHash<QString,QTreeWidgetItem *> FGroupItems;
	QMultiHash<Jid,QTreeWidgetItem *> FContactItems;
};

#endif // RECEIVERSWIDGET_H
