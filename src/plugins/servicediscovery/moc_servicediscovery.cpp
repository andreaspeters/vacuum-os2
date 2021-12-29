/****************************************************************************
** Meta object code from reading C++ file 'servicediscovery.h'
**
** Created: Sat Jan 26 02:17:46 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "servicediscovery.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'servicediscovery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ServiceDiscovery[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   18,   17,   17, 0x05,
      70,   18,   17,   17, 0x05,
     125,  116,   17,   17, 0x05,
     162,  116,   17,   17, 0x05,
     216,  198,   17,   17, 0x05,
     270,  198,   17,   17, 0x05,
     332,  323,   17,   17, 0x05,
     368,  323,   17,   17, 0x05,
     414,  403,   17,   17, 0x05,
     444,  403,   17,   17, 0x05,
     485,  473,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     529,  517,   17,   17, 0x09,
     558,  517,   17,   17, 0x09,
     611,  587,   17,   17, 0x09,
     696,  674,   17,   17, 0x09,
     751,  403,   17,   17, 0x09,
     803,  783,   17,   17, 0x09,
     859,  848,   17,   17, 0x09,
     919,  899,   17,   17, 0x09,
    1007,  983,   17,   17, 0x09,
    1094, 1068,   17,   17, 0x09,
    1158,   17,   17,   17, 0x09,
    1188,   17,   17,   17, 0x09,
    1227, 1219,   17,   17, 0x09,
    1264,   18,   17,   17, 0x09,
    1312,   17,   17,   17, 0x09,
    1334,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ServiceDiscovery[] = {
    "ServiceDiscovery\0\0AWindow\0"
    "discoItemsWindowCreated(IDiscoItemsWindow*)\0"
    "discoItemsWindowDestroyed(IDiscoItemsWindow*)\0"
    "AHandler\0discoHandlerInserted(IDiscoHandler*)\0"
    "discoHandlerRemoved(IDiscoHandler*)\0"
    "AFeature,AHandler\0"
    "featureHandlerInserted(QString,IDiscoFeatureHandler*)\0"
    "featureHandlerRemoved(QString,IDiscoFeatureHandler*)\0"
    "AFeature\0discoFeatureInserted(IDiscoFeature)\0"
    "discoFeatureRemoved(IDiscoFeature)\0"
    "ADiscoInfo\0discoInfoReceived(IDiscoInfo)\0"
    "discoInfoRemoved(IDiscoInfo)\0ADiscoItems\0"
    "discoItemsReceived(IDiscoItems)\0"
    "AXmppStream\0onStreamOpened(IXmppStream*)\0"
    "onStreamClosed(IXmppStream*)\0"
    "APresence,AItem,ABefore\0"
    "onPresenceItemReceived(IPresence*,IPresenceItem,IPresenceItem)\0"
    "ARoster,AItem,ABefore\0"
    "onRosterItemReceived(IRoster*,IRosterItem,IRosterItem)\0"
    "onDiscoInfoReceived(IDiscoInfo)\0"
    "AUser,AShow,AStatus\0"
    "onMultiUserPresence(IMultiUser*,int,QString)\0"
    "AMultiChat\0onMultiUserChatCreated(IMultiUserChat*)\0"
    "AWindow,AUser,AMenu\0"
    "onMultiUserContextMenu(IMultiUserChatWindow*,IMultiUser*,Menu*)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "AIndex,ALabelId,AToolTips\0"
    "onRosterIndexToolTips(IRosterIndex*,quint32,QMap<int,QString>&)\0"
    "onShowDiscoInfoByAction(bool)\0"
    "onShowDiscoItemsByAction(bool)\0AObject\0"
    "onDiscoInfoWindowDestroyed(QObject*)\0"
    "onDiscoItemsWindowDestroyed(IDiscoItemsWindow*)\0"
    "onQueueTimerTimeout()\0onSelfCapsChanged()\0"
};

const QMetaObject ServiceDiscovery::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ServiceDiscovery,
      qt_meta_data_ServiceDiscovery, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ServiceDiscovery::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ServiceDiscovery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ServiceDiscovery::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ServiceDiscovery))
        return static_cast<void*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "IServiceDiscovery"))
        return static_cast< IServiceDiscovery*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "IXmppUriHandler"))
        return static_cast< IXmppUriHandler*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "IDiscoHandler"))
        return static_cast< IDiscoHandler*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "IRostersClickHooker"))
        return static_cast< IRostersClickHooker*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IServiceDiscovery/1.1"))
        return static_cast< IServiceDiscovery*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppUriHandler/1.0"))
        return static_cast< IXmppUriHandler*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDiscoHandler/1.0"))
        return static_cast< IDiscoHandler*>(const_cast< ServiceDiscovery*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersClickHooker/1.3"))
        return static_cast< IRostersClickHooker*>(const_cast< ServiceDiscovery*>(this));
    return QObject::qt_metacast(_clname);
}

int ServiceDiscovery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: discoItemsWindowCreated((*reinterpret_cast< IDiscoItemsWindow*(*)>(_a[1]))); break;
        case 1: discoItemsWindowDestroyed((*reinterpret_cast< IDiscoItemsWindow*(*)>(_a[1]))); break;
        case 2: discoHandlerInserted((*reinterpret_cast< IDiscoHandler*(*)>(_a[1]))); break;
        case 3: discoHandlerRemoved((*reinterpret_cast< IDiscoHandler*(*)>(_a[1]))); break;
        case 4: featureHandlerInserted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< IDiscoFeatureHandler*(*)>(_a[2]))); break;
        case 5: featureHandlerRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< IDiscoFeatureHandler*(*)>(_a[2]))); break;
        case 6: discoFeatureInserted((*reinterpret_cast< const IDiscoFeature(*)>(_a[1]))); break;
        case 7: discoFeatureRemoved((*reinterpret_cast< const IDiscoFeature(*)>(_a[1]))); break;
        case 8: discoInfoReceived((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 9: discoInfoRemoved((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 10: discoItemsReceived((*reinterpret_cast< const IDiscoItems(*)>(_a[1]))); break;
        case 11: onStreamOpened((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 12: onStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 13: onPresenceItemReceived((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< const IPresenceItem(*)>(_a[2])),(*reinterpret_cast< const IPresenceItem(*)>(_a[3]))); break;
        case 14: onRosterItemReceived((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const IRosterItem(*)>(_a[2])),(*reinterpret_cast< const IRosterItem(*)>(_a[3]))); break;
        case 15: onDiscoInfoReceived((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 16: onMultiUserPresence((*reinterpret_cast< IMultiUser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 17: onMultiUserChatCreated((*reinterpret_cast< IMultiUserChat*(*)>(_a[1]))); break;
        case 18: onMultiUserContextMenu((*reinterpret_cast< IMultiUserChatWindow*(*)>(_a[1])),(*reinterpret_cast< IMultiUser*(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 19: onRosterIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 20: onRosterIndexToolTips((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[3]))); break;
        case 21: onShowDiscoInfoByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: onShowDiscoItemsByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: onDiscoInfoWindowDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 24: onDiscoItemsWindowDestroyed((*reinterpret_cast< IDiscoItemsWindow*(*)>(_a[1]))); break;
        case 25: onQueueTimerTimeout(); break;
        case 26: onSelfCapsChanged(); break;
        default: ;
        }
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void ServiceDiscovery::discoItemsWindowCreated(IDiscoItemsWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ServiceDiscovery::discoItemsWindowDestroyed(IDiscoItemsWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ServiceDiscovery::discoHandlerInserted(IDiscoHandler * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ServiceDiscovery::discoHandlerRemoved(IDiscoHandler * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ServiceDiscovery::featureHandlerInserted(const QString & _t1, IDiscoFeatureHandler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ServiceDiscovery::featureHandlerRemoved(const QString & _t1, IDiscoFeatureHandler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ServiceDiscovery::discoFeatureInserted(const IDiscoFeature & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ServiceDiscovery::discoFeatureRemoved(const IDiscoFeature & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ServiceDiscovery::discoInfoReceived(const IDiscoInfo & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ServiceDiscovery::discoInfoRemoved(const IDiscoInfo & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ServiceDiscovery::discoItemsReceived(const IDiscoItems & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
