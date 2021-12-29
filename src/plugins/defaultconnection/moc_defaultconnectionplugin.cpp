/****************************************************************************
** Meta object code from reading C++ file 'defaultconnectionplugin.h'
**
** Created: Sat Jan 26 02:14:00 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "defaultconnectionplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'defaultconnectionplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DefaultConnectionPlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   25,   24,   24, 0x05,
      69,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     103,   24,   24,   24, 0x09,
     140,  132,   24,   24, 0x09,
     187,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DefaultConnectionPlugin[] = {
    "DefaultConnectionPlugin\0\0AConnection\0"
    "connectionCreated(IConnection*)\0"
    "connectionDestroyed(IConnection*)\0"
    "onConnectionAboutToConnect()\0AErrors\0"
    "onConnectionSSLErrorsOccured(QList<QSslError>)\0"
    "onConnectionDestroyed()\0"
};

const QMetaObject DefaultConnectionPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DefaultConnectionPlugin,
      qt_meta_data_DefaultConnectionPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DefaultConnectionPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DefaultConnectionPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DefaultConnectionPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DefaultConnectionPlugin))
        return static_cast<void*>(const_cast< DefaultConnectionPlugin*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< DefaultConnectionPlugin*>(this));
    if (!strcmp(_clname, "IConnectionPlugin"))
        return static_cast< IConnectionPlugin*>(const_cast< DefaultConnectionPlugin*>(this));
    if (!strcmp(_clname, "IDefaultConnectionPlugin"))
        return static_cast< IDefaultConnectionPlugin*>(const_cast< DefaultConnectionPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< DefaultConnectionPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IConnectionPlugin/1.0"))
        return static_cast< IConnectionPlugin*>(const_cast< DefaultConnectionPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDefaultConnectionPlugin/1.0"))
        return static_cast< IDefaultConnectionPlugin*>(const_cast< DefaultConnectionPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int DefaultConnectionPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: connectionCreated((*reinterpret_cast< IConnection*(*)>(_a[1]))); break;
        case 1: connectionDestroyed((*reinterpret_cast< IConnection*(*)>(_a[1]))); break;
        case 2: onConnectionAboutToConnect(); break;
        case 3: onConnectionSSLErrorsOccured((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 4: onConnectionDestroyed(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DefaultConnectionPlugin::connectionCreated(IConnection * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DefaultConnectionPlugin::connectionDestroyed(IConnection * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
