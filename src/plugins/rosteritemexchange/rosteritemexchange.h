#ifndef ROSTERITEMEXCHANGE_H
#define ROSTERITEMEXCHANGE_H

#include <definitions/namespaces.h>
#include <definitions/resources.h>
#include <definitions/menuicons.h>
#include <definitions/soundfiles.h>
#include <definitions/optionnodes.h>
#include <definitions/optionvalues.h>
#include <definitions/optionwidgetorders.h>
#include <definitions/notificationtypes.h>
#include <definitions/notificationdataroles.h>
#include <definitions/notificationtypeorders.h>
#include <definitions/rosterindextyperole.h>
#include <definitions/rosternotifyorders.h>
#include <definitions/stanzahandlerorders.h>
#include <definitions/rosterdragdropmimetypes.h>
#include <interfaces/ipluginmanager.h>
#include <interfaces/irosteritemexchange.h>
#include <interfaces/iroster.h>
#include <interfaces/ipresence.h>
#include <interfaces/irosterchanger.h>
#include <interfaces/iservicediscovery.h>
#include <interfaces/istanzaprocessor.h>
#include <interfaces/ioptionsmanager.h>
#include <interfaces/inotifications.h>
#include <interfaces/irostersview.h>
#include <interfaces/igateways.h>
#include <interfaces/imessagewidgets.h>
#include <utils/message.h>
#include <utils/options.h>
#include <utils/iconstorage.h>
#include <utils/widgetmanager.h>
#include "exchangeapprovedialog.h"

class RosterItemExchange : 
	public QObject,
	public IPlugin,
	public IRosterItemExchange,
	public IOptionsHolder,
	public IStanzaHandler,
	public IStanzaRequestOwner,
	public IViewDropHandler,
	public IRostersDragDropHandler
{
	Q_OBJECT;
	Q_INTERFACES(IPlugin IRosterItemExchange IOptionsHolder IStanzaHandler IStanzaRequestOwner IViewDropHandler IRostersDragDropHandler);
public:
	RosterItemExchange();
	~RosterItemExchange();
	virtual QObject *instance() { return this; }
	//IPlugin
	virtual QUuid pluginUuid() const { return ROSTERITEMEXCHANGE_UUID; }
	virtual void pluginInfo(IPluginInfo *APluginInfo);
	virtual bool initConnections(IPluginManager *APluginManager, int &AInitOrder);
	virtual bool initObjects();
	virtual bool initSettings();
	virtual bool startPlugin() { return true; }
	//IStanzaHandler
	virtual bool stanzaReadWrite(int AHandleId, const Jid &AStreamJid, Stanza &AStanza, bool &AAccept);
	//IStanzaRequestOwner
	virtual void stanzaRequestResult(const Jid &AStreamJid, const Stanza &AStanza);
	//IOptionsHolder
	virtual QMultiMap<int, IOptionsWidget *> optionsWidgets(const QString &ANodeId, QWidget *AParent);
	//IViewDropHandler
	virtual bool viewDragEnter(IViewWidget *AWidget, const QDragEnterEvent *AEvent);
	virtual bool viewDragMove(IViewWidget *AWidget, const QDragMoveEvent *AEvent);
	virtual void viewDragLeave(IViewWidget *AWidget, const QDragLeaveEvent *AEvent);
	virtual bool viewDropAction(IViewWidget *AWidget, const QDropEvent *AEvent, Menu *AMenu);
	//IRostersDragDropHandler
	virtual Qt::DropActions rosterDragStart(const QMouseEvent *AEvent, IRosterIndex *AIndex, QDrag *ADrag);
	virtual bool rosterDragEnter(const QDragEnterEvent *AEvent);
	virtual bool rosterDragMove(const QDragMoveEvent *AEvent, IRosterIndex *AHover);
	virtual void rosterDragLeave(const QDragLeaveEvent *AEvent);
	virtual bool rosterDropAction(const QDropEvent *AEvent, IRosterIndex *AIndex, Menu *AMenu);
	//IRosterItemExchange
	virtual bool isSupported(const Jid &AStreamJid, const Jid &AContactJid) const;
	virtual QString sendExchangeRequest(const IRosterExchangeRequest &ARequest, bool AIqQuery = true);
signals:
	void exchangeRequestSent(const IRosterExchangeRequest &ARequest);
	void exchangeRequestReceived(const IRosterExchangeRequest &ARequest);
	void exchangeRequestApplied(const IRosterExchangeRequest &ARequest);
	void exchangeRequestApproved(const IRosterExchangeRequest &ARequest);
	void exchangeRequestFailed(const IRosterExchangeRequest &ARequest, const XmppError &AError);
protected:
	QList<IRosterItem> dragDataContacts(const QMimeData *AData) const;
	QList<IRosterItem> dropDataContacts(const Jid &AStreamJid, const Jid &AContactJid, const QMimeData *AData) const;
	bool insertDropActions(const Jid &AStreamJid, const Jid &AContactJid, const QMimeData *AData, Menu *AMenu) const;
protected:
	void processRequest(const IRosterExchangeRequest &ARequest);
	void notifyExchangeRequest(ExchangeApproveDialog *ADialog);
	bool applyRequest(const IRosterExchangeRequest &ARequest, bool ASubscribe, bool ASilent);
	void replyRequestResult(const IRosterExchangeRequest &ARequest);
	void replyRequestError(const IRosterExchangeRequest &ARequest, const XmppStanzaError &AError);
	void notifyInChatWindow(const Jid &AStreamJid, const Jid &AContactJid, const QString &AMessage) const;
protected:
	bool eventFilter(QObject *AObject, QEvent *AEvent);
protected slots:
	void onSendExchangeRequestByAction();
	void onNotificationActivated(int ANotifyId);
	void onNotificationRemoved(int ANotifyId);
	void onExchangeApproveDialogAccepted();
	void onExchangeApproveDialogRejected();
	void onExchangeApproveDialogDestroyed();
private:
	IGateways *FGateways;
	IRosterPlugin *FRosterPlugin;
	IRosterChanger *FRosterChanger;
	IPresencePlugin *FPresencePlugin;
	IServiceDiscovery *FDiscovery;
	IStanzaProcessor *FStanzaProcessor;
	IOptionsManager *FOptionsManager;
	INotifications *FNotifications;
	IMessageWidgets *FMessageWidgets;
	IRostersViewPlugin *FRostersViewPlugin;
private:
	int FSHIExchangeRequest;
	QMap<QString,IRosterExchangeRequest> FSentRequests;
	QMap<int, ExchangeApproveDialog *> FNotifyApproveDialog;
};

#endif // ROSTERITEMEXCHANGE_H
