/****************************************************************************
** Meta object code from reading C++ file 'defaultconnection.h'
**
** Created: Sat Jan 26 02:13:56 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "defaultconnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'defaultconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DefaultConnection[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      36,   18,   18,   18, 0x05,
      48,   18,   18,   18, 0x05,
      67,   60,   18,   18, 0x05,
      92,   85,   18,   18, 0x05,
     109,   18,   18,   18, 0x05,
     129,   18,   18,   18, 0x05,
     144,   18,   18,   18, 0x05,
     172,  166,   18,   18, 0x05,
     212,  205,   18,   18, 0x05,
     248,  240,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     296,  283,   18,   18, 0x09,
     346,  335,   18,   18, 0x09,
     375,   18,   18,   18, 0x09,
     399,   18,   18,   18, 0x09,
     419,   18,   18,   18, 0x09,
     439,   18,   18,   18, 0x09,
     459,  240,   18,   18, 0x09,
     495,   85,   18,   18, 0x09,
     539,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DefaultConnection[] = {
    "DefaultConnection\0\0aboutToConnect()\0"
    "connected()\0encrypted()\0ABytes\0"
    "readyRead(qint64)\0AError\0error(XmppError)\0"
    "aboutToDisconnect()\0disconnected()\0"
    "connectionDestroyed()\0AMode\0"
    "modeChanged(QSslSocket::SslMode)\0"
    "AProxy\0proxyChanged(QNetworkProxy)\0"
    "AErrors\0sslErrorsOccured(QList<QSslError>)\0"
    "AId,AResults\0onDnsResultsReady(int,QJDns::Response)\0"
    "AId,AError\0onDnsError(int,QJDns::Error)\0"
    "onDnsShutdownFinished()\0onSocketConnected()\0"
    "onSocketEncrypted()\0onSocketReadyRead()\0"
    "onSocketSSLErrors(QList<QSslError>)\0"
    "onSocketError(QAbstractSocket::SocketError)\0"
    "onSocketDisconnected()\0"
};

const QMetaObject DefaultConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DefaultConnection,
      qt_meta_data_DefaultConnection, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DefaultConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DefaultConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DefaultConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DefaultConnection))
        return static_cast<void*>(const_cast< DefaultConnection*>(this));
    if (!strcmp(_clname, "IConnection"))
        return static_cast< IConnection*>(const_cast< DefaultConnection*>(this));
    if (!strcmp(_clname, "IDefaultConnection"))
        return static_cast< IDefaultConnection*>(const_cast< DefaultConnection*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IConnection/1.1"))
        return static_cast< IConnection*>(const_cast< DefaultConnection*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDefaultConnection/1.0"))
        return static_cast< IDefaultConnection*>(const_cast< DefaultConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int DefaultConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: aboutToConnect(); break;
        case 1: connected(); break;
        case 2: encrypted(); break;
        case 3: readyRead((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: error((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 5: aboutToDisconnect(); break;
        case 6: disconnected(); break;
        case 7: connectionDestroyed(); break;
        case 8: modeChanged((*reinterpret_cast< QSslSocket::SslMode(*)>(_a[1]))); break;
        case 9: proxyChanged((*reinterpret_cast< const QNetworkProxy(*)>(_a[1]))); break;
        case 10: sslErrorsOccured((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 11: onDnsResultsReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QJDns::Response(*)>(_a[2]))); break;
        case 12: onDnsError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QJDns::Error(*)>(_a[2]))); break;
        case 13: onDnsShutdownFinished(); break;
        case 14: onSocketConnected(); break;
        case 15: onSocketEncrypted(); break;
        case 16: onSocketReadyRead(); break;
        case 17: onSocketSSLErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 18: onSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 19: onSocketDisconnected(); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void DefaultConnection::aboutToConnect()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DefaultConnection::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void DefaultConnection::encrypted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void DefaultConnection::readyRead(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DefaultConnection::error(const XmppError & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DefaultConnection::aboutToDisconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void DefaultConnection::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void DefaultConnection::connectionDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void DefaultConnection::modeChanged(QSslSocket::SslMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DefaultConnection::proxyChanged(const QNetworkProxy & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DefaultConnection::sslErrorsOccured(const QList<QSslError> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
