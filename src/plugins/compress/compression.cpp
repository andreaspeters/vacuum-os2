#include "compression.h"

#define CHUNK 5120

Compression::Compression(IXmppStream *AXmppStream) : QObject(AXmppStream->instance())
{
	FZlibInited = false;
	FXmppStream = AXmppStream;
}

Compression::~Compression()
{
	stopZlib();
	FXmppStream->removeXmppDataHandler(XDHO_FEATURE_COMPRESS,this);
	FXmppStream->removeXmppStanzaHandler(XSHO_XMPP_FEATURE,this);
	emit featureDestroyed();
}

bool Compression::xmppDataIn(IXmppStream *AXmppStream, QByteArray &AData, int AOrder)
{
	if (AXmppStream==FXmppStream && AOrder==XDHO_FEATURE_COMPRESS)
	{
		processData(AData, false);
	}
	return false;
}

bool Compression::xmppDataOut(IXmppStream *AXmppStream, QByteArray &AData, int AOrder)
{
	if (AXmppStream==FXmppStream && AOrder==XDHO_FEATURE_COMPRESS)
	{
		processData(AData, true);
	}
	return false;
}

bool Compression::xmppStanzaIn(IXmppStream *AXmppStream, Stanza &AStanza, int AOrder)
{
	if (AXmppStream==FXmppStream && AOrder==XSHO_XMPP_FEATURE)
	{
		FXmppStream->removeXmppStanzaHandler(XSHO_XMPP_FEATURE,this);
		if (AStanza.tagName() == "compressed")
		{
			FXmppStream->insertXmppDataHandler(XDHO_FEATURE_COMPRESS,this);
			emit finished(true);
		}
		else
		{
			deleteLater();
			emit finished(false);
		}
		return true;
	}
	return false;
}

bool Compression::xmppStanzaOut(IXmppStream *AXmppStream, Stanza &AStanza, int AOrder)
{
	Q_UNUSED(AXmppStream);
	Q_UNUSED(AStanza);
	Q_UNUSED(AOrder);
	return false;
}

bool Compression::start(const QDomElement &AElem)
{
	if (AElem.tagName() == "compression")
	{
		QDomElement elem = AElem.firstChildElement("method");
		while (!elem.isNull())
		{
			if (elem.text() == "zlib")
			{
				if (startZlib())
				{
					Stanza compress("compress");
					compress.setAttribute("xmlns",NS_PROTOCOL_COMPRESS);
					compress.addElement("method").appendChild(compress.createTextNode("zlib"));
					FXmppStream->insertXmppStanzaHandler(XSHO_XMPP_FEATURE,this);
					FXmppStream->sendStanza(compress);
					return true;
				}
				break;
			}
			elem = elem.nextSiblingElement("method");
		}
	}
	deleteLater();
	return false;
}

bool Compression::startZlib()
{
	if (!FZlibInited)
	{
		FDefStruc.zalloc = Z_NULL;
		FDefStruc.zfree = Z_NULL;
		FDefStruc.opaque = Z_NULL;
		int retDef = deflateInit(&FDefStruc,Z_BEST_COMPRESSION);

		FInfStruc.zalloc = Z_NULL;
		FInfStruc.zfree = Z_NULL;
		FInfStruc.opaque = Z_NULL;
		FInfStruc.avail_in = 0;
		FInfStruc.next_in = Z_NULL;
		int retInf = inflateInit(&FInfStruc);

		if (retInf == Z_OK && retDef == Z_OK)
		{
			FZlibInited = true;
			FOutBuffer.reserve(CHUNK);
		}
		else
		{
			if (retDef == Z_OK)
				deflateEnd(&FDefStruc);
			if (retInf == Z_OK)
				inflateEnd(&FInfStruc);
		}
	}
	return FZlibInited;
}

void Compression::stopZlib()
{
	if (FZlibInited)
	{
		deflateEnd(&FDefStruc);
		inflateEnd(&FInfStruc);
		FOutBuffer.squeeze();
		FZlibInited = false;
	}
}

void Compression::processData(QByteArray &AData, bool ADataOut)
{
	if (AData.size() > 0)
	{
		int ret;
		int dataPosOut = 0;

		z_streamp zstream = ADataOut ? &FDefStruc : &FInfStruc;
		zstream->avail_in = AData.size();
		zstream->next_in = (Bytef *)(AData.constData());

		do
		{
			zstream->avail_out = FOutBuffer.capacity() - dataPosOut;
			zstream->next_out = (Bytef *)(FOutBuffer.data() + dataPosOut);
			ret = ADataOut ? deflate(zstream,Z_SYNC_FLUSH) : inflate(zstream,Z_SYNC_FLUSH);
			switch (ret)
			{
			case Z_OK:
				dataPosOut = FOutBuffer.capacity() - zstream->avail_out;
				if (zstream->avail_out == 0)
					FOutBuffer.reserve(FOutBuffer.capacity() + CHUNK);
				break;
			case Z_STREAM_ERROR:
				emit error(XmppError(IERR_COMPRESS_INVALID_COMPRESSION_LEVEL));
				break;
			case Z_DATA_ERROR:
				emit error(XmppError(IERR_COMPRESS_INVALID_DEFLATE_DATA));
				break;
			case Z_MEM_ERROR:
				emit error(XmppError(IERR_COMPRESS_OUT_OF_MEMORY));
				break;
			case Z_VERSION_ERROR:
				emit error(XmppError(IERR_COMPRESS_VERSION_MISMATCH));
				break;
			default:
				emit error(XmppError(IERR_COMPRESS_UNKNOWN_ERROR,tr("Error code: %1").arg(ret)));
			}
		} while (ret == Z_OK && zstream->avail_out == 0);
		AData.resize(dataPosOut);
		memcpy(AData.data(),FOutBuffer.constData(),dataPosOut);
	}
}
