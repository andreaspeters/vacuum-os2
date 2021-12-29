/****************************************************************************
** Meta object code from reading C++ file 'menubarchanger.h'
**
** Created: Sat Jan 26 00:39:25 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "menubarchanger.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menubarchanger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MenuBarChanger[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   16,   15,   15, 0x05,
      73,   67,   15,   15, 0x05,
     108,   92,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     149,   67,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MenuBarChanger[] = {
    "MenuBarChanger\0\0ABefore,AMenu,AGroup\0"
    "menuInserted(Menu*,Menu*,int)\0AMenu\0"
    "menuRemoved(Menu*)\0AMenuBarChanger\0"
    "menuBarChangerDestroyed(MenuBarChanger*)\0"
    "onMenuDestroyed(Menu*)\0"
};

const QMetaObject MenuBarChanger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MenuBarChanger,
      qt_meta_data_MenuBarChanger, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MenuBarChanger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MenuBarChanger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MenuBarChanger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MenuBarChanger))
        return static_cast<void*>(const_cast< MenuBarChanger*>(this));
    return QObject::qt_metacast(_clname);
}

int MenuBarChanger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: menuInserted((*reinterpret_cast< Menu*(*)>(_a[1])),(*reinterpret_cast< Menu*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: menuRemoved((*reinterpret_cast< Menu*(*)>(_a[1]))); break;
        case 2: menuBarChangerDestroyed((*reinterpret_cast< MenuBarChanger*(*)>(_a[1]))); break;
        case 3: onMenuDestroyed((*reinterpret_cast< Menu*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MenuBarChanger::menuInserted(Menu * _t1, Menu * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MenuBarChanger::menuRemoved(Menu * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MenuBarChanger::menuBarChangerDestroyed(MenuBarChanger * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
