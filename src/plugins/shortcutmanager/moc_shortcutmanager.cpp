/****************************************************************************
** Meta object code from reading C++ file 'shortcutmanager.h'
**
** Created: Sat Jan 26 02:24:48 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "shortcutmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcutmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShortcutManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x09,
      35,   16,   16,   16, 0x09,
      65,   53,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ShortcutManager[] = {
    "ShortcutManager\0\0onOptionsOpened()\0"
    "onOptionsClosed()\0AId,AWidget\0"
    "onShortcutActivated(QString,QWidget*)\0"
};

const QMetaObject ShortcutManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ShortcutManager,
      qt_meta_data_ShortcutManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShortcutManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShortcutManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShortcutManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutManager))
        return static_cast<void*>(const_cast< ShortcutManager*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< ShortcutManager*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< ShortcutManager*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< ShortcutManager*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< ShortcutManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ShortcutManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onOptionsOpened(); break;
        case 1: onOptionsClosed(); break;
        case 2: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
