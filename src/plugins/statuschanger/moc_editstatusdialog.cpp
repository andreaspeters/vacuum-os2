/****************************************************************************
** Meta object code from reading C++ file 'editstatusdialog.h'
**
** Created: Sat Jan 26 02:05:37 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editstatusdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editstatusdialog.h' doesn't include <QObject>."
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
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_Delegate,
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
    return QStyledItemDelegate::qt_metacast(_clname);
}

int Delegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_EditStatusDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      36,   17,   17,   17, 0x09,
      57,   17,   17,   17, 0x09,
      86,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_EditStatusDialog[] = {
    "EditStatusDialog\0\0onAddbutton(bool)\0"
    "onDeleteButton(bool)\0onDialogButtonsBoxAccepted()\0"
    "onSelectionChanged()\0"
};

const QMetaObject EditStatusDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditStatusDialog,
      qt_meta_data_EditStatusDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditStatusDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditStatusDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditStatusDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditStatusDialog))
        return static_cast<void*>(const_cast< EditStatusDialog*>(this));
    if (!strcmp(_clname, "EditStatusDialogClass"))
        return static_cast< EditStatusDialogClass*>(const_cast< EditStatusDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditStatusDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onAddbutton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: onDeleteButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: onDialogButtonsBoxAccepted(); break;
        case 3: onSelectionChanged(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
