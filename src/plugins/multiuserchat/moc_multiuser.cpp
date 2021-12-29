/****************************************************************************
** Meta object code from reading C++ file 'multiuser.h'
**
** Created: Sat Jan 26 02:16:13 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "multiuser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multiuser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MultiUser[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   11,   10,   10, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_MultiUser[] = {
    "MultiUser\0\0ARole,ABefore,AAfter\0"
    "dataChanged(int,QVariant,QVariant)\0"
};

const QMetaObject MultiUser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MultiUser,
      qt_meta_data_MultiUser, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiUser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiUser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiUser))
        return static_cast<void*>(const_cast< MultiUser*>(this));
    if (!strcmp(_clname, "IMultiUser"))
        return static_cast< IMultiUser*>(const_cast< MultiUser*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMultiUser/1.0"))
        return static_cast< IMultiUser*>(const_cast< MultiUser*>(this));
    return QObject::qt_metacast(_clname);
}

int MultiUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dataChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MultiUser::dataChanged(int _t1, const QVariant & _t2, const QVariant & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
