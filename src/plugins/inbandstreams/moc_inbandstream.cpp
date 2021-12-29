/****************************************************************************
** Meta object code from reading C++ file 'inbandstream.h'
**
** Created: Sat Jan 26 02:23:35 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inbandstream.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inbandstream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InBandStream[] = {

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
      21,   14,   13,   13, 0x05,
      39,   13,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_InBandStream[] = {
    "InBandStream\0\0AState\0stateChanged(int)\0"
    "propertiesChanged()\0"
};

const QMetaObject InBandStream::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_InBandStream,
      qt_meta_data_InBandStream, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InBandStream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InBandStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InBandStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InBandStream))
        return static_cast<void*>(const_cast< InBandStream*>(this));
    if (!strcmp(_clname, "IInBandStream"))
        return static_cast< IInBandStream*>(const_cast< InBandStream*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< InBandStream*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< InBandStream*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IInBandStream/1.0"))
        return static_cast< IInBandStream*>(const_cast< InBandStream*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataStreamSocket/1.1"))
        return static_cast< IDataStreamSocket*>(const_cast< InBandStream*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< InBandStream*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< InBandStream*>(this));
    return QIODevice::qt_metacast(_clname);
}

int InBandStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: propertiesChanged(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void InBandStream::stateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InBandStream::propertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
