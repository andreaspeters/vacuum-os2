/****************************************************************************
** Meta object code from reading C++ file 'dataformwidget.h'
**
** Created: Sat Jan 26 02:17:08 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dataformwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataformwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataFormWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   16,   15,   15, 0x05,
     108,   52,   15,   15, 0x05,
     152,  137,   15,   15, 0x05,
     200,  137,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     257,  249,   15,   15, 0x09,
     289,  249,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DataFormWidget[] = {
    "DataFormWidget\0\0ARow,AColumn\0"
    "cellActivated(int,int)\0"
    "ACurrentRow,ACurrentColumn,APreviousRow,APreviousColumn\0"
    "cellChanged(int,int,int,int)\0"
    "AField,AReason\0"
    "fieldFocusIn(IDataFieldWidget*,Qt::FocusReason)\0"
    "fieldFocusOut(IDataFieldWidget*,Qt::FocusReason)\0"
    "AReason\0onFieldFocusIn(Qt::FocusReason)\0"
    "onFieldFocusOut(Qt::FocusReason)\0"
};

const QMetaObject DataFormWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DataFormWidget,
      qt_meta_data_DataFormWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataFormWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataFormWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataFormWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataFormWidget))
        return static_cast<void*>(const_cast< DataFormWidget*>(this));
    if (!strcmp(_clname, "IDataFormWidget"))
        return static_cast< IDataFormWidget*>(const_cast< DataFormWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataFormWidget/1.0"))
        return static_cast< IDataFormWidget*>(const_cast< DataFormWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int DataFormWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: cellActivated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: fieldFocusIn((*reinterpret_cast< IDataFieldWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::FocusReason(*)>(_a[2]))); break;
        case 3: fieldFocusOut((*reinterpret_cast< IDataFieldWidget*(*)>(_a[1])),(*reinterpret_cast< Qt::FocusReason(*)>(_a[2]))); break;
        case 4: onFieldFocusIn((*reinterpret_cast< Qt::FocusReason(*)>(_a[1]))); break;
        case 5: onFieldFocusOut((*reinterpret_cast< Qt::FocusReason(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DataFormWidget::cellActivated(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataFormWidget::cellChanged(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataFormWidget::fieldFocusIn(IDataFieldWidget * _t1, Qt::FocusReason _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataFormWidget::fieldFocusOut(IDataFieldWidget * _t1, Qt::FocusReason _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
