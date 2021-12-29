/****************************************************************************
** Meta object code from reading C++ file 'discoitemsmodel.h'
**
** Created: Sat Jan 26 02:17:43 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "discoitemsmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'discoitemsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DiscoItemsModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   17,   16,   16, 0x09,
      72,   60,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DiscoItemsModel[] = {
    "DiscoItemsModel\0\0ADiscoInfo\0"
    "onDiscoInfoReceived(IDiscoInfo)\0"
    "ADiscoItems\0onDiscoItemsReceived(IDiscoItems)\0"
};

const QMetaObject DiscoItemsModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_DiscoItemsModel,
      qt_meta_data_DiscoItemsModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiscoItemsModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiscoItemsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiscoItemsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiscoItemsModel))
        return static_cast<void*>(const_cast< DiscoItemsModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int DiscoItemsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onDiscoInfoReceived((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 1: onDiscoItemsReceived((*reinterpret_cast< const IDiscoItems(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
