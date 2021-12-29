/****************************************************************************
** Meta object code from reading C++ file 'statusoptionswidget.h'
**
** Created: Sat Jan 26 02:21:36 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "statusoptionswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusoptionswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Delegate[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Delegate[] = {
    "Delegate\0"
};

const QMetaObject Delegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_Delegate,
      qt_meta_data_Delegate, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Delegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Delegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Delegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Delegate))
        return static_cast<void*>(const_cast< Delegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int Delegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_StatusOptionsWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      32,   20,   20,   20, 0x05,
      45,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   20,   20,   20, 0x0a,
      66,   20,   20,   20, 0x0a,
      74,   20,   20,   20, 0x09,
     100,   20,   20,   20, 0x09,
     125,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_StatusOptionsWidget[] = {
    "StatusOptionsWidget\0\0modified()\0"
    "childApply()\0childReset()\0apply()\0"
    "reset()\0onHelpButtonClicked(bool)\0"
    "onAddButtonClicked(bool)\0"
    "onDeleteButtonClicked(bool)\0"
};

const QMetaObject StatusOptionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StatusOptionsWidget,
      qt_meta_data_StatusOptionsWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StatusOptionsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StatusOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StatusOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StatusOptionsWidget))
        return static_cast<void*>(const_cast< StatusOptionsWidget*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< StatusOptionsWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< StatusOptionsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int StatusOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 5: onHelpButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: onAddButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: onDeleteButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void StatusOptionsWidget::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void StatusOptionsWidget::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StatusOptionsWidget::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
