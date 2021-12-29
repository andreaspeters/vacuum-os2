/****************************************************************************
** Meta object code from reading C++ file 'accountsoptions.h'
**
** Created: Sat Jan 26 02:06:17 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "accountsoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountsoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AccountsOptions[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      28,   16,   16,   16, 0x05,
      41,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   16,   16,   16, 0x0a,
      62,   16,   16,   16, 0x0a,
      70,   16,   16,   16, 0x09,
      95,   16,   16,   16, 0x09,
     137,  123,   16,   16, 0x09,
     193,  179,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AccountsOptions[] = {
    "AccountsOptions\0\0modified()\0childApply()\0"
    "childReset()\0apply()\0reset()\0"
    "onAddButtonClicked(bool)\0"
    "onRemoveButtonClicked(bool)\0AItem,AColumn\0"
    "onItemDoubleClicked(QTreeWidgetItem*,int)\0"
    "AAcount,ANode\0"
    "onAccountOptionsChanged(IAccount*,OptionsNode)\0"
};

const QMetaObject AccountsOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AccountsOptions,
      qt_meta_data_AccountsOptions, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AccountsOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AccountsOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AccountsOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AccountsOptions))
        return static_cast<void*>(const_cast< AccountsOptions*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< AccountsOptions*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< AccountsOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int AccountsOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: modified(); break;
        case 1: childApply(); break;
        case 2: childReset(); break;
        case 3: apply(); break;
        case 4: reset(); break;
        case 5: onAddButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: onRemoveButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: onItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: onAccountOptionsChanged((*reinterpret_cast< IAccount*(*)>(_a[1])),(*reinterpret_cast< const OptionsNode(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AccountsOptions::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AccountsOptions::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void AccountsOptions::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
