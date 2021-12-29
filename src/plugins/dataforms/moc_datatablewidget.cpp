/****************************************************************************
** Meta object code from reading C++ file 'datatablewidget.h'
**
** Created: Sat Jan 26 02:16:59 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "datatablewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datatablewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataTableWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   17,   16,   16, 0x05,
     105,   49,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_DataTableWidget[] = {
    "DataTableWidget\0\0ARow,AColumn\0"
    "activated(int,int)\0"
    "ACurrentRow,ACurrentColumn,APreviousRow,APreviousColumn\0"
    "changed(int,int,int,int)\0"
};

const QMetaObject DataTableWidget::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_DataTableWidget,
      qt_meta_data_DataTableWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataTableWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataTableWidget))
        return static_cast<void*>(const_cast< DataTableWidget*>(this));
    if (!strcmp(_clname, "IDataTableWidget"))
        return static_cast< IDataTableWidget*>(const_cast< DataTableWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataTableWidget/1.0"))
        return static_cast< IDataTableWidget*>(const_cast< DataTableWidget*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int DataTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: activated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: changed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DataTableWidget::activated(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataTableWidget::changed(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
