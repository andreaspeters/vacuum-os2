/****************************************************************************
** Meta object code from reading C++ file 'normalmessagehandler.h'
**
** Created: Sat Jan 26 02:12:50 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "normalmessagehandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'normalmessagehandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NormalMessageHandler[] = {

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
      22,   21,   21,   21, 0x09,
      39,   21,   21,   21, 0x09,
      59,   21,   21,   21, 0x09,
      76,   21,   21,   21, 0x09,
      95,   21,   21,   21, 0x09,
     114,   21,   21,   21, 0x09,
     134,   21,   21,   21, 0x09,
     164,  154,   21,   21, 0x09,
     205,   21,   21,   21, 0x09,
     228,   21,   21,   21, 0x09,
     265,  253,   21,   21, 0x09,
     323,  303,   21,   21, 0x09,
     403,  379,   21,   21, 0x09,
     488,  464,   21,   21, 0x09,
     582,  551,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_NormalMessageHandler[] = {
    "NormalMessageHandler\0\0onMessageReady()\0"
    "onShowNextMessage()\0onReplyMessage()\0"
    "onForwardMessage()\0onShowChatWindow()\0"
    "onWindowActivated()\0onWindowDestroyed()\0"
    "ANotifyId\0onWindowNotifierActiveNotifyChanged(int)\0"
    "onStatusIconsChanged()\0onShowWindowAction(bool)\0"
    "AId,AWidget\0onShortcutActivated(QString,QWidget*)\0"
    "ASelected,AAccepted\0"
    "onRosterIndexMultiSelection(QList<IRosterIndex*>,bool&)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "APresence,AItem,ABefore\0"
    "onPresenceItemReceived(IPresence*,IPresenceItem,IPresenceItem)\0"
    "AOptions,AMessageType,AContext\0"
    "onStyleOptionsChanged(IMessageStyleOptions,int,QString)\0"
};

const QMetaObject NormalMessageHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NormalMessageHandler,
      qt_meta_data_NormalMessageHandler, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NormalMessageHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NormalMessageHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NormalMessageHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NormalMessageHandler))
        return static_cast<void*>(const_cast< NormalMessageHandler*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< NormalMessageHandler*>(this));
    if (!strcmp(_clname, "IMessageHandler"))
        return static_cast< IMessageHandler*>(const_cast< NormalMessageHandler*>(this));
    if (!strcmp(_clname, "IXmppUriHandler"))
        return static_cast< IXmppUriHandler*>(const_cast< NormalMessageHandler*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< NormalMessageHandler*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< NormalMessageHandler*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageHandler/1.2"))
        return static_cast< IMessageHandler*>(const_cast< NormalMessageHandler*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppUriHandler/1.0"))
        return static_cast< IXmppUriHandler*>(const_cast< NormalMessageHandler*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< NormalMessageHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int NormalMessageHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onMessageReady(); break;
        case 1: onShowNextMessage(); break;
        case 2: onReplyMessage(); break;
        case 3: onForwardMessage(); break;
        case 4: onShowChatWindow(); break;
        case 5: onWindowActivated(); break;
        case 6: onWindowDestroyed(); break;
        case 7: onWindowNotifierActiveNotifyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: onStatusIconsChanged(); break;
        case 9: onShowWindowAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 11: onRosterIndexMultiSelection((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
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
