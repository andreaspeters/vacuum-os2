#pragma once

#include <interfaces/ipluginmanager.h>
#include <interfaces/istanzaprocessor.h>

#include <utils/message.h>

#include "OtrMessaging.hpp"

class IAccountManager;

class StanzaCatcher
	: public QObject
	, public IStanzaHandler
{
public:
	static const char* SkipOtrCatcherFlag()
	{
		return "skip_otr_processing";
	}

	StanzaCatcher(otr::OtrMessaging* otr, IAccountManager* accMan,QObject* parent);
	virtual QObject *instance();
	virtual bool stanzaReadWrite(int AHandleId, const Jid &AStreamJid, Stanza &AStanza, bool &AAccept);
protected:
	otr::OtrMessaging* otr();
	IAccountManager* accountManager();
	QString removeResourceFromJid(const QString& aJid);
	virtual bool stanzaEditImpl(int AHandleId, const Jid &AStreamJid, Stanza &AStanza, bool &AAccept) = 0;
private:
	otr::OtrMessaging* m_otr;
	IAccountManager* m_accMan;
};

class InboundStanzaCatcher
	: public StanzaCatcher
{
public:
	InboundStanzaCatcher(otr::OtrMessaging* otr, IAccountManager* accMan, QObject* parent);
	virtual bool stanzaEditImpl(int AHandleId, const Jid &AStreamJid, Stanza &AStanza, bool &AAccept);
};

class OutboundStanzaCatcher
	: public StanzaCatcher
{
public:
	OutboundStanzaCatcher(otr::OtrMessaging* otr,IAccountManager* accMan, QObject* parent);
	virtual bool stanzaEditImpl(int AHandleId, const Jid &AStreamJid, Stanza &AStanza, bool &AAccept);
};
