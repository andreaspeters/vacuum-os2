/****************************************************************************
** Meta object code from reading C++ file 'connectionmanager.h'
**
** Created: Sat Jan 26 02:13:27 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "connectionmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConnectionManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   19,   18,   18, 0x05,
      63,   19,   18,   18, 0x05,
     113,   97,   18,   18, 0x05,
     159,  150,   18,   18, 0x05,
     179,  150,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     215,  206,   18,   18, 0x09,
     256,  241,   18,   18, 0x09,
     315,  303,   18,   18, 0x09,
     344,  303,   18,   18, 0x09,
     373,   18,   18,   18, 0x09,
     397,  391,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ConnectionManager[] = {
    "ConnectionManager\0\0AConnection\0"
    "connectionCreated(IConnection*)\0"
    "connectionDestroyed(IConnection*)\0"
    "AProxyId,AProxy\0proxyChanged(QUuid,IConnectionProxy)\0"
    "AProxyId\0proxyRemoved(QUuid)\0"
    "defaultProxyChanged(QUuid)\0AAccount\0"
    "onAccountShown(IAccount*)\0AAccount,ANode\0"
    "onAccountOptionsChanged(IAccount*,OptionsNode)\0"
    "AXmppStream\0onStreamOpened(IXmppStream*)\0"
    "onStreamClosed(IXmppStream*)\0"
    "onOptionsOpened()\0ANode\0"
    "onOptionsChanged(OptionsNode)\0"
};

const QMetaObject ConnectionManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConnectionManager,
      qt_meta_data_ConnectionManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConnectionManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConnectionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConnectionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectionManager))
        return static_cast<void*>(const_cast< ConnectionManager*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< ConnectionManager*>(this));
    if (!strcmp(_clname, "IConnectionManager"))
        return static_cast< IConnectionManager*>(const_cast< ConnectionManager*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< ConnectionManager*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< ConnectionManager*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IConnectionManager/1.1"))
        return static_cast< IConnectionManager*>(const_cast< ConnectionManager*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< ConnectionManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ConnectionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: connectionCreated((*reinterpret_cast< IConnection*(*)>(_a[1]))); break;
        case 1: connectionDestroyed((*reinterpret_cast< IConnection*(*)>(_a[1]))); break;
        case 2: proxyChanged((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const IConnectionProxy(*)>(_a[2]))); break;
        case 3: proxyRemoved((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 4: defaultProxyChanged((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 5: onAccountShown((*reinterpret_cast< IAccount*(*)>(_a[1]))); break;
        case 6: onAccountOptionsChanged((*reinterpret_cast< IAccount*(*)>(_a[1])),(*reinterpret_cast< const OptionsNode(*)>(_a[2]))); break;
        case 7: onStreamOpened((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 8: onStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 9: onOptionsOpened(); break;
        case 10: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ConnectionManager::connectionCreated(IConnection * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConnectionManager::connectionDestroyed(IConnection * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConnectionManager::proxyChanged(const QUuid & _t1, const IConnectionProxy & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ConnectionManager::proxyRemoved(const QUuid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ConnectionManager::defaultProxyChanged(const QUuid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
