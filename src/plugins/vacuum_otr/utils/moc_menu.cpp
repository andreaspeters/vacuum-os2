/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created: Sat Jan 26 00:39:16 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "menu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Menu[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,    6,    5,    5, 0x05,
      85,   77,    5,    5, 0x05,
     127,  108,    5,    5, 0x05,
     174,  163,    5,    5, 0x05,
     207,  201,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
     228,   77,    5,    5, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Menu[] = {
    "Menu\0\0ABefore,AAction,AGroup,ASort\0"
    "actionInserted(QAction*,Action*,int,bool)\0"
    "AAction\0actionRemoved(Action*)\0"
    "ABefore,ASeparator\0"
    "separatorInserted(Action*,QAction*)\0"
    "ASeparator\0separatorRemoved(QAction*)\0"
    "AMenu\0menuDestroyed(Menu*)\0"
    "onActionDestroyed(Action*)\0"
};

const QMetaObject Menu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_Menu,
      qt_meta_data_Menu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Menu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Menu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Menu))
        return static_cast<void*>(const_cast< Menu*>(this));
    return QMenu::qt_metacast(_clname);
}

int Menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: actionInserted((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< Action*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: actionRemoved((*reinterpret_cast< Action*(*)>(_a[1]))); break;
        case 2: separatorInserted((*reinterpret_cast< Action*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 3: separatorRemoved((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: menuDestroyed((*reinterpret_cast< Menu*(*)>(_a[1]))); break;
        case 5: onActionDestroyed((*reinterpret_cast< Action*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Menu::actionInserted(QAction * _t1, Action * _t2, int _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Menu::actionRemoved(Action * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Menu::separatorInserted(Action * _t1, QAction * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Menu::separatorRemoved(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Menu::menuDestroyed(Menu * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
