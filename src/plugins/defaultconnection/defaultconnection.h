#ifndef DEFAULTCONNECTION_H
#define DEFAULTCONNECTION_H

#include <definitions/internalerrors.h>
#include <interfaces/iconnectionmanager.h>
#include <interfaces/idefaultconnection.h>
#include <thirdparty/jdns/qjdns.h>
#include <utils/xmpperror.h>

class DefaultConnection :
			public QObject,
			public IConnection,
			public IDefaultConnection
{
	Q_OBJECT;
	Q_INTERFACES(IConnection IDefaultConnection);
public:
	DefaultConnection(IConnectionPlugin *APlugin, QObject *AParent);
	~DefaultConnection();
	//IConnection
	virtual QObject *instance() { return this; }
	virtual bool isOpen() const;
	virtual bool isEncrypted() const;
	virtual bool connectToHost();
	virtual void disconnectFromHost();
	virtual qint64 write(const QByteArray &AData);
	virtual QByteArray read(qint64 ABytes);
	virtual IConnectionPlugin *ownerPlugin() const;
	//IDefaultConnection
	virtual void startClientEncryption();
	virtual void ignoreSslErrors();
	virtual QList<QSslError> sslErrors() const;
	virtual QSslCertificate peerCertificate() const;
	virtual QSsl::SslProtocol protocol() const;
	virtual void setProtocol(QSsl::SslProtocol AProtocol);
	virtual QSslKey privateKey() const;
	virtual void setPrivateKey(const QSslKey &AKey);
	virtual QSslCertificate localCertificate() const;
	virtual void setLocalCertificate(const QSslCertificate &ACertificate);
	virtual QList<QSslCertificate> caCertificates() const;
	virtual void setCaCertificates(const QList<QSslCertificate> &ACertificates);
	virtual QNetworkProxy proxy() const;
	virtual void setProxy(const QNetworkProxy &AProxy);
	virtual QVariant option(int ARole) const;
	virtual void setOption(int ARole, const QVariant &AValue);
signals:
	//IConnection
	void aboutToConnect();
	void connected();
	void encrypted();
	void readyRead(qint64 ABytes);
	void error(const XmppError &AError);
	void aboutToDisconnect();
	void disconnected();
	void connectionDestroyed();
	//IDefaultConnection
	void modeChanged(QSslSocket::SslMode AMode);
	void proxyChanged(const QNetworkProxy &AProxy);
	void sslErrorsOccured(const QList<QSslError> &AErrors);
protected:
	void connectToNextHost();
protected slots:
	void onDnsResultsReady(int AId, const QJDns::Response &AResults);
	void onDnsError(int AId, QJDns::Error AError);
	void onDnsShutdownFinished();
	void onSocketConnected();
	void onSocketEncrypted();
	void onSocketReadyRead();
	void onSocketSSLErrors(const QList<QSslError> &AErrors);
	void onSocketError(QAbstractSocket::SocketError AError);
	void onSocketDisconnected();
private:
	IConnectionPlugin *FPlugin;
private:
	int FSrvQueryId;
	QJDns FDns;
	QList<QJDns::Record> FRecords;
private:
	bool FSSLError;
	bool FUseLegacySSL;
	bool FDisconnecting;
	QSslSocket FSocket;
private:
	QMap<int, QVariant> FOptions;
};

#endif // DEFAULTCONNECTION_H
