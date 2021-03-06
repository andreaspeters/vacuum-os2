#include "presenceplugin.h"

PresencePlugin::PresencePlugin()
{
	FXmppStreams = NULL;
	FStanzaProcessor = NULL;
}

PresencePlugin::~PresencePlugin()
{

}

//IPlugin
void PresencePlugin::pluginInfo(IPluginInfo *APluginInfo)
{
	APluginInfo->name = tr("Presence Manager");
	APluginInfo->description = tr("Allows other modules to obtain information about the status of contacts in the roster");
	APluginInfo->version = "1.0";
	APluginInfo->author = "Potapov S.A. aka Lion";
	APluginInfo->homePage = "http://www.vacuum-im.org";
	APluginInfo->dependences.append(XMPPSTREAMS_UUID);
	APluginInfo->dependences.append(STANZAPROCESSOR_UUID);
}

bool PresencePlugin::initConnections(IPluginManager *APluginManager, int &AInitOrder)
{
	Q_UNUSED(AInitOrder);
	IPlugin *plugin = APluginManager->pluginInterface("IXmppStreams").value(0,NULL);
	if (plugin)
	{
		FXmppStreams = qobject_cast<IXmppStreams *>(plugin->instance());
		if (FXmppStreams)
		{
			connect(FXmppStreams->instance(), SIGNAL(added(IXmppStream *)), SLOT(onStreamAdded(IXmppStream *)));
			connect(FXmppStreams->instance(), SIGNAL(removed(IXmppStream *)), SLOT(onStreamRemoved(IXmppStream *)));
		}
	}

	plugin = APluginManager->pluginInterface("IStanzaProcessor").value(0,NULL);
	if (plugin)
		FStanzaProcessor = qobject_cast<IStanzaProcessor *>(plugin->instance());

	return FXmppStreams!=NULL && FStanzaProcessor!=NULL;
}


//IPresencePlugin
IPresence *PresencePlugin::getPresence(IXmppStream *AXmppStream)
{
	IPresence *presence = findPresence(AXmppStream->streamJid());
	if (!presence)
	{
		presence = new Presence(AXmppStream,FStanzaProcessor);
		connect(presence->instance(),SIGNAL(destroyed(QObject *)),SLOT(onPresenceDestroyed(QObject *)));
		FCleanupHandler.add(presence->instance());
		FPresences.append(presence);
	}
	return presence;
}

IPresence *PresencePlugin::findPresence(const Jid &AStreamJid) const
{
	foreach(IPresence *presence, FPresences)
		if (presence->streamJid() == AStreamJid)
			return presence;
	return NULL;
}

void PresencePlugin::removePresence(IXmppStream *AXmppStream)
{
	IPresence *presence = findPresence(AXmppStream->streamJid());
	if (presence)
	{
		disconnect(presence->instance(),SIGNAL(destroyed(QObject *)),this,SLOT(onPresenceDestroyed(QObject *)));
		FPresences.removeAt(FPresences.indexOf(presence));
		delete presence->instance();
	}
}

void PresencePlugin::onPresenceOpened()
{
	Presence *presence = qobject_cast<Presence *>(sender());
	if (presence)
	{
		emit streamStateChanged(presence->streamJid(),true);
		emit presenceOpened(presence);
	}
}

void PresencePlugin::onPresenceChanged(int AShow, const QString &AStatus, int APriority)
{
	Presence *presence = qobject_cast<Presence *>(sender());
	if (presence)
		emit presenceChanged(presence,AShow,AStatus,APriority);
}

void PresencePlugin::onPresenceItemReceived(const IPresenceItem &AItem, const IPresenceItem &ABefore)
{
	Presence *presence = qobject_cast<Presence *>(sender());
	if (presence)
	{
		if (AItem.show != IPresence::Offline && AItem.show != IPresence::Error)
		{
			QSet<IPresence *> &presences = FContactPresences[AItem.itemJid];
			if (presences.isEmpty())
				emit contactStateChanged(presence->streamJid(),AItem.itemJid,true);
			presences += presence;
		}
		else if (FContactPresences.contains(AItem.itemJid))
		{
			QSet<IPresence *> &presences = FContactPresences[AItem.itemJid];
			presences -= presence;
			if (presences.isEmpty())
			{
				FContactPresences.remove(AItem.itemJid);
				emit contactStateChanged(presence->streamJid(),AItem.itemJid,false);
			}
		}
		emit presenceItemReceived(presence,AItem,ABefore);
	}
}

void PresencePlugin::onPresenceDirectSent(const Jid &AContactJid, int AShow, const QString &AStatus, int APriority)
{
	Presence *presence = qobject_cast<Presence *>(sender());
	if (presence)
		emit presenceDirectSent(presence,AContactJid,AShow,AStatus,APriority);
}

void PresencePlugin::onPresenceAboutToClose(int AShow, const QString &AStatus)
{
	Presence *presence = qobject_cast<Presence *>(sender());
	if (presence)
		emit presenceAboutToClose(presence,AShow,AStatus);
}

void PresencePlugin::onPresenceClosed()
{
	Presence *presence = qobject_cast<Presence *>(sender());
	if (presence)
	{
		emit streamStateChanged(presence->streamJid(),false);
		emit presenceClosed(presence);
	}
}

void PresencePlugin::onPresenceDestroyed(QObject *AObject)
{
	IPresence *presence = qobject_cast<IPresence *>(AObject);
	FPresences.removeAt(FPresences.indexOf(presence));
}

void PresencePlugin::onStreamAdded(IXmppStream *AXmppStream)
{
	IPresence *presence = getPresence(AXmppStream);
	connect(presence->instance(),SIGNAL(opened()),SLOT(onPresenceOpened()));
	connect(presence->instance(),SIGNAL(changed(int, const QString &, int)),
		SLOT(onPresenceChanged(int, const QString &, int)));
	connect(presence->instance(),SIGNAL(itemReceived(const IPresenceItem &, const IPresenceItem &)),
		SLOT(onPresenceItemReceived(const IPresenceItem &, const IPresenceItem &)));
	connect(presence->instance(),SIGNAL(directSent(const Jid &, int, const QString &, int)),
		SLOT(onPresenceDirectSent(const Jid &, int, const QString &, int)));
	connect(presence->instance(),SIGNAL(aboutToClose(int,const QString &)),
		SLOT(onPresenceAboutToClose(int,const QString &)));
	connect(presence->instance(),SIGNAL(closed()),SLOT(onPresenceClosed()));
	emit presenceAdded(presence);
}

void PresencePlugin::onStreamRemoved(IXmppStream *AXmppStream)
{
	IPresence *presence = findPresence(AXmppStream->streamJid());
	if (presence)
	{
		emit presenceRemoved(presence);
		removePresence(AXmppStream);
	}
}

Q_EXPORT_PLUGIN2(plg_presence, PresencePlugin)
