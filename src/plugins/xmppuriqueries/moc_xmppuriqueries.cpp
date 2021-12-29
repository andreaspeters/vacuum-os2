/****************************************************************************
** Meta object code from reading C++ file 'xmppuriqueries.h'
**
** Created: Sat Jan 26 02:24:20 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "xmppuriqueries.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmppuriqueries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XmppUriQueries[] = {

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
      32,   16,   15,   15, 0x05,
      73,   16,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_XmppUriQueries[] = {
    "XmppUriQueries\0\0AHandler,AOrder\0"
    "uriHandlerInserted(IXmppUriHandler*,int)\0"
    "uriHandlerRemoved(IXmppUriHandler*,int)\0"
};

const QMetaObject XmppUriQueries::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XmppUriQueries,
      qt_meta_data_XmppUriQueries, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XmppUriQueries::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XmppUriQueries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XmppUriQueries::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XmppUriQueries))
        return static_cast<void*>(const_cast< XmppUriQueries*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< XmppUriQueries*>(this));
    if (!strcmp(_clname, "IXmppUriQueries"))
        return static_cast< IXmppUriQueries*>(const_cast< XmppUriQueries*>(this));
    if (!strcmp(_clname, "IViewUrlHandler"))
        return static_cast< IViewUrlHandler*>(const_cast< XmppUriQueries*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< XmppUriQueries*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppUriQueries/1.0"))
        return static_cast< IXmppUriQueries*>(const_cast< XmppUriQueries*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IViewUrlHandler/1.0"))
        return static_cast< IViewUrlHandler*>(const_cast< XmppUriQueries*>(this));
    return QObject::qt_metacast(_clname);
}

int XmppUriQueries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: uriHandlerInserted((*reinterpret_cast< IXmppUriHandler*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: uriHandlerRemoved((*reinterpret_cast< IXmppUriHandler*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void XmppUriQueries::uriHandlerInserted(IXmppUriHandler * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XmppUriQueries::uriHandlerRemoved(IXmppUriHandler * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
