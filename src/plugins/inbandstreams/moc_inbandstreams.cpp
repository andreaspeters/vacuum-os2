/****************************************************************************
** Meta object code from reading C++ file 'inbandstreams.h'
**
** Created: Sat Jan 26 02:23:37 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inbandstreams.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inbandstreams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InBandStreams[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   15,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_InBandStreams[] = {
    "InBandStreams\0\0ASocket\0"
    "socketCreated(IDataStreamSocket*)\0"
};

const QMetaObject InBandStreams::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InBandStreams,
      qt_meta_data_InBandStreams, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InBandStreams::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InBandStreams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InBandStreams::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InBandStreams))
        return static_cast<void*>(const_cast< InBandStreams*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< InBandStreams*>(this));
    if (!strcmp(_clname, "IInBandStreams"))
        return static_cast< IInBandStreams*>(const_cast< InBandStreams*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< InBandStreams*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IInBandStreams/1.0"))
        return static_cast< IInBandStreams*>(const_cast< InBandStreams*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataStreamMethod/1.0"))
        return static_cast< IDataStreamMethod*>(const_cast< InBandStreams*>(this));
    return QObject::qt_metacast(_clname);
}

int InBandStreams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: socketCreated((*reinterpret_cast< IDataStreamSocket*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void InBandStreams::socketCreated(IDataStreamSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
