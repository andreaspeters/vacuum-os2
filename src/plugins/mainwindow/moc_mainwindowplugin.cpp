/****************************************************************************
** Meta object code from reading C++ file 'mainwindowplugin.h'
**
** Created: Sat Jan 26 02:04:57 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindowplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindowPlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      36,   17,   17,   17, 0x09,
      54,   17,   17,   17, 0x09,
      74,   17,   17,   17, 0x09,
     100,   17,   17,   17, 0x09,
     143,  131,   17,   17, 0x09,
     199,  181,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MainWindowPlugin[] = {
    "MainWindowPlugin\0\0onOptionsOpened()\0"
    "onOptionsClosed()\0onShutdownStarted()\0"
    "onShowMainWindowOnStart()\0"
    "onShowMainWindowByAction(bool)\0"
    "AId,AWidget\0onShortcutActivated(QString,QWidget*)\0"
    "ANotifyId,AReason\0"
    "onTrayNotifyActivated(int,QSystemTrayIcon::ActivationReason)\0"
};

const QMetaObject MainWindowPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MainWindowPlugin,
      qt_meta_data_MainWindowPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindowPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindowPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindowPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowPlugin))
        return static_cast<void*>(const_cast< MainWindowPlugin*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< MainWindowPlugin*>(this));
    if (!strcmp(_clname, "IMainWindowPlugin"))
        return static_cast< IMainWindowPlugin*>(const_cast< MainWindowPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< MainWindowPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMainWindowPlugin/1.1"))
        return static_cast< IMainWindowPlugin*>(const_cast< MainWindowPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int MainWindowPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onOptionsOpened(); break;
        case 1: onOptionsClosed(); break;
        case 2: onShutdownStarted(); break;
        case 3: onShowMainWindowOnStart(); break;
        case 4: onShowMainWindowByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 6: onTrayNotifyActivated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
