/****************************************************************************
** Meta object code from reading C++ file 'roster.h'
**
** Created: Sat Jan 26 02:04:19 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "roster.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Roster[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      37,   17,    7,    7, 0x05,
     100,   75,    7,    7, 0x05,
     134,   75,    7,    7, 0x05,
     172,    7,    7,    7, 0x05,
     188,  181,    7,    7, 0x05,
     227,  219,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     249,    7,    7,    7, 0x09,
     266,    7,    7,    7, 0x09,
     283,  181,    7,    7, 0x09,
     316,  219,    7,    7, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Roster[] = {
    "Roster\0\0opened()\0ARosterItem,ABefore\0"
    "itemReceived(IRosterItem,IRosterItem)\0"
    "AItemJid,ASubsType,AText\0"
    "subscriptionSent(Jid,int,QString)\0"
    "subscriptionReceived(Jid,int,QString)\0"
    "closed()\0AAfter\0streamJidAboutToBeChanged(Jid)\0"
    "ABefore\0streamJidChanged(Jid)\0"
    "onStreamOpened()\0onStreamClosed()\0"
    "onStreamJidAboutToBeChanged(Jid)\0"
    "onStreamJidChanged(Jid)\0"
};

const QMetaObject Roster::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Roster,
      qt_meta_data_Roster, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Roster::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Roster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Roster::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Roster))
        return static_cast<void*>(const_cast< Roster*>(this));
    if (!strcmp(_clname, "IRoster"))
        return static_cast< IRoster*>(const_cast< Roster*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< Roster*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< Roster*>(this));
    if (!strcmp(_clname, "IXmppStanzaHadler"))
        return static_cast< IXmppStanzaHadler*>(const_cast< Roster*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRoster/1.2"))
        return static_cast< IRoster*>(const_cast< Roster*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< Roster*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< Roster*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppStanzaHadler/1.0"))
        return static_cast< IXmppStanzaHadler*>(const_cast< Roster*>(this));
    return QObject::qt_metacast(_clname);
}

int Roster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: opened(); break;
        case 1: itemReceived((*reinterpret_cast< const IRosterItem(*)>(_a[1])),(*reinterpret_cast< const IRosterItem(*)>(_a[2]))); break;
        case 2: subscriptionSent((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: subscriptionReceived((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: closed(); break;
        case 5: streamJidAboutToBeChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 6: streamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 7: onStreamOpened(); break;
        case 8: onStreamClosed(); break;
        case 9: onStreamJidAboutToBeChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 10: onStreamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Roster::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Roster::itemReceived(const IRosterItem & _t1, const IRosterItem & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Roster::subscriptionSent(const Jid & _t1, int _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Roster::subscriptionReceived(const Jid & _t1, int _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Roster::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Roster::streamJidAboutToBeChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Roster::streamJidChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
