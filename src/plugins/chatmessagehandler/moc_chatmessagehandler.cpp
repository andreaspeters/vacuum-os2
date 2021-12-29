/****************************************************************************
** Meta object code from reading C++ file 'chatmessagehandler.h'
**
** Created: Sat Jan 26 02:13:02 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "chatmessagehandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatmessagehandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChatMessageHandler[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x09,
      37,   19,   19,   19, 0x09,
      57,   19,   19,   19, 0x09,
      74,   19,   19,   19, 0x09,
     104,   94,   19,   19, 0x09,
     159,  145,   19,   19, 0x09,
     198,   19,   19,   19, 0x09,
     221,   19,   19,   19, 0x09,
     246,   19,   19,   19, 0x09,
     284,  272,   19,   19, 0x09,
     332,  322,   19,   19, 0x09,
     399,  388,   19,   19, 0x09,
     465,  441,   19,   19, 0x09,
     550,  526,   19,   19, 0x09,
     644,  613,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ChatMessageHandler[] = {
    "ChatMessageHandler\0\0onMessageReady()\0"
    "onWindowActivated()\0onWindowClosed()\0"
    "onWindowDestroyed()\0ANotifyId\0"
    "onWindowNotifierActiveNotifyChanged(int)\0"
    "AField,AValue\0onWindowInfoFieldChanged(int,QVariant)\0"
    "onStatusIconsChanged()\0onShowWindowAction(bool)\0"
    "onClearWindowAction(bool)\0AId,AWidget\0"
    "onShortcutActivated(QString,QWidget*)\0"
    "AId,ABody\0"
    "onArchiveMessagesLoaded(QString,IArchiveCollectionBody)\0"
    "AId,AError\0onArchiveRequestFailed(QString,XmppError)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "APresence,AItem,ABefore\0"
    "onPresenceItemReceived(IPresence*,IPresenceItem,IPresenceItem)\0"
    "AOptions,AMessageType,AContext\0"
    "onStyleOptionsChanged(IMessageStyleOptions,int,QString)\0"
};

const QMetaObject ChatMessageHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChatMessageHandler,
      qt_meta_data_ChatMessageHandler, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChatMessageHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChatMessageHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChatMessageHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChatMessageHandler))
        return static_cast<void*>(const_cast< ChatMessageHandler*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< ChatMessageHandler*>(this));
    if (!strcmp(_clname, "IMessageHandler"))
        return static_cast< IMessageHandler*>(const_cast< ChatMessageHandler*>(this));
    if (!strcmp(_clname, "IXmppUriHandler"))
        return static_cast< IXmppUriHandler*>(const_cast< ChatMessageHandler*>(this));
    if (!strcmp(_clname, "IRostersClickHooker"))
        return static_cast< IRostersClickHooker*>(const_cast< ChatMessageHandler*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< ChatMessageHandler*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< ChatMessageHandler*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageHandler/1.2"))
        return static_cast< IMessageHandler*>(const_cast< ChatMessageHandler*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersClickHooker/1.3"))
        return static_cast< IRostersClickHooker*>(const_cast< ChatMessageHandler*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppUriHandler/1.0"))
        return static_cast< IXmppUriHandler*>(const_cast< ChatMessageHandler*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< ChatMessageHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int ChatMessageHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onMessageReady(); break;
        case 1: onWindowActivated(); break;
        case 2: onWindowClosed(); break;
        case 3: onWindowDestroyed(); break;
        case 4: onWindowNotifierActiveNotifyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: onWindowInfoFieldChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 6: onStatusIconsChanged(); break;
        case 7: onShowWindowAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: onClearWindowAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 10: onArchiveMessagesLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveCollectionBody(*)>(_a[2]))); break;
        case 11: onArchiveRequestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 12: onRosterIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 13: onPresenceItemReceived((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< const IPresenceItem(*)>(_a[2])),(*reinterpret_cast< const IPresenceItem(*)>(_a[3]))); break;
        case 14: onStyleOptionsChanged((*reinterpret_cast< const IMessageStyleOptions(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
