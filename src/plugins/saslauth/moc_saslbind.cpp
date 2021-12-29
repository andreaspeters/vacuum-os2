/****************************************************************************
** Meta object code from reading C++ file 'saslbind.h'
**
** Created: Sat Jan 26 01:53:52 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "saslbind.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'saslbind.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SASLBind[] = {

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
      19,   10,    9,    9, 0x05,
      41,   34,    9,    9, 0x05,
      58,    9,    9,    9, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SASLBind[] = {
    "SASLBind\0\0ARestart\0finished(bool)\0"
    "AError\0error(XmppError)\0featureDestroyed()\0"
};

const QMetaObject SASLBind::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SASLBind,
      qt_meta_data_SASLBind, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SASLBind::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SASLBind::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SASLBind::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SASLBind))
        return static_cast<void*>(const_cast< SASLBind*>(this));
    if (!strcmp(_clname, "IXmppFeature"))
        return static_cast< IXmppFeature*>(const_cast< SASLBind*>(this));
    if (!strcmp(_clname, "IXmppStanzaHadler"))
        return static_cast< IXmppStanzaHadler*>(const_cast< SASLBind*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppFeature/1.1"))
        return static_cast< IXmppFeature*>(const_cast< SASLBind*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppStanzaHadler/1.0"))
        return static_cast< IXmppStanzaHadler*>(const_cast< SASLBind*>(this));
    return QObject::qt_metacast(_clname);
}

int SASLBind::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SASLBind::finished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SASLBind::error(const XmppError & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SASLBind::featureDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
