#include "stanza_catchers.h"

#include <interfaces/iaccountmanager.h>

StanzaCatcher::StanzaCatcher( otr::OtrMessaging* otr, IAccountManager* accMan,QObject* parent ) : QObject(parent), m_otr(otr), m_accMan(accMan)
{

}

QObject * StanzaCatcher::instance()
{
	return this;
}

otr::OtrMessaging* StanzaCatcher::otr()
{
	return m_otr;
}

IAccountManager* StanzaCatcher::accountManager()
{
	return m_accMan;
}

QString StanzaCatcher::removeResourceFromJid( const QString& aJid )
{
	QString addr(aJid);
	int pos = aJid.indexOf("/");
	if (pos > -1)
	{
		addr.truncate(pos);
		return addr;
	}
	return addr;
}

bool StanzaCatcher::stanzaReadWrite(int AHandleId, const Jid &AStreamJid, Stanza &AStanza, bool &AAccept)
{
	//qDebug(__PRETTY_FUNCTION__);
	Message message(AStanza);
	if (message.type() != Message::Chat)
		return false;

	if (message.body().isEmpty())
		return false;

	if (message.stanza().attribute(SkipOtrCatcherFlag()) != "true")
	{
		return stanzaEditImpl(AHandleId, AStreamJid, AStanza, AAccept);
	}
	else
	{
		message.stanza().element().removeAttribute("skip_otr_processing");
		//qDebug(qPrintable(QString("MESSAGE SKIPPED BY OTR HANDLER:\n%1").arg(message.body())));
	}
	return false;
}
///////////////////////////////////////////////////////////////////////////

InboundStanzaCatcher::InboundStanzaCatcher( otr::OtrMessaging* otr, IAccountManager* accMan, QObject* parent )
	: StanzaCatcher(otr, accMan, parent)
{

}

bool InboundStanzaCatcher::stanzaEditImpl( int AHandleId, const Jid &AStreamJid, Stanza &AStanza, bool &AAccept )
{
	Q_UNUSED(AHandleId);
	Q_UNUSED(AAccept);
	Message message(AStanza);

	//qDebug("incoming");
	//QString contact = removeResourceFromJid(message.from());
	QString contact = message.from();

	//qDebug(qPrintable(QString("Before: %1").arg(message.body())));

	QString decrypted = otr()->decryptMessage(contact, accountManager()->accountByStream(AStreamJid)->accountId(), message.body());

	message.setBody(decrypted);
	//qDebug(qPrintable(QString("After: %1").arg(message.body())));
	AStanza = message.stanza();
	return false;
}
///////////////////////////////////////////////////////////////////////////

OutboundStanzaCatcher::OutboundStanzaCatcher( otr::OtrMessaging* otr,IAccountManager* accMan, QObject* parent ) : StanzaCatcher(otr, accMan, parent)
{

}

bool OutboundStanzaCatcher::stanzaEditImpl( int AHandleId, const Jid &AStreamJid, Stanza &AStanza, bool &AAccept )
{
	Q_UNUSED(AHandleId);
	Q_UNUSED(AAccept);

	Message message(AStanza);

	//qDebug("outgoing");
	//QString contact = removeResourceFromJid(message.to());
	QString contact = message.to();

	QString encrypted = otr()->encryptMessage(
		accountManager()->accountByStream(AStreamJid)->accountId(),
		contact,
		message.body());
	message.setBody(encrypted);

	//qDebug(qPrintable(QString("Body changed: %1").arg(message.body())));

	AStanza = message.stanza();
	return false;
}
