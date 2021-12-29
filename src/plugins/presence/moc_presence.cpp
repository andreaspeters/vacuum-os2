/****************************************************************************
** Meta object code from reading C++ file 'presence.h'
**
** Created: Sat Jan 26 02:04:27 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "presence.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'presence.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Presence[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      43,   19,    9,    9, 0x05,
      82,   68,    9,    9, 0x05,
     160,  124,    9,    9, 0x05,
     206,  192,    9,    9, 0x05,
     232,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     248,  241,    9,    9, 0x09,
     273,    9,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Presence[] = {
    "Presence\0\0opened()\0AShow,AStatus,APriority\0"
    "changed(int,QString,int)\0AItem,ABefore\0"
    "itemReceived(IPresenceItem,IPresenceItem)\0"
    "AContactJid,AShow,AStatus,APriority\0"
    "directSent(Jid,int,QString,int)\0"
    "AShow,AStatus\0aboutToClose(int,QString)\0"
    "closed()\0AError\0onStreamError(XmppError)\0"
    "onStreamClosed()\0"
};

const QMetaObject Presence::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Presence,
      qt_meta_data_Presence, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Presence::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Presence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Presence::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Presence))
        return static_cast<void*>(const_cast< Presence*>(this));
    if (!strcmp(_clname, "IPresence"))
        return static_cast< IPresence*>(const_cast< Presence*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IPresence/1.2"))
        return static_cast< IPresence*>(const_cast< Presence*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< Presence*>(this));
    return QObject::qt_metacast(_clname);
}

int Presence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: opened(); break;
        case 1: changed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: itemReceived((*reinterpret_cast< const IPresenceItem(*)>(_a[1])),(*reinterpret_cast< const IPresenceItem(*)>(_a[2]))); break;
        case 3: directSent((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: aboutToClose((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: closed(); break;
        case 6: onStreamError((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 7: onStreamClosed(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Presence::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Presence::changed(int _t1, const QString & _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Presence::itemReceived(const IPresenceItem & _t1, const IPresenceItem & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Presence::directSent(const Jid & _t1, int _t2, const QString & _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Presence::aboutToClose(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Presence::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
