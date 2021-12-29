/****************************************************************************
** Meta object code from reading C++ file 'rosterplugin.h'
**
** Created: Sat Jan 26 02:04:20 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rosterplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rosterplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RosterPlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   14,   13,   13, 0x05,
      44,   14,   13,   13, 0x05,
      89,   67,   13,   13, 0x05,
     175,  142,   13,   13, 0x05,
     224,  142,   13,   13, 0x05,
     277,   14,   13,   13, 0x05,
     315,  300,   13,   13, 0x05,
     377,  361,   13,   13, 0x05,
     414,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     438,   13,   13,   13, 0x09,
     469,  455,   13,   13, 0x09,
     540,  515,   13,   13, 0x09,
     582,  515,   13,   13, 0x09,
     628,   13,   13,   13, 0x09,
     652,  645,   13,   13, 0x09,
     699,  691,   13,   13, 0x09,
     737,  729,   13,   13, 0x09,
     773,  765,   13,   13, 0x09,
     801,  765,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RosterPlugin[] = {
    "RosterPlugin\0\0ARoster\0rosterAdded(IRoster*)\0"
    "rosterOpened(IRoster*)\0ARoster,AItem,ABefore\0"
    "rosterItemReceived(IRoster*,IRosterItem,IRosterItem)\0"
    "ARoster,AItemJid,ASubsType,AText\0"
    "rosterSubscriptionSent(IRoster*,Jid,int,QString)\0"
    "rosterSubscriptionReceived(IRoster*,Jid,int,QString)\0"
    "rosterClosed(IRoster*)\0ARoster,AAfter\0"
    "rosterStreamJidAboutToBeChanged(IRoster*,Jid)\0"
    "ARoster,ABefore\0rosterStreamJidChanged(IRoster*,Jid)\0"
    "rosterRemoved(IRoster*)\0onRosterOpened()\0"
    "AItem,ABefore\0"
    "onRosterItemReceived(IRosterItem,IRosterItem)\0"
    "AItemJid,ASubsType,AText\0"
    "onRosterSubscriptionSent(Jid,int,QString)\0"
    "onRosterSubscriptionReceived(Jid,int,QString)\0"
    "onRosterClosed()\0AAfter\0"
    "onRosterStreamJidAboutToBeChanged(Jid)\0"
    "ABefore\0onRosterStreamJidChanged(Jid)\0"
    "AObject\0onRosterDestroyed(QObject*)\0"
    "AStream\0onStreamAdded(IXmppStream*)\0"
    "onStreamRemoved(IXmppStream*)\0"
};

const QMetaObject RosterPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RosterPlugin,
      qt_meta_data_RosterPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RosterPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RosterPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RosterPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RosterPlugin))
        return static_cast<void*>(const_cast< RosterPlugin*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< RosterPlugin*>(this));
    if (!strcmp(_clname, "IRosterPlugin"))
        return static_cast< IRosterPlugin*>(const_cast< RosterPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< RosterPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRosterPlugin/1.2"))
        return static_cast< IRosterPlugin*>(const_cast< RosterPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int RosterPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: rosterAdded((*reinterpret_cast< IRoster*(*)>(_a[1]))); break;
        case 1: rosterOpened((*reinterpret_cast< IRoster*(*)>(_a[1]))); break;
        case 2: rosterItemReceived((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const IRosterItem(*)>(_a[2])),(*reinterpret_cast< const IRosterItem(*)>(_a[3]))); break;
        case 3: rosterSubscriptionSent((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 4: rosterSubscriptionReceived((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 5: rosterClosed((*reinterpret_cast< IRoster*(*)>(_a[1]))); break;
        case 6: rosterStreamJidAboutToBeChanged((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 7: rosterStreamJidChanged((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 8: rosterRemoved((*reinterpret_cast< IRoster*(*)>(_a[1]))); break;
        case 9: onRosterOpened(); break;
        case 10: onRosterItemReceived((*reinterpret_cast< const IRosterItem(*)>(_a[1])),(*reinterpret_cast< const IRosterItem(*)>(_a[2]))); break;
        case 11: onRosterSubscriptionSent((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: onRosterSubscriptionReceived((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 13: onRosterClosed(); break;
        case 14: onRosterStreamJidAboutToBeChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 15: onRosterStreamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 16: onRosterDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 17: onStreamAdded((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 18: onStreamRemoved((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void RosterPlugin::rosterAdded(IRoster * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RosterPlugin::rosterOpened(IRoster * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RosterPlugin::rosterItemReceived(IRoster * _t1, const IRosterItem & _t2, const IRosterItem & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RosterPlugin::rosterSubscriptionSent(IRoster * _t1, const Jid & _t2, int _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RosterPlugin::rosterSubscriptionReceived(IRoster * _t1, const Jid & _t2, int _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RosterPlugin::rosterClosed(IRoster * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RosterPlugin::rosterStreamJidAboutToBeChanged(IRoster * _t1, const Jid & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RosterPlugin::rosterStreamJidChanged(IRoster * _t1, const Jid & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RosterPlugin::rosterRemoved(IRoster * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
