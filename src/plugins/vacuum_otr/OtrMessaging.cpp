/*
* OtrMessaging.cpp - interface to libotr
* Copyright (C) 2007  Timo Engel (timo-e@freenet.de)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this library; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
*/

#include "OtrMessaging.hpp"
#include "OtrInternal.hpp"

namespace otr
{

	//-----------------------------------------------------------------------------

	OtrMessaging::OtrMessaging(IOTRDataSource* source, OtrPolicy policy)
		: m_otrPolicy(policy),
		m_impl(new OtrInternal(source, m_otrPolicy))
	{
	}

	//-----------------------------------------------------------------------------

	OtrMessaging::~OtrMessaging()
	{
		delete m_impl;
	}

	//-----------------------------------------------------------------------------

	QString OtrMessaging::encryptMessage(const QString& from, const QString& to,
		const QString& message)
	{
		return m_impl->encryptMessage(from, to, message);
	}

	//-----------------------------------------------------------------------------

	QString OtrMessaging::decryptMessage(const QString& from, const QString& to,
		const QString& message)
	{
		return m_impl->decryptMessage(from, to, message);
	}

	//-----------------------------------------------------------------------------

	QList<Fingerprint> OtrMessaging::getFingerprints()
	{
		return m_impl->getFingerprints();
	}

	//-----------------------------------------------------------------------------

	void OtrMessaging::verifyFingerprint(const otr::Fingerprint& fingerprint,
		bool verified)
	{
		m_impl->verifyFingerprint(fingerprint, verified);
	}

	//-----------------------------------------------------------------------------

	void OtrMessaging::deleteFingerprint(const otr::Fingerprint& fingerprint)
	{
		m_impl->deleteFingerprint(fingerprint);
	}

	//-----------------------------------------------------------------------------

	QHash<QString, QString> OtrMessaging::getPrivateKeys()
	{
		return m_impl->getPrivateKeys();
	}

	//-----------------------------------------------------------------------------

	void OtrMessaging::startSession(const QString& account, const QString& jid)
	{
		m_impl->startSession(account, jid);
	}

	//-----------------------------------------------------------------------------

	void OtrMessaging::endSession(const QString& account, const QString& jid)
	{
		m_impl->endSession(account, jid);
	}
	//-----------------------------------------------------------------------------

	OtrMessageState OtrMessaging::getMessageState(const QString& thisJid,
		const QString& remoteJid)
	{
		return m_impl->getMessageState(thisJid, remoteJid);
	}

	//-----------------------------------------------------------------------------

	QString OtrMessaging::getMessageStateString(const QString& thisJid,
		const QString& remoteJid)
	{
		return m_impl->getMessageStateString(thisJid, remoteJid);
	}

	//-----------------------------------------------------------------------------

	QString OtrMessaging::getSessionId(const QString& thisJid,
		const QString& remoteJid)
	{
		return m_impl->getSessionId(thisJid, remoteJid);
	}

	//-----------------------------------------------------------------------------

	void OtrMessaging::setPolicy(otr::OtrPolicy policy)
	{
		m_otrPolicy = policy;
	}

	//-----------------------------------------------------------------------------

	OtrPolicy OtrMessaging::getPolicy()
	{
		return m_otrPolicy;
	}

	//-----------------------------------------------------------------------------

} // namespace otr
