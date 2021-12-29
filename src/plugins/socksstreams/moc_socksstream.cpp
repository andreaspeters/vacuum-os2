/****************************************************************************
** Meta object code from reading C++ file 'socksstream.h'
**
** Created: Sat Jan 26 02:23:53 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "socksstream.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socksstream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SocksStream[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   13,   12,   12, 0x05,
      38,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   12,   12,   12, 0x09,
      82,   12,   12,   12, 0x09,
     113,  106,   12,   12, 0x09,
     161,   12,   12,   12, 0x09,
     188,   12,   12,   12, 0x09,
     218,  211,   12,   12, 0x09,
     250,  106,   12,   12, 0x09,
     297,   12,   12,   12, 0x09,
     339,  323,   12,   12, 0x09,
     386,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SocksStream[] = {
    "SocksStream\0\0AState\0stateChanged(int)\0"
    "propertiesChanged()\0onHostSocketConnected()\0"
    "onHostSocketReadyRead()\0AError\0"
    "onHostSocketError(QAbstractSocket::SocketError)\0"
    "onHostSocketDisconnected()\0"
    "onTcpSocketReadyRead()\0ABytes\0"
    "onTcpSocketBytesWritten(qint64)\0"
    "onTcpSocketError(QAbstractSocket::SocketError)\0"
    "onTcpSocketDisconnected()\0AKey,ATcpSocket\0"
    "onLocalConnectionAccepted(QString,QTcpSocket*)\0"
    "onCloseTimerTimeout()\0"
};

const QMetaObject SocksStream::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_SocksStream,
      qt_meta_data_SocksStream, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SocksStream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SocksStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SocksStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SocksStream))
        return static_cast<void*>(const_cast< SocksStream*>(this));
    if (!strcmp(_clname, "ISocksStream"))
        return static_cast< ISocksStream*>(const_cast< SocksStream*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< SocksStream*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< SocksStream*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ISocksStream/1.1"))
        return static_cast< ISocksStream*>(const_cast< SocksStream*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataStreamSocket/1.1"))
        return static_cast< IDataStreamSocket*>(const_cast< SocksStream*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< SocksStream*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< SocksStream*>(this));
    return QIODevice::qt_metacast(_clname);
}

int SocksStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: propertiesChanged(); break;
        case 2: onHostSocketConnected(); break;
        case 3: onHostSocketReadyRead(); break;
        case 4: onHostSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: onHostSocketDisconnected(); break;
        case 6: onTcpSocketReadyRead(); break;
        case 7: onTcpSocketBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: onTcpSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 9: onTcpSocketDisconnected(); break;
        case 10: onLocalConnectionAccepted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QTcpSocket*(*)>(_a[2]))); break;
        case 11: onCloseTimerTimeout(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SocksStream::stateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SocksStream::propertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
