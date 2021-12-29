/****************************************************************************
** Meta object code from reading C++ file 'account.h'
**
** Created: Sat Jan 26 02:06:20 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "account.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'account.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Account[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,    9,    8,    8, 0x05,
      43,   37,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,    8,    8,    8, 0x09,
      92,   37,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Account[] = {
    "Account\0\0AActive\0activeChanged(bool)\0"
    "ANode\0optionsChanged(OptionsNode)\0"
    "onXmppStreamClosed()\0onOptionsChanged(OptionsNode)\0"
};

const QMetaObject Account::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Account,
      qt_meta_data_Account, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Account::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Account::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Account::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Account))
        return static_cast<void*>(const_cast< Account*>(this));
    if (!strcmp(_clname, "IAccount"))
        return static_cast< IAccount*>(const_cast< Account*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IAccount/1.0"))
        return static_cast< IAccount*>(const_cast< Account*>(this));
    return QObject::qt_metacast(_clname);
}

int Account::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: activeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: optionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 2: onXmppStreamClosed(); break;
        case 3: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Account::activeChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Account::optionsChanged(const OptionsNode & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
