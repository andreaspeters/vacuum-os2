/****************************************************************************
** Meta object code from reading C++ file 'pluginmanager.h'
**
** Created: Sat Jan 26 01:23:14 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pluginmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PluginManager[] = {

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
      15,   14,   14,   14, 0x05,
      29,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   14,   14,   14, 0x0a,
      54,   14,   14,   14, 0x0a,
      64,   14,   14,   14, 0x0a,
      80,   14,   14,   14, 0x0a,
      99,   14,   14,   14, 0x09,
     135,  126,   14,   14, 0x09,
     186,   14,   14,   14, 0x09,
     217,   14,   14,   14, 0x09,
     248,   14,   14,   14, 0x09,
     271,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PluginManager[] = {
    "PluginManager\0\0aboutToQuit()\0"
    "shutdownStarted()\0quit()\0restart()\0"
    "delayShutdown()\0continueShutdown()\0"
    "onApplicationAboutToQuit()\0AManager\0"
    "onApplicationCommitDataRequested(QSessionManager&)\0"
    "onShowSetupPluginsDialog(bool)\0"
    "onSetupPluginsDialogAccepted()\0"
    "onShowAboutBoxDialog()\0onShutdownTimerTimeout()\0"
};

const QMetaObject PluginManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PluginManager,
      qt_meta_data_PluginManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginManager))
        return static_cast<void*>(const_cast< PluginManager*>(this));
    if (!strcmp(_clname, "IPluginManager"))
        return static_cast< IPluginManager*>(const_cast< PluginManager*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPluginManager/1.1"))
        return static_cast< IPluginManager*>(const_cast< PluginManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PluginManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: aboutToQuit(); break;
        case 1: shutdownStarted(); break;
        case 2: quit(); break;
        case 3: restart(); break;
        case 4: delayShutdown(); break;
        case 5: continueShutdown(); break;
        case 6: onApplicationAboutToQuit(); break;
        case 7: onApplicationCommitDataRequested((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        case 8: onShowSetupPluginsDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: onSetupPluginsDialogAccepted(); break;
        case 10: onShowAboutBoxDialog(); break;
        case 11: onShutdownTimerTimeout(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PluginManager::aboutToQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PluginManager::shutdownStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
