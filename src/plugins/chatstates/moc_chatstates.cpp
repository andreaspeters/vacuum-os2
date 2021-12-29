/****************************************************************************
** Meta object code from reading C++ file 'chatstates.h'
**
** Created: Sat Jan 26 02:22:21 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "chatstates.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatstates.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChatStates[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   12,   11,   11, 0x05,
      95,   61,   11,   11, 0x05,
     160,  130,   11,   11, 0x05,
     194,  130,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     238,  228,   11,   11, 0x09,
     291,  267,   11,   11, 0x09,
     354,  228,   11,   11, 0x09,
     394,  383,   11,   11, 0x09,
     454,  434,   11,   11, 0x09,
     515,  507,   11,   11, 0x09,
     549,   11,   11,   11, 0x09,
     573,   11,   11,   11, 0x09,
     599,   11,   11,   11, 0x09,
     620,  507,   11,   11, 0x09,
     656,   11,   11,   11, 0x09,
     677,   11,   11,   11, 0x09,
     695,   11,   11,   11, 0x09,
     719,  713,   11,   11, 0x09,
     758,  749,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ChatStates[] = {
    "ChatStates\0\0AContactJid,AStatus\0"
    "permitStatusChanged(Jid,int)\0"
    "AStreamJid,AContactJid,ASupported\0"
    "supportStatusChanged(Jid,Jid,bool)\0"
    "AStreamJid,AContactJid,AState\0"
    "userChatStateChanged(Jid,Jid,int)\0"
    "selfChatStateChanged(Jid,Jid,int)\0"
    "APresence\0onPresenceOpened(IPresence*)\0"
    "APresence,AItem,ABefore\0"
    "onPresenceItemReceived(IPresence*,IPresenceItem,IPresenceItem)\0"
    "onPresenceClosed(IPresence*)\0AMultiChat\0"
    "onMultiUserChatCreated(IMultiUserChat*)\0"
    "AUser,AShow,AStatus\0"
    "onMultiUserPresenceReceived(IMultiUser*,int,QString)\0"
    "AWindow\0onChatWindowCreated(IChatWindow*)\0"
    "onChatWindowActivated()\0"
    "onChatWindowTextChanged()\0"
    "onChatWindowClosed()\0"
    "onChatWindowDestroyed(IChatWindow*)\0"
    "onUpdateSelfStates()\0onOptionsOpened()\0"
    "onOptionsClosed()\0ANode\0"
    "onOptionsChanged(OptionsNode)\0ASession\0"
    "onStanzaSessionTerminated(IStanzaSession)\0"
};

const QMetaObject ChatStates::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChatStates,
      qt_meta_data_ChatStates, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChatStates::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChatStates::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChatStates::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChatStates))
        return static_cast<void*>(const_cast< ChatStates*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< ChatStates*>(this));
    if (!strcmp(_clname, "IChatStates"))
        return static_cast< IChatStates*>(const_cast< ChatStates*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< ChatStates*>(this));
    if (!strcmp(_clname, "IArchiveHandler"))
        return static_cast< IArchiveHandler*>(const_cast< ChatStates*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< ChatStates*>(this));
    if (!strcmp(_clname, "ISessionNegotiator"))
        return static_cast< ISessionNegotiator*>(const_cast< ChatStates*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< ChatStates*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IChatStates/1.1"))
        return static_cast< IChatStates*>(const_cast< ChatStates*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< ChatStates*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IArchiveHandler/1.1"))
        return static_cast< IArchiveHandler*>(const_cast< ChatStates*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< ChatStates*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ISessionNegotiator/1.0"))
        return static_cast< ISessionNegotiator*>(const_cast< ChatStates*>(this));
    return QObject::qt_metacast(_clname);
}

int ChatStates::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: permitStatusChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: supportStatusChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: userChatStateChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: selfChatStateChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: onPresenceOpened((*reinterpret_cast< IPresence*(*)>(_a[1]))); break;
        case 5: onPresenceItemReceived((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< const IPresenceItem(*)>(_a[2])),(*reinterpret_cast< const IPresenceItem(*)>(_a[3]))); break;
        case 6: onPresenceClosed((*reinterpret_cast< IPresence*(*)>(_a[1]))); break;
        case 7: onMultiUserChatCreated((*reinterpret_cast< IMultiUserChat*(*)>(_a[1]))); break;
        case 8: onMultiUserPresenceReceived((*reinterpret_cast< IMultiUser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 9: onChatWindowCreated((*reinterpret_cast< IChatWindow*(*)>(_a[1]))); break;
        case 10: onChatWindowActivated(); break;
        case 11: onChatWindowTextChanged(); break;
        case 12: onChatWindowClosed(); break;
        case 13: onChatWindowDestroyed((*reinterpret_cast< IChatWindow*(*)>(_a[1]))); break;
        case 14: onUpdateSelfStates(); break;
        case 15: onOptionsOpened(); break;
        case 16: onOptionsClosed(); break;
        case 17: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 18: onStanzaSessionTerminated((*reinterpret_cast< const IStanzaSession(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void ChatStates::permitStatusChanged(const Jid & _t1, int _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< ChatStates *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatStates::supportStatusChanged(const Jid & _t1, const Jid & _t2, bool _t3)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< ChatStates *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChatStates::userChatStateChanged(const Jid & _t1, const Jid & _t2, int _t3)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< ChatStates *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChatStates::selfChatStateChanged(const Jid & _t1, const Jid & _t2, int _t3)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< ChatStates *>(this), &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
