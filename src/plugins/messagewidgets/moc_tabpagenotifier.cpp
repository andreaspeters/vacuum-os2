/****************************************************************************
** Meta object code from reading C++ file 'tabpagenotifier.h'
**
** Created: Sat Jan 26 02:07:57 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tabpagenotifier.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabpagenotifier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabPageNotifier[] = {

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
      27,   17,   16,   16, 0x05,
      47,   17,   16,   16, 0x05,
      66,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      91,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TabPageNotifier[] = {
    "TabPageNotifier\0\0ANotifyId\0"
    "notifyInserted(int)\0notifyRemoved(int)\0"
    "activeNotifyChanged(int)\0"
    "onUpdateTimerTimeout()\0"
};

const QMetaObject TabPageNotifier::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TabPageNotifier,
      qt_meta_data_TabPageNotifier, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabPageNotifier::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabPageNotifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabPageNotifier::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabPageNotifier))
        return static_cast<void*>(const_cast< TabPageNotifier*>(this));
    if (!strcmp(_clname, "ITabPageNotifier"))
        return static_cast< ITabPageNotifier*>(const_cast< TabPageNotifier*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ITabPageNotifier/1.0"))
        return static_cast< ITabPageNotifier*>(const_cast< TabPageNotifier*>(this));
    return QObject::qt_metacast(_clname);
}

int TabPageNotifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: notifyInserted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: notifyRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: activeNotifyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: onUpdateTimerTimeout(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TabPageNotifier::notifyInserted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TabPageNotifier::notifyRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TabPageNotifier::activeNotifyChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
