/****************************************************************************
** Meta object code from reading C++ file 'clientinfo.h'
**
** Created: Sat Jan 26 02:15:02 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "clientinfo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ClientInfo[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   12,   11,   11, 0x05,
      49,   12,   11,   11, 0x05,
      74,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     133,   97,   11,   11, 0x09,
     193,  169,   11,   11, 0x09,
     280,  254,   11,   11, 0x09,
     344,   11,   11,   11, 0x09,
     378,   12,   11,   11, 0x09,
     416,  408,   11,   11, 0x09,
     448,  442,   11,   11, 0x09,
     486,  480,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ClientInfo[] = {
    "ClientInfo\0\0AContactJid\0"
    "softwareInfoChanged(Jid)\0"
    "lastActivityChanged(Jid)\0"
    "entityTimeChanged(Jid)\0"
    "AStreamJid,AContactJid,AStateOnline\0"
    "onContactStateChanged(Jid,Jid,bool)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "AIndex,ALabelId,AToolTips\0"
    "onRosterIndexToolTips(IRosterIndex*,quint32,QMap<int,QString>&)\0"
    "onClientInfoActionTriggered(bool)\0"
    "onClientInfoDialogClosed(Jid)\0ARoster\0"
    "onRosterRemoved(IRoster*)\0AInfo\0"
    "onDiscoInfoReceived(IDiscoInfo)\0ANode\0"
    "onOptionsChanged(OptionsNode)\0"
};

const QMetaObject ClientInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClientInfo,
      qt_meta_data_ClientInfo, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ClientInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ClientInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ClientInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClientInfo))
        return static_cast<void*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "IClientInfo"))
        return static_cast< IClientInfo*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "IDataLocalizer"))
        return static_cast< IDataLocalizer*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "IDiscoFeatureHandler"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IClientInfo/1.0"))
        return static_cast< IClientInfo*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataLocalizer/1.0"))
        return static_cast< IDataLocalizer*>(const_cast< ClientInfo*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDiscoFeatureHandler/1.0"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< ClientInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int ClientInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: softwareInfoChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 1: lastActivityChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 2: entityTimeChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 3: onContactStateChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: onRosterIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 5: onRosterIndexToolTips((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[3]))); break;
        case 6: onClientInfoActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: onClientInfoDialogClosed((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 8: onRosterRemoved((*reinterpret_cast< IRoster*(*)>(_a[1]))); break;
        case 9: onDiscoInfoReceived((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 10: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ClientInfo::softwareInfoChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientInfo::lastActivityChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientInfo::entityTimeChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
