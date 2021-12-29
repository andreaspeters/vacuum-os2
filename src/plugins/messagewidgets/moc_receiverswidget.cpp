/****************************************************************************
** Meta object code from reading C++ file 'receiverswidget.h'
**
** Created: Sat Jan 26 02:07:32 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "receiverswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receiverswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ReceiversWidget[] = {

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
      25,   17,   16,   16, 0x05,
      57,   47,   16,   16, 0x05,
      76,   47,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     111,   97,   16,   16, 0x09,
     156,   16,   16,   16, 0x09,
     177,   16,   16,   16, 0x09,
     204,   16,   16,   16, 0x09,
     226,   16,   16,   16, 0x09,
     241,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ReceiversWidget[] = {
    "ReceiversWidget\0\0ABefore\0streamJidChanged(Jid)\0"
    "AReceiver\0receiverAdded(Jid)\0"
    "receiverRemoved(Jid)\0AItem,AColumn\0"
    "onReceiversItemChanged(QTreeWidgetItem*,int)\0"
    "onSelectAllClicked()\0onSelectAllOnlineClicked()\0"
    "onSelectNoneClicked()\0onAddClicked()\0"
    "onUpdateClicked()\0"
};

const QMetaObject ReceiversWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ReceiversWidget,
      qt_meta_data_ReceiversWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ReceiversWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ReceiversWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ReceiversWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiversWidget))
        return static_cast<void*>(const_cast< ReceiversWidget*>(this));
    if (!strcmp(_clname, "IReceiversWidget"))
        return static_cast< IReceiversWidget*>(const_cast< ReceiversWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IReceiversWidget/1.0"))
        return static_cast< IReceiversWidget*>(const_cast< ReceiversWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ReceiversWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: streamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 1: receiverAdded((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 2: receiverRemoved((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 3: onReceiversItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: onSelectAllClicked(); break;
        case 5: onSelectAllOnlineClicked(); break;
        case 6: onSelectNoneClicked(); break;
        case 7: onAddClicked(); break;
        case 8: onUpdateClicked(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ReceiversWidget::streamJidChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReceiversWidget::receiverAdded(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ReceiversWidget::receiverRemoved(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
