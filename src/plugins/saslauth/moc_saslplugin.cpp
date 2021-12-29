/****************************************************************************
** Meta object code from reading C++ file 'saslplugin.h'
**
** Created: Sat Jan 26 01:53:55 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "saslplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'saslplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SASLPlugin[] = {

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
      21,   12,   11,   11, 0x05,
      51,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   83,   11,   11, 0x09,
     129,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SASLPlugin[] = {
    "SASLPlugin\0\0AFeature\0featureCreated(IXmppFeature*)\0"
    "featureDestroyed(IXmppFeature*)\0"
    "AXmppStream\0onXmppStreamCreated(IXmppStream*)\0"
    "onFeatureDestroyed()\0"
};

const QMetaObject SASLPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SASLPlugin,
      qt_meta_data_SASLPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SASLPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SASLPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SASLPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SASLPlugin))
        return static_cast<void*>(const_cast< SASLPlugin*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< SASLPlugin*>(this));
    if (!strcmp(_clname, "IXmppFeaturesPlugin"))
        return static_cast< IXmppFeaturesPlugin*>(const_cast< SASLPlugin*>(this));
    if (!strcmp(_clname, "IXmppStanzaHadler"))
        return static_cast< IXmppStanzaHadler*>(const_cast< SASLPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< SASLPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppFeaturesPlugin/1.0"))
        return static_cast< IXmppFeaturesPlugin*>(const_cast< SASLPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppStanzaHadler/1.0"))
        return static_cast< IXmppStanzaHadler*>(const_cast< SASLPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int SASLPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: featureCreated((*reinterpret_cast< IXmppFeature*(*)>(_a[1]))); break;
        case 1: featureDestroyed((*reinterpret_cast< IXmppFeature*(*)>(_a[1]))); break;
        case 2: onXmppStreamCreated((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 3: onFeatureDestroyed(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SASLPlugin::featureCreated(IXmppFeature * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SASLPlugin::featureDestroyed(IXmppFeature * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
