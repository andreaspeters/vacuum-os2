/****************************************************************************
** Meta object code from reading C++ file 'datafieldwidget.h'
**
** Created: Sat Jan 26 02:17:05 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "datafieldwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datafieldwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TextEdit[] = {

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

static const char qt_meta_stringdata_TextEdit[] = {
    "TextEdit\0"
};

const QMetaObject TextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_TextEdit,
      qt_meta_data_TextEdit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextEdit))
        return static_cast<void*>(const_cast< TextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int TextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ListWidget[] = {

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

static const char qt_meta_stringdata_ListWidget[] = {
    "ListWidget\0"
};

const QMetaObject ListWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_ListWidget,
      qt_meta_data_ListWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ListWidget))
        return static_cast<void*>(const_cast< ListWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int ListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_DataFieldWidget[] = {

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
      25,   17,   16,   16, 0x05,
      50,   17,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_DataFieldWidget[] = {
    "DataFieldWidget\0\0AReason\0"
    "focusIn(Qt::FocusReason)\0"
    "focusOut(Qt::FocusReason)\0"
};

const QMetaObject DataFieldWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DataFieldWidget,
      qt_meta_data_DataFieldWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataFieldWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataFieldWidget))
        return static_cast<void*>(const_cast< DataFieldWidget*>(this));
    if (!strcmp(_clname, "IDataFieldWidget"))
        return static_cast< IDataFieldWidget*>(const_cast< DataFieldWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataFieldWidget/1.0"))
        return static_cast< IDataFieldWidget*>(const_cast< DataFieldWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int DataFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: focusIn((*reinterpret_cast< Qt::FocusReason(*)>(_a[1]))); break;
        case 1: focusOut((*reinterpret_cast< Qt::FocusReason(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DataFieldWidget::focusIn(Qt::FocusReason _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataFieldWidget::focusOut(Qt::FocusReason _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
