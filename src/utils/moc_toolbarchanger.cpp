/****************************************************************************
** Meta object code from reading C++ file 'toolbarchanger.h'
**
** Created: Sat Jan 26 00:39:19 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toolbarchanger.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolbarchanger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ToolBarChanger[] = {

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
      55,   16,   15,   15, 0x05,
     116,  108,   15,   15, 0x05,
     154,  138,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     203,  195,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ToolBarChanger[] = {
    "ToolBarChanger\0\0ABefore,AHandle,AAction,AWidget,AGroup\0"
    "itemInserted(QAction*,QAction*,Action*,QWidget*,int)\0"
    "AHandle\0itemRemoved(QAction*)\0"
    "AToolBarChanger\0"
    "toolBarChangerDestroyed(ToolBarChanger*)\0"
    "AObject\0onWidgetDestroyed(QObject*)\0"
};

const QMetaObject ToolBarChanger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ToolBarChanger,
      qt_meta_data_ToolBarChanger, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToolBarChanger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToolBarChanger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToolBarChanger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToolBarChanger))
        return static_cast<void*>(const_cast< ToolBarChanger*>(this));
    return QObject::qt_metacast(_clname);
}

int ToolBarChanger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: itemInserted((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2])),(*reinterpret_cast< Action*(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 1: itemRemoved((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: toolBarChangerDestroyed((*reinterpret_cast< ToolBarChanger*(*)>(_a[1]))); break;
        case 3: onWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ToolBarChanger::itemInserted(QAction * _t1, QAction * _t2, Action * _t3, QWidget * _t4, int _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ToolBarChanger::itemRemoved(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ToolBarChanger::toolBarChangerDestroyed(ToolBarChanger * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
