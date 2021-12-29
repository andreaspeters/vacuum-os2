/****************************************************************************
** Meta object code from reading C++ file 'messagecarbons.h'
**
** Created: Sat Jan 26 02:33:20 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "messagecarbons.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagecarbons.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessageCarbons[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   16,   15,   15, 0x05,
      79,   59,   15,   15, 0x05,
     104,   59,   15,   15, 0x05,
     151,  133,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     192,  180,   15,   15, 0x09,
     225,  180,   15,   15, 0x09,
     264,  258,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MessageCarbons[] = {
    "MessageCarbons\0\0AStreamJid,AEnable\0"
    "enableChanged(Jid,bool)\0AStreamJid,AMessage\0"
    "messageSent(Jid,Message)\0"
    "messageReceived(Jid,Message)\0"
    "AStreamJid,AError\0errorReceived(Jid,XmppError)\0"
    "AXmppStream\0onXmppStreamOpened(IXmppStream*)\0"
    "onXmppStreamClosed(IXmppStream*)\0AInfo\0"
    "onDiscoInfoReceived(IDiscoInfo)\0"
};

const QMetaObject MessageCarbons::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MessageCarbons,
      qt_meta_data_MessageCarbons, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageCarbons::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageCarbons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageCarbons::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageCarbons))
        return static_cast<void*>(const_cast< MessageCarbons*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< MessageCarbons*>(this));
    if (!strcmp(_clname, "IMessageCarbons"))
        return static_cast< IMessageCarbons*>(const_cast< MessageCarbons*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< MessageCarbons*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< MessageCarbons*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< MessageCarbons*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageCarbons/1.1"))
        return static_cast< IMessageCarbons*>(const_cast< MessageCarbons*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< MessageCarbons*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< MessageCarbons*>(this));
    return QObject::qt_metacast(_clname);
}

int MessageCarbons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: enableChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: messageSent((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Message(*)>(_a[2]))); break;
        case 2: messageReceived((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Message(*)>(_a[2]))); break;
        case 3: errorReceived((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 4: onXmppStreamOpened((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 5: onXmppStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 6: onDiscoInfoReceived((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MessageCarbons::enableChanged(const Jid & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MessageCarbons::messageSent(const Jid & _t1, const Message & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MessageCarbons::messageReceived(const Jid & _t1, const Message & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MessageCarbons::errorReceived(const Jid & _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
