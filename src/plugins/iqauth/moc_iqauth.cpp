/****************************************************************************
** Meta object code from reading C++ file 'iqauth.h'
**
** Created: Sat Jan 26 01:52:01 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "iqauth.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iqauth.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IqAuth[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,    8,    7,    7, 0x05,
      39,   32,    7,    7, 0x05,
      56,    7,    7,    7, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_IqAuth[] = {
    "IqAuth\0\0ARestart\0finished(bool)\0AError\0"
    "error(XmppError)\0featureDestroyed()\0"
};

const QMetaObject IqAuth::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IqAuth,
      qt_meta_data_IqAuth, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IqAuth::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IqAuth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IqAuth::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IqAuth))
        return static_cast<void*>(const_cast< IqAuth*>(this));
    if (!strcmp(_clname, "IXmppFeature"))
        return static_cast< IXmppFeature*>(const_cast< IqAuth*>(this));
    if (!strcmp(_clname, "IXmppStanzaHadler"))
        return static_cast< IXmppStanzaHadler*>(const_cast< IqAuth*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppFeature/1.1"))
        return static_cast< IXmppFeature*>(const_cast< IqAuth*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppStanzaHadler/1.0"))
        return static_cast< IXmppStanzaHadler*>(const_cast< IqAuth*>(this));
    return QObject::qt_metacast(_clname);
}

int IqAuth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: error((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 2: featureDestroyed(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void IqAuth::finished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IqAuth::error(const XmppError & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IqAuth::featureDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_IqAuthPlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   14,   13,   13, 0x05,
      59,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      91,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_IqAuthPlugin[] = {
    "IqAuthPlugin\0\0AStreamFeature\0"
    "featureCreated(IXmppFeature*)\0"
    "featureDestroyed(IXmppFeature*)\0"
    "onFeatureDestroyed()\0"
};

const QMetaObject IqAuthPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IqAuthPlugin,
      qt_meta_data_IqAuthPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IqAuthPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IqAuthPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IqAuthPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IqAuthPlugin))
        return static_cast<void*>(const_cast< IqAuthPlugin*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< IqAuthPlugin*>(this));
    if (!strcmp(_clname, "IXmppFeaturesPlugin"))
        return static_cast< IXmppFeaturesPlugin*>(const_cast< IqAuthPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< IqAuthPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppFeaturesPlugin/1.0"))
        return static_cast< IXmppFeaturesPlugin*>(const_cast< IqAuthPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int IqAuthPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: featureCreated((*reinterpret_cast< IXmppFeature*(*)>(_a[1]))); break;
        case 1: featureDestroyed((*reinterpret_cast< IXmppFeature*(*)>(_a[1]))); break;
        case 2: onFeatureDestroyed(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void IqAuthPlugin::featureCreated(IXmppFeature * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IqAuthPlugin::featureDestroyed(IXmppFeature * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
