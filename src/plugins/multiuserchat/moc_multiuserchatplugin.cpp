/****************************************************************************
** Meta object code from reading C++ file 'multiuserchatplugin.h'
**
** Created: Sat Jan 26 02:16:19 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "multiuserchatplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multiuserchatplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MultiUserChatPlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      47,   21,   20,   20, 0x05,
      92,   81,   20,   20, 0x05,
     130,   81,   20,   20, 0x05,
     178,  170,   20,   20, 0x05,
     224,  170,   20,   20, 0x05,
     279,  272,   20,   20, 0x05,
     322,  272,   20,   20, 0x05,
     381,  367,   20,   20, 0x05,
     457,  437,   20,   20, 0x05,
     525,  519,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     562,  556,   20,   20, 0x09,
     610,  598,   20,   20, 0x09,
     652,   20,   20,   20, 0x09,
     677,   20,   20,   20, 0x09,
     704,   20,   20,   20, 0x09,
     733,  272,   20,   20, 0x09,
     783,  771,   20,   20, 0x09,
     813,   20,   20,   20, 0x09,
     845,   20,   20,   20, 0x09,
     877,   20,   20,   20, 0x09,
     910,   20,   20,   20, 0x09,
     954,  942,   20,   20, 0x09,
    1012,  992,   20,   20, 0x09,
    1097, 1073,   20,   20, 0x09,
    1174, 1163,   20,   20, 0x09,
    1218, 1206,   20,   20, 0x09,
    1279, 1268,   20,   20, 0x09,
    1330, 1322,   20,   20, 0x09,
    1358,   20,   20,   20, 0x09,
    1388,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MultiUserChatPlugin[] = {
    "MultiUserChatPlugin\0\0AStreamJid,ARoomJid,ANick\0"
    "roomNickReceived(Jid,Jid,QString)\0"
    "AMultiChat\0multiUserChatCreated(IMultiUserChat*)\0"
    "multiUserChatDestroyed(IMultiUserChat*)\0"
    "AWindow\0multiChatWindowCreated(IMultiUserChatWindow*)\0"
    "multiChatWindowDestroyed(IMultiUserChatWindow*)\0"
    "AIndex\0multiChatRosterIndexCreated(IRosterIndex*)\0"
    "multiChatRosterIndexDestroyed(IRosterIndex*)\0"
    "AWindow,AMenu\0"
    "multiChatWindowContextMenu(IMultiUserChatWindow*,Menu*)\0"
    "AWindow,AUser,AMenu\0"
    "multiUserContextMenu(IMultiUserChatWindow*,IMultiUser*,Menu*)\0"
    "AItem\0recentItemUpdated(IRecentItem)\0"
    "AMenu\0onMultiChatWindowContextMenu(Menu*)\0"
    "AUser,AMenu\0onMultiUserContextMenu(IMultiUser*,Menu*)\0"
    "onMultiUserChatChanged()\0"
    "onMultiUserChatDestroyed()\0"
    "onMultiChatWindowDestroyed()\0"
    "onRosterIndexDestroyed(IRosterIndex*)\0"
    "AXmppStream\0onStreamRemoved(IXmppStream*)\0"
    "onJoinRoomActionTriggered(bool)\0"
    "onOpenRoomActionTriggered(bool)\0"
    "onEnterRoomActionTriggered(bool)\0"
    "onExitRoomActionTriggered(bool)\0"
    "AId,AWidget\0onShortcutActivated(QString,QWidget*)\0"
    "ASelected,AAccepted\0"
    "onRostersViewIndexMultiSelection(QList<IRosterIndex*>,bool&)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRostersViewIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "ADiscoInfo\0onDiscoInfoReceived(IDiscoInfo)\0"
    "AId,AFields\0"
    "onRegisterFieldsReceived(QString,IRegisterFields)\0"
    "AId,AError\0onRegisterErrorReceived(QString,XmppError)\0"
    "AResult\0onInviteDialogFinished(int)\0"
    "onInviteActionTriggered(bool)\0"
    "onStatusIconsChanged()\0"
};

const QMetaObject MultiUserChatPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MultiUserChatPlugin,
      qt_meta_data_MultiUserChatPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiUserChatPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiUserChatPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiUserChatPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiUserChatPlugin))
        return static_cast<void*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "IMultiUserChatPlugin"))
        return static_cast< IMultiUserChatPlugin*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "IXmppUriHandler"))
        return static_cast< IXmppUriHandler*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "IDiscoFeatureHandler"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "IMessageHandler"))
        return static_cast< IMessageHandler*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "IDataLocalizer"))
        return static_cast< IDataLocalizer*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "IRostersClickHooker"))
        return static_cast< IRostersClickHooker*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "IRecentItemHandler"))
        return static_cast< IRecentItemHandler*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMultiUserChatPlugin/1.4"))
        return static_cast< IMultiUserChatPlugin*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppUriHandler/1.0"))
        return static_cast< IXmppUriHandler*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDiscoFeatureHandler/1.0"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageHandler/1.2"))
        return static_cast< IMessageHandler*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataLocalizer/1.0"))
        return static_cast< IDataLocalizer*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersClickHooker/1.3"))
        return static_cast< IRostersClickHooker*>(const_cast< MultiUserChatPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRecentItemHandler/1.0"))
        return static_cast< IRecentItemHandler*>(const_cast< MultiUserChatPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int MultiUserChatPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: roomNickReceived((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: multiUserChatCreated((*reinterpret_cast< IMultiUserChat*(*)>(_a[1]))); break;
        case 2: multiUserChatDestroyed((*reinterpret_cast< IMultiUserChat*(*)>(_a[1]))); break;
        case 3: multiChatWindowCreated((*reinterpret_cast< IMultiUserChatWindow*(*)>(_a[1]))); break;
        case 4: multiChatWindowDestroyed((*reinterpret_cast< IMultiUserChatWindow*(*)>(_a[1]))); break;
        case 5: multiChatRosterIndexCreated((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 6: multiChatRosterIndexDestroyed((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 7: multiChatWindowContextMenu((*reinterpret_cast< IMultiUserChatWindow*(*)>(_a[1])),(*reinterpret_cast< Menu*(*)>(_a[2]))); break;
        case 8: multiUserContextMenu((*reinterpret_cast< IMultiUserChatWindow*(*)>(_a[1])),(*reinterpret_cast< IMultiUser*(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 9: recentItemUpdated((*reinterpret_cast< const IRecentItem(*)>(_a[1]))); break;
        case 10: onMultiChatWindowContextMenu((*reinterpret_cast< Menu*(*)>(_a[1]))); break;
        case 11: onMultiUserContextMenu((*reinterpret_cast< IMultiUser*(*)>(_a[1])),(*reinterpret_cast< Menu*(*)>(_a[2]))); break;
        case 12: onMultiUserChatChanged(); break;
        case 13: onMultiUserChatDestroyed(); break;
        case 14: onMultiChatWindowDestroyed(); break;
        case 15: onRosterIndexDestroyed((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 16: onStreamRemoved((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 17: onJoinRoomActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: onOpenRoomActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: onEnterRoomActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: onExitRoomActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 22: onRostersViewIndexMultiSelection((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: onRostersViewIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 24: onDiscoInfoReceived((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 25: onRegisterFieldsReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IRegisterFields(*)>(_a[2]))); break;
        case 26: onRegisterErrorReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 27: onInviteDialogFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: onInviteActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: onStatusIconsChanged(); break;
        default: ;
        }
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void MultiUserChatPlugin::roomNickReceived(const Jid & _t1, const Jid & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MultiUserChatPlugin::multiUserChatCreated(IMultiUserChat * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MultiUserChatPlugin::multiUserChatDestroyed(IMultiUserChat * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MultiUserChatPlugin::multiChatWindowCreated(IMultiUserChatWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MultiUserChatPlugin::multiChatWindowDestroyed(IMultiUserChatWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MultiUserChatPlugin::multiChatRosterIndexCreated(IRosterIndex * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MultiUserChatPlugin::multiChatRosterIndexDestroyed(IRosterIndex * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MultiUserChatPlugin::multiChatWindowContextMenu(IMultiUserChatWindow * _t1, Menu * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MultiUserChatPlugin::multiUserContextMenu(IMultiUserChatWindow * _t1, IMultiUser * _t2, Menu * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MultiUserChatPlugin::recentItemUpdated(const IRecentItem & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
