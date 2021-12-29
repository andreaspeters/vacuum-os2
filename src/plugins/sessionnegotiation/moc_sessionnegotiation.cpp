/****************************************************************************
** Meta object code from reading C++ file 'sessionnegotiation.h'
**
** Created: Sat Jan 26 02:20:52 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sessionnegotiation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessionnegotiation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SessionNegotiation[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   20,   19,   19, 0x05,
      62,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     108,   96,   19,   19, 0x09,
     161,  137,   19,   19, 0x09,
     224,   96,   19,   19, 0x09,
     259,   96,   19,   19, 0x09,
     298,  288,   19,   19, 0x09,
     327,   19,   19,   19, 0x09,
     352,   19,   19,   19, 0x09,
     385,  377,   19,   19, 0x09,
     429,   19,   19,   19, 0x09,
     466,  460,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SessionNegotiation[] = {
    "SessionNegotiation\0\0ASession\0"
    "sessionActivated(IStanzaSession)\0"
    "sessionTerminated(IStanzaSession)\0"
    "AXmppStream\0onStreamOpened(IXmppStream*)\0"
    "APresence,AItem,ABefore\0"
    "onPresenceItemReceived(IPresence*,IPresenceItem,IPresenceItem)\0"
    "onStreamAboutToClose(IXmppStream*)\0"
    "onStreamClosed(IXmppStream*)\0ANotifyId\0"
    "onNotificationActivated(int)\0"
    "onAcceptDialogAccepted()\0"
    "onAcceptDialogRejected()\0ADialog\0"
    "onAcceptDialogDestroyed(IDataDialogWidget*)\0"
    "onSessionActionTriggered(bool)\0AInfo\0"
    "onDiscoInfoRecieved(IDiscoInfo)\0"
};

const QMetaObject SessionNegotiation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SessionNegotiation,
      qt_meta_data_SessionNegotiation, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SessionNegotiation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SessionNegotiation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SessionNegotiation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SessionNegotiation))
        return static_cast<void*>(const_cast< SessionNegotiation*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< SessionNegotiation*>(this));
    if (!strcmp(_clname, "ISessionNegotiation"))
        return static_cast< ISessionNegotiation*>(const_cast< SessionNegotiation*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< SessionNegotiation*>(this));
    if (!strcmp(_clname, "IDiscoFeatureHandler"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< SessionNegotiation*>(this));
    if (!strcmp(_clname, "ISessionNegotiator"))
        return static_cast< ISessionNegotiator*>(const_cast< SessionNegotiation*>(this));
    if (!strcmp(_clname, "IDataLocalizer"))
        return static_cast< IDataLocalizer*>(const_cast< SessionNegotiation*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< SessionNegotiation*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ISessionNegotiation/1.0"))
        return static_cast< ISessionNegotiation*>(const_cast< SessionNegotiation*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< SessionNegotiation*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDiscoFeatureHandler/1.0"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< SessionNegotiation*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ISessionNegotiator/1.0"))
        return static_cast< ISessionNegotiator*>(const_cast< SessionNegotiation*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataLocalizer/1.0"))
        return static_cast< IDataLocalizer*>(const_cast< SessionNegotiation*>(this));
    return QObject::qt_metacast(_clname);
}

int SessionNegotiation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sessionActivated((*reinterpret_cast< const IStanzaSession(*)>(_a[1]))); break;
        case 1: sessionTerminated((*reinterpret_cast< const IStanzaSession(*)>(_a[1]))); break;
        case 2: onStreamOpened((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 3: onPresenceItemReceived((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< const IPresenceItem(*)>(_a[2])),(*reinterpret_cast< const IPresenceItem(*)>(_a[3]))); break;
        case 4: onStreamAboutToClose((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 5: onStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 6: onNotificationActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: onAcceptDialogAccepted(); break;
        case 8: onAcceptDialogRejected(); break;
        case 9: onAcceptDialogDestroyed((*reinterpret_cast< IDataDialogWidget*(*)>(_a[1]))); break;
        case 10: onSessionActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: onDiscoInfoRecieved((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SessionNegotiation::sessionActivated(const IStanzaSession & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SessionNegotiation::sessionTerminated(const IStanzaSession & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
