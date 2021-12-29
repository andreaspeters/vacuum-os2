/****************************************************************************
** Meta object code from reading C++ file 'registration.h'
**
** Created: Sat Jan 26 02:18:28 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "registration.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Registration[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   14,   13,   13, 0x05,
      59,   14,   13,   13, 0x05,
     103,   91,   13,   13, 0x05,
     147,  143,   13,   13, 0x05,
     186,  175,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     219,   13,   13,   13, 0x09,
     251,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Registration[] = {
    "Registration\0\0AStreamFeature\0"
    "featureCreated(IXmppFeature*)\0"
    "featureDestroyed(IXmppFeature*)\0"
    "AId,AFields\0registerFields(QString,IRegisterFields)\0"
    "AId\0registerSuccessful(QString)\0"
    "AId,AError\0registerError(QString,XmppError)\0"
    "onRegisterActionTriggered(bool)\0"
    "onXmppFeatureDestroyed()\0"
};

const QMetaObject Registration::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Registration,
      qt_meta_data_Registration, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Registration::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Registration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Registration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Registration))
        return static_cast<void*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "IRegistration"))
        return static_cast< IRegistration*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "IXmppUriHandler"))
        return static_cast< IXmppUriHandler*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "IDiscoFeatureHandler"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "IXmppFeaturesPlugin"))
        return static_cast< IXmppFeaturesPlugin*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "IDataLocalizer"))
        return static_cast< IDataLocalizer*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRegistration/1.1"))
        return static_cast< IRegistration*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppUriHandler/1.0"))
        return static_cast< IXmppUriHandler*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDiscoFeatureHandler/1.0"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppFeaturesPlugin/1.0"))
        return static_cast< IXmppFeaturesPlugin*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< Registration*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataLocalizer/1.0"))
        return static_cast< IDataLocalizer*>(const_cast< Registration*>(this));
    return QObject::qt_metacast(_clname);
}

int Registration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: featureCreated((*reinterpret_cast< IXmppFeature*(*)>(_a[1]))); break;
        case 1: featureDestroyed((*reinterpret_cast< IXmppFeature*(*)>(_a[1]))); break;
        case 2: registerFields((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IRegisterFields(*)>(_a[2]))); break;
        case 3: registerSuccessful((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: registerError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 5: onRegisterActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: onXmppFeatureDestroyed(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Registration::featureCreated(IXmppFeature * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Registration::featureDestroyed(IXmppFeature * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Registration::registerFields(const QString & _t1, const IRegisterFields & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Registration::registerSuccessful(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Registration::registerError(const QString & _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
