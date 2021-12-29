/****************************************************************************
** Meta object code from reading C++ file 'statuschanger.h'
**
** Created: Sat Jan 26 02:05:34 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "statuschanger.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statuschanger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StatusChanger[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   15,   14,   14, 0x05,
      69,   59,   14,   14, 0x05,
      90,   59,   14,   14, 0x05,
     113,   59,   14,   14, 0x05,
     152,  136,   14,   14, 0x05,
     203,  194,   14,   14, 0x25,

 // slots: signature, parameters, type, tag, flags
     231,   14,   14,   14, 0x09,
     267,  257,   14,   14, 0x09,
     329,  295,   14,   14, 0x09,
     375,  257,   14,   14, 0x09,
     413,  405,   14,   14, 0x09,
     438,  405,   14,   14, 0x09,
     478,  463,   14,   14, 0x09,
     530,  506,   14,   14, 0x09,
     591,   14,   14,   14, 0x09,
     621,   14,   14,   14, 0x09,
     639,   14,   14,   14, 0x09,
     663,  657,   14,   14, 0x09,
     702,  693,   14,   14, 0x09,
     727,   14,   14,   14, 0x09,
     747,   14,   14,   14, 0x09,
     766,   14,   14,   14, 0x09,
     791,   14,   14,   14, 0x09,
     833,  818,   14,   14, 0x09,
     890,  880,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_StatusChanger[] = {
    "StatusChanger\0\0AStreamJid,AStatusId\0"
    "statusChanged(Jid,int)\0AStatusId\0"
    "statusItemAdded(int)\0statusItemChanged(int)\0"
    "statusItemRemoved(int)\0ALabelId,AIndex\0"
    "rosterLabelChanged(quint32,IRosterIndex*)\0"
    "ALabelId\0rosterLabelChanged(quint32)\0"
    "onSetStatusByAction(bool)\0APresence\0"
    "onPresenceAdded(IPresence*)\0"
    "APresence,AShow,AStatus,APriority\0"
    "onPresenceChanged(IPresence*,int,QString,int)\0"
    "onPresenceRemoved(IPresence*)\0ARoster\0"
    "onRosterOpened(IRoster*)\0"
    "onRosterClosed(IRoster*)\0ABefore,AAfter\0"
    "onStreamJidChanged(Jid,Jid)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "onDefaultStatusIconsChanged()\0"
    "onOptionsOpened()\0onOptionsClosed()\0"
    "ANode\0onOptionsChanged(OptionsNode)\0"
    "AProfile\0onProfileOpened(QString)\0"
    "onShutdownStarted()\0onReconnectTimer()\0"
    "onEditStatusAction(bool)\0"
    "onModifyStatusAction(bool)\0AAccount,ANode\0"
    "onAccountOptionsChanged(IAccount*,OptionsNode)\0"
    "ANotifyId\0onNotificationActivated(int)\0"
};

const QMetaObject StatusChanger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StatusChanger,
      qt_meta_data_StatusChanger, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StatusChanger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StatusChanger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StatusChanger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StatusChanger))
        return static_cast<void*>(const_cast< StatusChanger*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< StatusChanger*>(this));
    if (!strcmp(_clname, "IStatusChanger"))
        return static_cast< IStatusChanger*>(const_cast< StatusChanger*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< StatusChanger*>(this));
    if (!strcmp(_clname, "IRostersLabelHolder"))
        return static_cast< IRostersLabelHolder*>(const_cast< StatusChanger*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< StatusChanger*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStatusChanger/1.1"))
        return static_cast< IStatusChanger*>(const_cast< StatusChanger*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< StatusChanger*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersLabelHolder/1.0"))
        return static_cast< IRostersLabelHolder*>(const_cast< StatusChanger*>(this));
    return QObject::qt_metacast(_clname);
}

int StatusChanger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: statusChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: statusItemAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: statusItemChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: statusItemRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: rosterLabelChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< IRosterIndex*(*)>(_a[2]))); break;
        case 5: rosterLabelChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: onSetStatusByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: onPresenceAdded((*reinterpret_cast< IPresence*(*)>(_a[1]))); break;
        case 8: onPresenceChanged((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 9: onPresenceRemoved((*reinterpret_cast< IPresence*(*)>(_a[1]))); break;
        case 10: onRosterOpened((*reinterpret_cast< IRoster*(*)>(_a[1]))); break;
        case 11: onRosterClosed((*reinterpret_cast< IRoster*(*)>(_a[1]))); break;
        case 12: onStreamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 13: onRosterIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 14: onDefaultStatusIconsChanged(); break;
        case 15: onOptionsOpened(); break;
        case 16: onOptionsClosed(); break;
        case 17: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 18: onProfileOpened((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: onShutdownStarted(); break;
        case 20: onReconnectTimer(); break;
        case 21: onEditStatusAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: onModifyStatusAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: onAccountOptionsChanged((*reinterpret_cast< IAccount*(*)>(_a[1])),(*reinterpret_cast< const OptionsNode(*)>(_a[2]))); break;
        case 24: onNotificationActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void StatusChanger::statusChanged(const Jid & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StatusChanger::statusItemAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StatusChanger::statusItemChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StatusChanger::statusItemRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StatusChanger::rosterLabelChanged(quint32 _t1, IRosterIndex * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
