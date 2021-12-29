/****************************************************************************
** Meta object code from reading C++ file 'presenceplugin.h'
**
** Created: Sat Jan 26 02:04:29 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "presenceplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'presenceplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PresencePlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   16,   15,   15, 0x05,
     105,   69,   15,   15, 0x05,
     149,  139,   15,   15, 0x05,
     175,  139,   15,   15, 0x05,
     236,  202,   15,   15, 0x05,
     304,  280,   15,   15, 0x05,
     411,  365,   15,   15, 0x05,
     486,  462,   15,   15, 0x05,
     531,  139,   15,   15, 0x05,
     558,  139,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     586,   15,   15,   15, 0x09,
     629,  605,   15,   15, 0x09,
     678,  664,   15,   15, 0x09,
     766,  730,   15,   15, 0x09,
     822,  808,   15,   15, 0x09,
     858,   15,   15,   15, 0x09,
     885,  877,   15,   15, 0x09,
     927,  915,   15,   15, 0x09,
     955,  915,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PresencePlugin[] = {
    "PresencePlugin\0\0AStreamJid,AStateOnline\0"
    "streamStateChanged(Jid,bool)\0"
    "AStreamJid,AContactJid,AStateOnline\0"
    "contactStateChanged(Jid,Jid,bool)\0"
    "APresence\0presenceAdded(IPresence*)\0"
    "presenceOpened(IPresence*)\0"
    "APresence,AShow,AStatus,APriotity\0"
    "presenceChanged(IPresence*,int,QString,int)\0"
    "APresence,AItem,ABefore\0"
    "presenceItemReceived(IPresence*,IPresenceItem,IPresenceItem)\0"
    "APresence,AContactJid,AShow,AStatus,APriotity\0"
    "presenceDirectSent(IPresence*,Jid,int,QString,int)\0"
    "APresence,AShow,AStatus\0"
    "presenceAboutToClose(IPresence*,int,QString)\0"
    "presenceClosed(IPresence*)\0"
    "presenceRemoved(IPresence*)\0"
    "onPresenceOpened()\0AShow,AStatus,APriority\0"
    "onPresenceChanged(int,QString,int)\0"
    "AItem,ABefore\0"
    "onPresenceItemReceived(IPresenceItem,IPresenceItem)\0"
    "AContactJid,AShow,AStatus,APriority\0"
    "onPresenceDirectSent(Jid,int,QString,int)\0"
    "AShow,AStatus\0onPresenceAboutToClose(int,QString)\0"
    "onPresenceClosed()\0AObject\0"
    "onPresenceDestroyed(QObject*)\0AXmppStream\0"
    "onStreamAdded(IXmppStream*)\0"
    "onStreamRemoved(IXmppStream*)\0"
};

const QMetaObject PresencePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PresencePlugin,
      qt_meta_data_PresencePlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PresencePlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PresencePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PresencePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PresencePlugin))
        return static_cast<void*>(const_cast< PresencePlugin*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< PresencePlugin*>(this));
    if (!strcmp(_clname, "IPresencePlugin"))
        return static_cast< IPresencePlugin*>(const_cast< PresencePlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< PresencePlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IPresencePlugin/1.2"))
        return static_cast< IPresencePlugin*>(const_cast< PresencePlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int PresencePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: streamStateChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: contactStateChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: presenceAdded((*reinterpret_cast< IPresence*(*)>(_a[1]))); break;
        case 3: presenceOpened((*reinterpret_cast< IPresence*(*)>(_a[1]))); break;
        case 4: presenceChanged((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: presenceItemReceived((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< const IPresenceItem(*)>(_a[2])),(*reinterpret_cast< const IPresenceItem(*)>(_a[3]))); break;
        case 6: presenceDirectSent((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 7: presenceAboutToClose((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: presenceClosed((*reinterpret_cast< IPresence*(*)>(_a[1]))); break;
        case 9: presenceRemoved((*reinterpret_cast< IPresence*(*)>(_a[1]))); break;
        case 10: onPresenceOpened(); break;
        case 11: onPresenceChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: onPresenceItemReceived((*reinterpret_cast< const IPresenceItem(*)>(_a[1])),(*reinterpret_cast< const IPresenceItem(*)>(_a[2]))); break;
        case 13: onPresenceDirectSent((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 14: onPresenceAboutToClose((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: onPresenceClosed(); break;
        case 16: onPresenceDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 17: onStreamAdded((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 18: onStreamRemoved((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void PresencePlugin::streamStateChanged(const Jid & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PresencePlugin::contactStateChanged(const Jid & _t1, const Jid & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PresencePlugin::presenceAdded(IPresence * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PresencePlugin::presenceOpened(IPresence * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PresencePlugin::presenceChanged(IPresence * _t1, int _t2, const QString & _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PresencePlugin::presenceItemReceived(IPresence * _t1, const IPresenceItem & _t2, const IPresenceItem & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PresencePlugin::presenceDirectSent(IPresence * _t1, const Jid & _t2, int _t3, const QString & _t4, int _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PresencePlugin::presenceAboutToClose(IPresence * _t1, int _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PresencePlugin::presenceClosed(IPresence * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PresencePlugin::presenceRemoved(IPresence * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
