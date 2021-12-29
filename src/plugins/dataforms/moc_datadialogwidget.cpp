/****************************************************************************
** Meta object code from reading C++ file 'datadialogwidget.h'
**
** Created: Sat Jan 26 02:17:10 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "datadialogwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datadialogwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataDialogWidget[] = {

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
      24,   18,   17,   17, 0x05,
      60,   18,   17,   17, 0x05,
     106,   98,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     150,  142,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DataDialogWidget[] = {
    "DataDialogWidget\0\0AForm\0"
    "formWidgetCreated(IDataFormWidget*)\0"
    "formWidgetDestroyed(IDataFormWidget*)\0"
    "ADialog\0dialogDestroyed(IDataDialogWidget*)\0"
    "AButton\0onDialogButtonClicked(QAbstractButton*)\0"
};

const QMetaObject DataDialogWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DataDialogWidget,
      qt_meta_data_DataDialogWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataDialogWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataDialogWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataDialogWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataDialogWidget))
        return static_cast<void*>(const_cast< DataDialogWidget*>(this));
    if (!strcmp(_clname, "IDataDialogWidget"))
        return static_cast< IDataDialogWidget*>(const_cast< DataDialogWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataDialogWidget/1.0"))
        return static_cast< IDataDialogWidget*>(const_cast< DataDialogWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int DataDialogWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: formWidgetCreated((*reinterpret_cast< IDataFormWidget*(*)>(_a[1]))); break;
        case 1: formWidgetDestroyed((*reinterpret_cast< IDataFormWidget*(*)>(_a[1]))); break;
        case 2: dialogDestroyed((*reinterpret_cast< IDataDialogWidget*(*)>(_a[1]))); break;
        case 3: onDialogButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DataDialogWidget::formWidgetCreated(IDataFormWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataDialogWidget::formWidgetDestroyed(IDataFormWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataDialogWidget::dialogDestroyed(IDataDialogWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
