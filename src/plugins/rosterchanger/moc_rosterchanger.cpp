/****************************************************************************
** Meta object code from reading C++ file 'rosterchanger.h'
**
** Created: Sat Jan 26 02:05:56 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rosterchanger.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rosterchanger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RosterChanger[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   15,   14,   14, 0x05,
      67,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     115,   14,   14,   14, 0x09,
     140,   14,   14,   14, 0x09,
     208,  175,   14,   14, 0x09,
     289,  253,   14,   14, 0x09,
     338,   14,   14,   14, 0x09,
     364,   14,   14,   14, 0x09,
     386,   14,   14,   14, 0x09,
     414,   14,   14,   14, 0x09,
     442,   14,   14,   14, 0x09,
     475,   14,   14,   14, 0x09,
     508,   14,   14,   14, 0x09,
     532,   14,   14,   14, 0x09,
     552,   14,   14,   14, 0x09,
     578,   14,   14,   14, 0x09,
     604,   14,   14,   14, 0x09,
     625,   14,   14,   14, 0x09,
     654,   14,   14,   14, 0x09,
     705,  683,   14,   14, 0x09,
     768,  760,   14,   14, 0x09,
     805,  793,   14,   14, 0x09,
     863,  843,   14,   14, 0x09,
     943,  919,   14,   14, 0x09,
    1024, 1004,   14,   14, 0x09,
    1098, 1088,   14,   14, 0x09,
    1127, 1088,   14,   14, 0x09,
    1154,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RosterChanger[] = {
    "RosterChanger\0\0ADialog\0"
    "addContactDialogCreated(IAddContactDialog*)\0"
    "subscriptionDialogCreated(ISubscriptionDialog*)\0"
    "onSendSubscription(bool)\0"
    "onChangeContactsSubscription(bool)\0"
    "ARoster,AItemJid,ASubsType,AText\0"
    "onSubscriptionSent(IRoster*,Jid,int,QString)\0"
    "ARoster,AItemJid,ASubsType,AMessage\0"
    "onSubscriptionReceived(IRoster*,Jid,int,QString)\0"
    "onAddContactToGroup(bool)\0"
    "onRenameContact(bool)\0onCopyContactsToGroup(bool)\0"
    "onMoveContactsToGroup(bool)\0"
    "onRemoveContactsFromGroups(bool)\0"
    "onRemoveContactsFromRoster(bool)\0"
    "onAddGroupToGroup(bool)\0onRenameGroup(bool)\0"
    "onCopyGroupsToGroup(bool)\0"
    "onMoveGroupsToGroup(bool)\0"
    "onRemoveGroups(bool)\0onRemoveGroupsContacts(bool)\0"
    "onShowAddContactDialog(bool)\0"
    "ARoster,AItem,ABefore\0"
    "onRosterItemReceived(IRoster*,IRosterItem,IRosterItem)\0"
    "ARoster\0onRosterClosed(IRoster*)\0"
    "AId,AWidget\0onShortcutActivated(QString,QWidget*)\0"
    "ASelected,AAccepted\0"
    "onRosterIndexMultiSelection(QList<IRosterIndex*>,bool&)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "AWindow,AUser,AMenu\0"
    "onMultiUserContextMenu(IMultiUserChatWindow*,IMultiUser*,Menu*)\0"
    "ANotifyId\0onNotificationActivated(int)\0"
    "onNotificationRemoved(int)\0"
    "onSubscriptionDialogDestroyed()\0"
};

const QMetaObject RosterChanger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RosterChanger,
      qt_meta_data_RosterChanger, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RosterChanger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RosterChanger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RosterChanger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RosterChanger))
        return static_cast<void*>(const_cast< RosterChanger*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< RosterChanger*>(this));
    if (!strcmp(_clname, "IRosterChanger"))
        return static_cast< IRosterChanger*>(const_cast< RosterChanger*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< RosterChanger*>(this));
    if (!strcmp(_clname, "IRostersEditHandler"))
        return static_cast< IRostersEditHandler*>(const_cast< RosterChanger*>(this));
    if (!strcmp(_clname, "IRostersDragDropHandler"))
        return static_cast< IRostersDragDropHandler*>(const_cast< RosterChanger*>(this));
    if (!strcmp(_clname, "IXmppUriHandler"))
        return static_cast< IXmppUriHandler*>(const_cast< RosterChanger*>(this));
    if (!strcmp(_clname, "AdvancedDelegateEditProxy"))
        return static_cast< AdvancedDelegateEditProxy*>(const_cast< RosterChanger*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< RosterChanger*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRosterChanger/1.0"))
        return static_cast< IRosterChanger*>(const_cast< RosterChanger*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< RosterChanger*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersDragDropHandler/1.1"))
        return static_cast< IRostersDragDropHandler*>(const_cast< RosterChanger*>(this));
    if (!strcmp(_clname, "Virtus.Plugin.IRostersEditHandler/1.1"))
        return static_cast< IRostersEditHandler*>(const_cast< RosterChanger*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppUriHandler/1.0"))
        return static_cast< IXmppUriHandler*>(const_cast< RosterChanger*>(this));
    return QObject::qt_metacast(_clname);
}

int RosterChanger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addContactDialogCreated((*reinterpret_cast< IAddContactDialog*(*)>(_a[1]))); break;
        case 1: subscriptionDialogCreated((*reinterpret_cast< ISubscriptionDialog*(*)>(_a[1]))); break;
        case 2: onSendSubscription((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: onChangeContactsSubscription((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: onSubscriptionSent((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 5: onSubscriptionReceived((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 6: onAddContactToGroup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: onRenameContact((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: onCopyContactsToGroup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: onMoveContactsToGroup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: onRemoveContactsFromGroups((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: onRemoveContactsFromRoster((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: onAddGroupToGroup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: onRenameGroup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: onCopyGroupsToGroup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: onMoveGroupsToGroup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: onRemoveGroups((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: onRemoveGroupsContacts((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: onShowAddContactDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: onRosterItemReceived((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const IRosterItem(*)>(_a[2])),(*reinterpret_cast< const IRosterItem(*)>(_a[3]))); break;
        case 20: onRosterClosed((*reinterpret_cast< IRoster*(*)>(_a[1]))); break;
        case 21: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 22: onRosterIndexMultiSelection((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: onRosterIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 24: onMultiUserContextMenu((*reinterpret_cast< IMultiUserChatWindow*(*)>(_a[1])),(*reinterpret_cast< IMultiUser*(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 25: onNotificationActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: onNotificationRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: onSubscriptionDialogDestroyed(); break;
        default: ;
        }
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void RosterChanger::addContactDialogCreated(IAddContactDialog * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RosterChanger::subscriptionDialogCreated(ISubscriptionDialog * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
