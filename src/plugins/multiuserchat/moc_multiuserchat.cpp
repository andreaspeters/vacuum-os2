/****************************************************************************
** Meta object code from reading C++ file 'multiuserchat.h'
**
** Created: Sat Jan 26 02:16:16 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "multiuserchat.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multiuserchat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MultiUserChat[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      27,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      36,   28,   14,   14, 0x05,
      65,   56,   14,   14, 0x05,
      84,   14,   14,   14, 0x05,
      97,   14,   14,   14, 0x05,
     119,  113,   14,   14, 0x05,
     159,  144,   14,   14, 0x05,
     205,  185,   14,   14, 0x05,
     270,  243,   14,   14, 0x05,
     345,  321,   14,   14, 0x05,
     404,  390,   14,   14, 0x05,
     433,   56,   14,   14, 0x05,
     465,   56,   14,   14, 0x05,
     501,  486,   14,   14, 0x05,
     554,  534,   14,   14, 0x05,
     597,  582,   14,   14, 0x05,
     651,  629,   14,   14, 0x05,
     687,   56,   14,   14, 0x05,
     726,  720,   14,   14, 0x05,
     757,  629,   14,   14, 0x05,
     812,  793,   14,   14, 0x05,
     882,  871,   14,   14, 0x05,
     932,  720,   14,   14, 0x05,
     962,  720,   14,   14, 0x05,
     988,   14,   14,   14, 0x05,
    1016, 1009,   14,   14, 0x05,
    1054, 1046,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
    1098, 1077,   14,   14, 0x09,
    1163, 1139,   14,   14, 0x09,
    1204, 1198,   14,   14, 0x09,
    1240,  390,   14,   14, 0x09,
    1276,   14,   14,   14, 0x09,
    1301, 1293,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MultiUserChat[] = {
    "MultiUserChat\0\0chatOpened()\0ANotify\0"
    "chatNotify(QString)\0AMessage\0"
    "chatError(QString)\0chatClosed()\0"
    "chatDestroyed()\0AName\0roomNameChanged(QString)\0"
    "ABefore,AAfter\0streamJidChanged(Jid,Jid)\0"
    "AUser,AShow,AStatus\0"
    "userPresence(IMultiUser*,int,QString)\0"
    "AUser,ARole,ABefore,AAfter\0"
    "userDataChanged(IMultiUser*,int,QVariant,QVariant)\0"
    "AUser,AOldNick,ANewNick\0"
    "userNickChanged(IMultiUser*,QString,QString)\0"
    "AShow,AStatus\0presenceChanged(int,QString)\0"
    "serviceMessageReceived(Message)\0"
    "messageSent(Message)\0ANick,AMessage\0"
    "messageReceived(QString,Message)\0"
    "AContactJid,AReason\0inviteDeclined(Jid,QString)\0"
    "ANick,ASubject\0subjectChanged(QString,QString)\0"
    "ANick,AReason,AByUser\0"
    "userKicked(QString,QString,QString)\0"
    "dataFormMessageReceived(Message)\0AForm\0"
    "dataFormMessageSent(IDataForm)\0"
    "userBanned(QString,QString,QString)\0"
    "AAffiliation,AList\0"
    "affiliationListReceived(QString,QList<IMultiUserListItem>)\0"
    "ADeltaList\0affiliationListChanged(QList<IMultiUserListItem>)\0"
    "configFormReceived(IDataForm)\0"
    "configFormSent(IDataForm)\0"
    "configFormAccepted()\0AError\0"
    "configFormRejected(XmppError)\0AReason\0"
    "roomDestroyed(QString)\0ARole,ABefore,AAfter\0"
    "onUserDataChanged(int,QVariant,QVariant)\0"
    "AShow,AStatus,APriority\0"
    "onPresenceChanged(int,QString,int)\0"
    "AInfo\0onDiscoveryInfoReceived(IDiscoInfo)\0"
    "onPresenceAboutToClose(int,QString)\0"
    "onStreamClosed()\0ABefore\0"
    "onStreamJidChanged(Jid)\0"
};

const QMetaObject MultiUserChat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MultiUserChat,
      qt_meta_data_MultiUserChat, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiUserChat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiUserChat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiUserChat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiUserChat))
        return static_cast<void*>(const_cast< MultiUserChat*>(this));
    if (!strcmp(_clname, "IMultiUserChat"))
        return static_cast< IMultiUserChat*>(const_cast< MultiUserChat*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< MultiUserChat*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< MultiUserChat*>(this));
    if (!strcmp(_clname, "IMessageEditor"))
        return static_cast< IMessageEditor*>(const_cast< MultiUserChat*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMultiUserChat/1.4"))
        return static_cast< IMultiUserChat*>(const_cast< MultiUserChat*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< MultiUserChat*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< MultiUserChat*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageEditor/1.0"))
        return static_cast< IMessageEditor*>(const_cast< MultiUserChat*>(this));
    return QObject::qt_metacast(_clname);
}

int MultiUserChat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: chatOpened(); break;
        case 1: chatNotify((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: chatError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: chatClosed(); break;
        case 4: chatDestroyed(); break;
        case 5: roomNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: streamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 7: userPresence((*reinterpret_cast< IMultiUser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: userDataChanged((*reinterpret_cast< IMultiUser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 9: userNickChanged((*reinterpret_cast< IMultiUser*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: presenceChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: serviceMessageReceived((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        case 12: messageSent((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        case 13: messageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Message(*)>(_a[2]))); break;
        case 14: inviteDeclined((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: subjectChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: userKicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 17: dataFormMessageReceived((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        case 18: dataFormMessageSent((*reinterpret_cast< const IDataForm(*)>(_a[1]))); break;
        case 19: userBanned((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 20: affiliationListReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<IMultiUserListItem>(*)>(_a[2]))); break;
        case 21: affiliationListChanged((*reinterpret_cast< const QList<IMultiUserListItem>(*)>(_a[1]))); break;
        case 22: configFormReceived((*reinterpret_cast< const IDataForm(*)>(_a[1]))); break;
        case 23: configFormSent((*reinterpret_cast< const IDataForm(*)>(_a[1]))); break;
        case 24: configFormAccepted(); break;
        case 25: configFormRejected((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 26: roomDestroyed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: onUserDataChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 28: onPresenceChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 29: onDiscoveryInfoReceived((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 30: onPresenceAboutToClose((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 31: onStreamClosed(); break;
        case 32: onStreamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void MultiUserChat::chatOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MultiUserChat::chatNotify(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MultiUserChat::chatError(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MultiUserChat::chatClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void MultiUserChat::chatDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void MultiUserChat::roomNameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MultiUserChat::streamJidChanged(const Jid & _t1, const Jid & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MultiUserChat::userPresence(IMultiUser * _t1, int _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MultiUserChat::userDataChanged(IMultiUser * _t1, int _t2, const QVariant & _t3, const QVariant & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MultiUserChat::userNickChanged(IMultiUser * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MultiUserChat::presenceChanged(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MultiUserChat::serviceMessageReceived(const Message & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MultiUserChat::messageSent(const Message & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MultiUserChat::messageReceived(const QString & _t1, const Message & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MultiUserChat::inviteDeclined(const Jid & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MultiUserChat::subjectChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MultiUserChat::userKicked(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MultiUserChat::dataFormMessageReceived(const Message & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MultiUserChat::dataFormMessageSent(const IDataForm & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MultiUserChat::userBanned(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MultiUserChat::affiliationListReceived(const QString & _t1, const QList<IMultiUserListItem> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MultiUserChat::affiliationListChanged(const QList<IMultiUserListItem> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MultiUserChat::configFormReceived(const IDataForm & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MultiUserChat::configFormSent(const IDataForm & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void MultiUserChat::configFormAccepted()
{
    QMetaObject::activate(this, &staticMetaObject, 24, 0);
}

// SIGNAL 25
void MultiUserChat::configFormRejected(const XmppError & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MultiUserChat::roomDestroyed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}
QT_END_MOC_NAMESPACE
