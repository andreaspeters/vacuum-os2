/****************************************************************************
** Meta object code from reading C++ file 'traymanager.h'
**
** Created: Sat Jan 26 02:06:28 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "traymanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'traymanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TrayManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   13,   12,   12, 0x05,
      43,   13,   12,   12, 0x05,
      62,   13,   12,   12, 0x05,
     105,   87,   12,   12, 0x05,
     160,   12,   12,   12, 0x05,
     208,  177,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     279,  271,   12,   12, 0x09,
     334,   12,   12,   12, 0x09,
     356,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TrayManager[] = {
    "TrayManager\0\0ANotifyId\0notifyAppended(int)\0"
    "notifyRemoved(int)\0activeNotifyChanged(int)\0"
    "ANotifyId,AReason\0"
    "notifyActivated(int,QSystemTrayIcon::ActivationReason)\0"
    "messageClicked()\0ATitle,AMessage,AIcon,ATimeout\0"
    "messageShown(QString,QString,QSystemTrayIcon::MessageIcon,int)\0"
    "AReason\0onTrayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "onBlinkTimerTimeout()\0onShutdownStarted()\0"
};

const QMetaObject TrayManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TrayManager,
      qt_meta_data_TrayManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TrayManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TrayManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TrayManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TrayManager))
        return static_cast<void*>(const_cast< TrayManager*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< TrayManager*>(this));
    if (!strcmp(_clname, "ITrayManager"))
        return static_cast< ITrayManager*>(const_cast< TrayManager*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< TrayManager*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ITrayManager/1.0"))
        return static_cast< ITrayManager*>(const_cast< TrayManager*>(this));
    return QObject::qt_metacast(_clname);
}

int TrayManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: notifyAppended((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: notifyRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: activeNotifyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: notifyActivated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[2]))); break;
        case 4: messageClicked(); break;
        case 5: messageShown((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSystemTrayIcon::MessageIcon(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: onTrayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 7: onBlinkTimerTimeout(); break;
        case 8: onShutdownStarted(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void TrayManager::notifyAppended(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TrayManager::notifyRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TrayManager::activeNotifyChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TrayManager::notifyActivated(int _t1, QSystemTrayIcon::ActivationReason _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TrayManager::messageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void TrayManager::messageShown(const QString & _t1, const QString & _t2, QSystemTrayIcon::MessageIcon _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
