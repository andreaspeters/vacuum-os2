/****************************************************************************
** Meta object code from reading C++ file 'notifications.h'
**
** Created: Sat Jan 26 02:21:16 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "notifications.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notifications.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Notifications[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   15,   14,   14, 0x05,
      52,   15,   14,   14, 0x05,
     101,   77,   14,   14, 0x05,
     140,   77,   14,   14, 0x05,
     196,  180,   14,   14, 0x05,
     251,  180,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     305,   14,   14,   14, 0x09,
     328,   14,   14,   14, 0x09,
     353,   14,   14,   14, 0x09,
     387,   14,   14,   14, 0x09,
     415,   15,   14,   14, 0x09,
     444,   15,   14,   14, 0x09,
     489,  471,   14,   14, 0x09,
     550,   15,   14,   14, 0x09,
     575,   14,   14,   14, 0x09,
     601,   14,   14,   14, 0x09,
     625,   14,   14,   14, 0x09,
     651,   14,   14,   14, 0x09,
     681,   14,   14,   14, 0x09,
     705,  699,   14,   14, 0x09,
     747,  735,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Notifications[] = {
    "Notifications\0\0ANotifyId\0"
    "notificationActivated(int)\0"
    "notificationRemoved(int)\0"
    "ANotifyId,ANotification\0"
    "notificationAppend(int,INotification&)\0"
    "notificationAppended(int,INotification)\0"
    "AOrder,AHandler\0"
    "notificationHandlerInserted(int,INotificationHandler*)\0"
    "notificationHandlerRemoved(int,INotificationHandler*)\0"
    "onDelayedActivations()\0onDelayedShowMinimized()\0"
    "onSoundOnOffActionTriggered(bool)\0"
    "onTrayActionTriggered(bool)\0"
    "onRosterNotifyActivated(int)\0"
    "onRosterNotifyRemoved(int)\0ANotifyId,AReason\0"
    "onTrayNotifyActivated(int,QSystemTrayIcon::ActivationReason)\0"
    "onTrayNotifyRemoved(int)\0"
    "onWindowNotifyActivated()\0"
    "onWindowNotifyRemoved()\0"
    "onWindowNotifyDestroyed()\0"
    "onActionNotifyActivated(bool)\0"
    "onOptionsOpened()\0ANode\0"
    "onOptionsChanged(OptionsNode)\0AId,AWidget\0"
    "onShortcutActivated(QString,QWidget*)\0"
};

const QMetaObject Notifications::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Notifications,
      qt_meta_data_Notifications, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Notifications::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Notifications::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Notifications::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Notifications))
        return static_cast<void*>(const_cast< Notifications*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< Notifications*>(this));
    if (!strcmp(_clname, "INotifications"))
        return static_cast< INotifications*>(const_cast< Notifications*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< Notifications*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< Notifications*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.INotifications/1.3"))
        return static_cast< INotifications*>(const_cast< Notifications*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< Notifications*>(this));
    return QObject::qt_metacast(_clname);
}

int Notifications::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: notificationActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: notificationRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: notificationAppend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< INotification(*)>(_a[2]))); break;
        case 3: notificationAppended((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const INotification(*)>(_a[2]))); break;
        case 4: notificationHandlerInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< INotificationHandler*(*)>(_a[2]))); break;
        case 5: notificationHandlerRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< INotificationHandler*(*)>(_a[2]))); break;
        case 6: onDelayedActivations(); break;
        case 7: onDelayedShowMinimized(); break;
        case 8: onSoundOnOffActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: onTrayActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: onRosterNotifyActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: onRosterNotifyRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: onTrayNotifyActivated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[2]))); break;
        case 13: onTrayNotifyRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: onWindowNotifyActivated(); break;
        case 15: onWindowNotifyRemoved(); break;
        case 16: onWindowNotifyDestroyed(); break;
        case 17: onActionNotifyActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: onOptionsOpened(); break;
        case 19: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 20: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void Notifications::notificationActivated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Notifications::notificationRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Notifications::notificationAppend(int _t1, INotification & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Notifications::notificationAppended(int _t1, const INotification & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Notifications::notificationHandlerInserted(int _t1, INotificationHandler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Notifications::notificationHandlerRemoved(int _t1, INotificationHandler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
