/****************************************************************************
** Meta object code from reading C++ file 'optionsdialog.h'
**
** Created: Sat Jan 26 01:40:42 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "optionsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SortFilterProxyModel[] = {

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

static const char qt_meta_stringdata_SortFilterProxyModel[] = {
    "SortFilterProxyModel\0"
};

const QMetaObject SortFilterProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_SortFilterProxyModel,
      qt_meta_data_SortFilterProxyModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SortFilterProxyModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SortFilterProxyModel))
        return static_cast<void*>(const_cast< SortFilterProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int SortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_OptionsDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      25,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   35,   14,   14, 0x09,
      89,   35,   14,   14, 0x09,
     155,  136,   14,   14, 0x09,
     201,   14,   14,   14, 0x09,
     235,  227,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_OptionsDialog[] = {
    "OptionsDialog\0\0applied()\0reseted()\0"
    "ANode\0onOptionsDialogNodeInserted(IOptionsDialogNode)\0"
    "onOptionsDialogNodeRemoved(IOptionsDialogNode)\0"
    "ACurrent,APrevious\0"
    "onCurrentItemChanged(QModelIndex,QModelIndex)\0"
    "onOptionsWidgetModified()\0AButton\0"
    "onDialogButtonClicked(QAbstractButton*)\0"
};

const QMetaObject OptionsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OptionsDialog,
      qt_meta_data_OptionsDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsDialog))
        return static_cast<void*>(const_cast< OptionsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int OptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: applied(); break;
        case 1: reseted(); break;
        case 2: onOptionsDialogNodeInserted((*reinterpret_cast< const IOptionsDialogNode(*)>(_a[1]))); break;
        case 3: onOptionsDialogNodeRemoved((*reinterpret_cast< const IOptionsDialogNode(*)>(_a[1]))); break;
        case 4: onCurrentItemChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: onOptionsWidgetModified(); break;
        case 6: onDialogButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OptionsDialog::applied()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void OptionsDialog::reseted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
