/****************************************************************************
** Meta object code from reading C++ file 'datamediawidget.h'
**
** Created: Sat Jan 26 02:17:02 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "datamediawidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datamediawidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataMediaWidget[] = {

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
      17,   16,   16,   16, 0x05,
      37,   30,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   59,   16,   16, 0x09,
     111,   99,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DataMediaWidget[] = {
    "DataMediaWidget\0\0mediaShown()\0AError\0"
    "mediaError(XmppError)\0AUrl,AData\0"
    "onUrlLoaded(QUrl,QByteArray)\0AUrl,AError\0"
    "onUrlLoadFailed(QUrl,XmppError)\0"
};

const QMetaObject DataMediaWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_DataMediaWidget,
      qt_meta_data_DataMediaWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataMediaWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataMediaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataMediaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataMediaWidget))
        return static_cast<void*>(const_cast< DataMediaWidget*>(this));
    if (!strcmp(_clname, "IDataMediaWidget"))
        return static_cast< IDataMediaWidget*>(const_cast< DataMediaWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataMediaWidget/1.1"))
        return static_cast< IDataMediaWidget*>(const_cast< DataMediaWidget*>(this));
    return QLabel::qt_metacast(_clname);
}

int DataMediaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mediaShown(); break;
        case 1: mediaError((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 2: onUrlLoaded((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: onUrlLoadFailed((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DataMediaWidget::mediaShown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DataMediaWidget::mediaError(const XmppError & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
