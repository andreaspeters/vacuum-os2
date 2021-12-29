/****************************************************************************
** Meta object code from reading C++ file 'xmppstreams.h'
**
** Created: Sat Jan 26 01:48:56 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "xmppstreams.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmppstreams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XmppStreams[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   13,   12,   12, 0x05,
      47,   13,   12,   12, 0x05,
      67,   13,   12,   12, 0x05,
      88,   13,   12,   12, 0x05,
     115,   13,   12,   12, 0x05,
     155,  136,   12,   12, 0x05,
     204,  185,   12,   12, 0x05,
     262,  242,   12,   12, 0x05,
     315,  291,   12,   12, 0x05,
     360,   13,   12,   12, 0x05,
     382,   13,   12,   12, 0x05,
     430,  412,   12,   12, 0x05,
     498,  465,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     560,   12,   12,   12, 0x09,
     577,   12,   12,   12, 0x09,
     600,   12,   12,   12, 0x09,
     624,  617,   12,   12, 0x09,
     656,  649,   12,   12, 0x09,
     697,  689,   12,   12, 0x09,
     733,  721,   12,   12, 0x09,
     773,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_XmppStreams[] = {
    "XmppStreams\0\0AXmppStream\0created(IXmppStream*)\0"
    "added(IXmppStream*)\0opened(IXmppStream*)\0"
    "aboutToClose(IXmppStream*)\0"
    "closed(IXmppStream*)\0AXmppStream,AError\0"
    "error(IXmppStream*,XmppError)\0"
    "AXmppStream,AAfter\0"
    "jidAboutToBeChanged(IXmppStream*,Jid)\0"
    "AXmppStream,ABefore\0jidChanged(IXmppStream*,Jid)\0"
    "AXmppStream,AConnection\0"
    "connectionChanged(IXmppStream*,IConnection*)\0"
    "removed(IXmppStream*)\0"
    "streamDestroyed(IXmppStream*)\0"
    "AOrder,AFeatureNS\0xmppFeatureRegistered(int,QString)\0"
    "AOrder,AFeatureNS,AFeaturePlugin\0"
    "xmppFeaturePluginRegistered(int,QString,IXmppFeaturesPlugin*)\0"
    "onStreamOpened()\0onStreamAboutToClose()\0"
    "onStreamClosed()\0AError\0"
    "onStreamError(XmppError)\0AAfter\0"
    "onStreamJidAboutToBeChanged(Jid)\0"
    "ABefore\0onStreamJidChanged(Jid)\0"
    "AConnection\0onStreamConnectionChanged(IConnection*)\0"
    "onStreamDestroyed()\0"
};

const QMetaObject XmppStreams::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XmppStreams,
      qt_meta_data_XmppStreams, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XmppStreams::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XmppStreams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XmppStreams::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XmppStreams))
        return static_cast<void*>(const_cast< XmppStreams*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< XmppStreams*>(this));
    if (!strcmp(_clname, "IXmppStreams"))
        return static_cast< IXmppStreams*>(const_cast< XmppStreams*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< XmppStreams*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppStreams/1.3"))
        return static_cast< IXmppStreams*>(const_cast< XmppStreams*>(this));
    return QObject::qt_metacast(_clname);
}

int XmppStreams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: created((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 1: added((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 2: opened((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 3: aboutToClose((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 4: closed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 5: error((*reinterpret_cast< IXmppStream*(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 6: jidAboutToBeChanged((*reinterpret_cast< IXmppStream*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 7: jidChanged((*reinterpret_cast< IXmppStream*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 8: connectionChanged((*reinterpret_cast< IXmppStream*(*)>(_a[1])),(*reinterpret_cast< IConnection*(*)>(_a[2]))); break;
        case 9: removed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 10: streamDestroyed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 11: xmppFeatureRegistered((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: xmppFeaturePluginRegistered((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< IXmppFeaturesPlugin*(*)>(_a[3]))); break;
        case 13: onStreamOpened(); break;
        case 14: onStreamAboutToClose(); break;
        case 15: onStreamClosed(); break;
        case 16: onStreamError((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 17: onStreamJidAboutToBeChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 18: onStreamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 19: onStreamConnectionChanged((*reinterpret_cast< IConnection*(*)>(_a[1]))); break;
        case 20: onStreamDestroyed(); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void XmppStreams::created(IXmppStream * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XmppStreams::added(IXmppStream * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XmppStreams::opened(IXmppStream * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void XmppStreams::aboutToClose(IXmppStream * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void XmppStreams::closed(IXmppStream * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void XmppStreams::error(IXmppStream * _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void XmppStreams::jidAboutToBeChanged(IXmppStream * _t1, const Jid & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void XmppStreams::jidChanged(IXmppStream * _t1, const Jid & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void XmppStreams::connectionChanged(IXmppStream * _t1, IConnection * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void XmppStreams::removed(IXmppStream * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void XmppStreams::streamDestroyed(IXmppStream * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void XmppStreams::xmppFeatureRegistered(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void XmppStreams::xmppFeaturePluginRegistered(int _t1, const QString & _t2, IXmppFeaturesPlugin * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
