/****************************************************************************
** Meta object code from reading C++ file 'datastreamsmanager.h'
**
** Created: Sat Jan 26 02:22:39 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "datastreamsmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datastreamsmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataStreamsManger[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   19,   18,   18, 0x05,
      62,   19,   18,   18, 0x05,
     105,   96,   18,   18, 0x05,
     142,   96,   18,   18, 0x05,
     195,  178,   18,   18, 0x05,
     245,  234,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     287,  275,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DataStreamsManger[] = {
    "DataStreamsManger\0\0AMethod\0"
    "methodInserted(IDataStreamMethod*)\0"
    "methodRemoved(IDataStreamMethod*)\0"
    "AProfile\0profileInserted(IDataStreamProfile*)\0"
    "profileRemoved(IDataStreamProfile*)\0"
    "AProfileId,AName\0"
    "settingsProfileInserted(QUuid,QString)\0"
    "AProfileId\0settingsProfileRemoved(QUuid)\0"
    "AXmppStream\0onXmppStreamClosed(IXmppStream*)\0"
};

const QMetaObject DataStreamsManger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataStreamsManger,
      qt_meta_data_DataStreamsManger, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataStreamsManger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataStreamsManger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataStreamsManger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataStreamsManger))
        return static_cast<void*>(const_cast< DataStreamsManger*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< DataStreamsManger*>(this));
    if (!strcmp(_clname, "IDataStreamsManager"))
        return static_cast< IDataStreamsManager*>(const_cast< DataStreamsManger*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< DataStreamsManger*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< DataStreamsManger*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< DataStreamsManger*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< DataStreamsManger*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataStreamsManager/1.1"))
        return static_cast< IDataStreamsManager*>(const_cast< DataStreamsManger*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< DataStreamsManger*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< DataStreamsManger*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< DataStreamsManger*>(this));
    return QObject::qt_metacast(_clname);
}

int DataStreamsManger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: methodInserted((*reinterpret_cast< IDataStreamMethod*(*)>(_a[1]))); break;
        case 1: methodRemoved((*reinterpret_cast< IDataStreamMethod*(*)>(_a[1]))); break;
        case 2: profileInserted((*reinterpret_cast< IDataStreamProfile*(*)>(_a[1]))); break;
        case 3: profileRemoved((*reinterpret_cast< IDataStreamProfile*(*)>(_a[1]))); break;
        case 4: settingsProfileInserted((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: settingsProfileRemoved((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 6: onXmppStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DataStreamsManger::methodInserted(IDataStreamMethod * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataStreamsManger::methodRemoved(IDataStreamMethod * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataStreamsManger::profileInserted(IDataStreamProfile * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataStreamsManger::profileRemoved(IDataStreamProfile * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DataStreamsManger::settingsProfileInserted(const QUuid & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DataStreamsManger::settingsProfileRemoved(const QUuid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
