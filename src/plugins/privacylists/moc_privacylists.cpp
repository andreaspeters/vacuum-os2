/****************************************************************************
** Meta object code from reading C++ file 'privacylists.h'
**
** Created: Sat Jan 26 02:20:40 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "privacylists.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'privacylists.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrivacyLists[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   14,   13,   13, 0x05,
      70,   14,   13,   13, 0x05,
      94,   14,   13,   13, 0x05,
     119,   14,   13,   13, 0x05,
     159,   14,   13,   13, 0x05,
     190,   14,   13,   13, 0x05,
     226,  222,   13,   13, 0x05,
     263,  252,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     296,   14,   13,   13, 0x09,
     337,   14,   13,   13, 0x09,
     364,   14,   13,   13, 0x09,
     406,   14,   13,   13, 0x09,
     439,   13,   13,   13, 0x09,
     470,  458,   13,   13, 0x09,
     499,  458,   13,   13, 0x09,
     543,  528,   13,   13, 0x09,
     613,  593,   13,   13, 0x09,
     693,  669,   13,   13, 0x09,
     780,  754,   13,   13, 0x09,
     844,   13,   13,   13, 0x09,
     875,   13,   13,   13, 0x09,
     903,   13,   13,   13, 0x09,
     933,   13,   13,   13, 0x09,
     964,   13,   13,   13, 0x09,
    1005,  995,   13,   13, 0x09,
    1037,  995,   13,   13, 0x09,
    1076, 1067,   13,   13, 0x09,
    1118, 1107,   13,   13, 0x09,
    1161, 1150,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PrivacyLists[] = {
    "PrivacyLists\0\0AStreamJid,AList\0"
    "listAboutToBeChanged(Jid,IPrivacyList)\0"
    "listLoaded(Jid,QString)\0"
    "listRemoved(Jid,QString)\0"
    "activeListAboutToBeChanged(Jid,QString)\0"
    "activeListChanged(Jid,QString)\0"
    "defaultListChanged(Jid,QString)\0AId\0"
    "requestCompleted(QString)\0AId,AError\0"
    "requestFailed(QString,XmppError)\0"
    "onListAboutToBeChanged(Jid,IPrivacyList)\0"
    "onListChanged(Jid,QString)\0"
    "onActiveListAboutToBeChanged(Jid,QString)\0"
    "onActiveListChanged(Jid,QString)\0"
    "onApplyAutoLists()\0AXmppStream\0"
    "onStreamOpened(IXmppStream*)\0"
    "onStreamClosed(IXmppStream*)\0"
    "AIndex,AParent\0"
    "onRosterIndexCreated(IRosterIndex*,IRosterIndex*)\0"
    "ASelected,AAccepted\0"
    "onRosterIndexMultiSelection(QList<IRosterIndex*>,bool&)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "AIndex,ALabelId,AToolTips\0"
    "onRosterIndexToolTips(IRosterIndex*,quint32,QMap<int,QString>&)\0"
    "onUpdateCreatedRosterIndexes()\0"
    "onShowEditListsDialog(bool)\0"
    "onSetActiveListByAction(bool)\0"
    "onSetDefaultListByAction(bool)\0"
    "onSetAutoPrivacyByAction(bool)\0AInserted\0"
    "onChangeContactAutoListed(bool)\0"
    "onChangeGroupAutoListed(bool)\0ABlocked\0"
    "onChangeOffRosterBlocked(bool)\0"
    "AStreamJid\0onEditListsDialogDestroyed(Jid)\0"
    "AMultiChat\0onMultiUserChatCreated(IMultiUserChat*)\0"
};

const QMetaObject PrivacyLists::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PrivacyLists,
      qt_meta_data_PrivacyLists, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrivacyLists::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrivacyLists::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrivacyLists::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrivacyLists))
        return static_cast<void*>(const_cast< PrivacyLists*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< PrivacyLists*>(this));
    if (!strcmp(_clname, "IPrivacyLists"))
        return static_cast< IPrivacyLists*>(const_cast< PrivacyLists*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< PrivacyLists*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< PrivacyLists*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< PrivacyLists*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IPrivacyLists/1.1"))
        return static_cast< IPrivacyLists*>(const_cast< PrivacyLists*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< PrivacyLists*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< PrivacyLists*>(this));
    return QObject::qt_metacast(_clname);
}

int PrivacyLists::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: listAboutToBeChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const IPrivacyList(*)>(_a[2]))); break;
        case 1: listLoaded((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: listRemoved((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: activeListAboutToBeChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: activeListChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: defaultListChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: requestCompleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: requestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 8: onListAboutToBeChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const IPrivacyList(*)>(_a[2]))); break;
        case 9: onListChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: onActiveListAboutToBeChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: onActiveListChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: onApplyAutoLists(); break;
        case 13: onStreamOpened((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 14: onStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 15: onRosterIndexCreated((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< IRosterIndex*(*)>(_a[2]))); break;
        case 16: onRosterIndexMultiSelection((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 17: onRosterIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 18: onRosterIndexToolTips((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[3]))); break;
        case 19: onUpdateCreatedRosterIndexes(); break;
        case 20: onShowEditListsDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: onSetActiveListByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: onSetDefaultListByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: onSetAutoPrivacyByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: onChangeContactAutoListed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: onChangeGroupAutoListed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: onChangeOffRosterBlocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: onEditListsDialogDestroyed((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 28: onMultiUserChatCreated((*reinterpret_cast< IMultiUserChat*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void PrivacyLists::listAboutToBeChanged(const Jid & _t1, const IPrivacyList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PrivacyLists::listLoaded(const Jid & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PrivacyLists::listRemoved(const Jid & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PrivacyLists::activeListAboutToBeChanged(const Jid & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PrivacyLists::activeListChanged(const Jid & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PrivacyLists::defaultListChanged(const Jid & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PrivacyLists::requestCompleted(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PrivacyLists::requestFailed(const QString & _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
