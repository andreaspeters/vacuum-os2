#ifndef PEPMANAGER_H
#define PEPMANAGER_H

#include <definitions/namespaces.h>
#include <interfaces/ipluginmanager.h>
#include <interfaces/ipepmanager.h>
#include <interfaces/istanzaprocessor.h>
#include <interfaces/iservicediscovery.h>
#include <interfaces/ixmppstreams.h>

class PEPManager : 
	public QObject,
	public IPlugin,
	public IPEPManager,
	public IStanzaHandler
{
	Q_OBJECT;
	Q_INTERFACES(IPlugin IPEPManager IStanzaHandler);
public:
	PEPManager();
	~PEPManager();
	// IPlugin
	virtual QObject *instance() { return this; }
	virtual QUuid pluginUuid() const { return PEPMANAGER_UUID; }
	virtual void pluginInfo(IPluginInfo *APluginInfo);
	virtual bool initConnections(IPluginManager *APluginManager, int &AInitOrder);
	virtual bool initObjects() { return true; }
	virtual bool initSettings() { return true; }
	virtual bool startPlugin() { return true; }
	// IStanzaHandler
	virtual bool stanzaReadWrite(int AHandleId, const Jid &AStreamJid, Stanza &AStanza, bool &AAccept);
	// IPEPManager
	virtual bool isSupported(const Jid &AStreamJid) const;
	virtual bool publishItem(const Jid &AStreamJid, const QString &ANode, const QDomElement &AItem);
	virtual IPEPHandler* nodeHandler(int AHandleId) const;
	virtual int insertNodeHandler(const QString &ANode, IPEPHandler *AHandle);
	virtual bool removeNodeHandler(int AHandleId);
private slots:
	void onStreamOpened(IXmppStream *AXmppStream);
	void onStreamClosed(IXmppStream *AXmppStream);
	void onPEPHandlerDestroyed(QObject *AHandler);
private:
	IXmppStreams *FXmppStreams;
	IServiceDiscovery *FDiscovery;
	IStanzaProcessor *FStanzaProcessor;
private:
	QMap<Jid, int> stanzaHandles;
	QMap<int, IPEPHandler *> handlersById;
	QMultiMap<QString, int> handlersByNode;
};

#endif // PEPMANAGER_H
