/****************************************************************************
** Meta object code from reading C++ file 'registerstream.h'
**
** Created: Sat Jan 26 02:18:34 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "registerstream.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registerstream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RegisterStream[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   16,   15,   15, 0x05,
      47,   40,   15,   15, 0x05,
      64,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   15,   15,   15, 0x09,
     104,   15,   15,   15, 0x09,
     131,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RegisterStream[] = {
    "RegisterStream\0\0ARestart\0finished(bool)\0"
    "AError\0error(XmppError)\0featureDestroyed()\0"
    "onXmppStreamClosed()\0onRegisterDialogAccepred()\0"
    "onRegisterDialogRejected()\0"
};

const QMetaObject RegisterStream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RegisterStream,
      qt_meta_data_RegisterStream, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RegisterStream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RegisterStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RegisterStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RegisterStream))
        return static_cast<void*>(const_cast< RegisterStream*>(this));
    if (!strcmp(_clname, "IXmppFeature"))
        return static_cast< IXmppFeature*>(const_cast< RegisterStream*>(this));
    if (!strcmp(_clname, "IXmppStanzaHadler"))
        return static_cast< IXmppStanzaHadler*>(const_cast< RegisterStream*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppFeature/1.1"))
        return static_cast< IXmppFeature*>(const_cast< RegisterStream*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppStanzaHadler/1.0"))
        return static_cast< IXmppStanzaHadler*>(const_cast< RegisterStream*>(this));
    return QObject::qt_metacast(_clname);
}

int RegisterStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: error((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 2: featureDestroyed(); break;
        case 3: onXmppStreamClosed(); break;
        case 4: onRegisterDialogAccepred(); break;
        case 5: onRegisterDialogRejected(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RegisterStream::finished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RegisterStream::error(const XmppError & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RegisterStream::featureDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
