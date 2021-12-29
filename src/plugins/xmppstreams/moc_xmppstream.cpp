/****************************************************************************
** Meta object code from reading C++ file 'xmppstream.h'
**
** Created: Sat Jan 26 01:48:59 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "xmppstream.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmppstream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XmppStream[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      21,   11,   11,   11, 0x05,
      36,   11,   11,   11, 0x05,
      52,   45,   11,   11, 0x05,
      76,   69,   11,   11, 0x05,
     109,  101,   11,   11, 0x05,
     137,  125,   11,   11, 0x05,
     185,  169,   11,   11, 0x05,
     228,  169,   11,   11, 0x05,
     270,  169,   11,   11, 0x05,
     316,  169,   11,   11, 0x05,
     361,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     379,   11,   11,   11, 0x09,
     410,  403,   11,   11, 0x09,
     440,   45,   11,   11, 0x09,
     469,   11,   11,   11, 0x09,
     502,  496,   11,   11, 0x09,
     530,  496,   11,   11, 0x09,
     559,   45,   11,   11, 0x09,
     584,   11,   11,   11, 0x09,
     610,  601,   11,   11, 0x09,
     634,   45,   11,   11, 0x09,
     660,   11,   11,   11, 0x09,
     681,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_XmppStream[] = {
    "XmppStream\0\0opened()\0aboutToClose()\0"
    "closed()\0AError\0error(XmppError)\0"
    "AAfter\0jidAboutToBeChanged(Jid)\0ABefore\0"
    "jidChanged(Jid)\0AConnection\0"
    "connectionChanged(IConnection*)\0"
    "AOrder,AHandler\0"
    "dataHandlerInserted(int,IXmppDataHandler*)\0"
    "dataHandlerRemoved(int,IXmppDataHandler*)\0"
    "stanzaHandlerInserted(int,IXmppStanzaHadler*)\0"
    "stanzaHandlerRemoved(int,IXmppStanzaHadler*)\0"
    "streamDestroyed()\0onConnectionConnected()\0"
    "ABytes\0onConnectionReadyRead(qint64)\0"
    "onConnectionError(XmppError)\0"
    "onConnectionDisconnected()\0AElem\0"
    "onParserOpened(QDomElement)\0"
    "onParserElement(QDomElement)\0"
    "onParserError(XmppError)\0onParserClosed()\0"
    "ARestart\0onFeatureFinished(bool)\0"
    "onFeatureError(XmppError)\0"
    "onFeatureDestroyed()\0onKeepAliveTimeout()\0"
};

const QMetaObject XmppStream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XmppStream,
      qt_meta_data_XmppStream, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XmppStream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XmppStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XmppStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XmppStream))
        return static_cast<void*>(const_cast< XmppStream*>(this));
    if (!strcmp(_clname, "IXmppStream"))
        return static_cast< IXmppStream*>(const_cast< XmppStream*>(this));
    if (!strcmp(_clname, "IXmppStanzaHadler"))
        return static_cast< IXmppStanzaHadler*>(const_cast< XmppStream*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppStream/1.3"))
        return static_cast< IXmppStream*>(const_cast< XmppStream*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppStanzaHadler/1.0"))
        return static_cast< IXmppStanzaHadler*>(const_cast< XmppStream*>(this));
    return QObject::qt_metacast(_clname);
}

int XmppStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: opened(); break;
        case 1: aboutToClose(); break;
        case 2: closed(); break;
        case 3: error((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 4: jidAboutToBeChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 5: jidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 6: connectionChanged((*reinterpret_cast< IConnection*(*)>(_a[1]))); break;
        case 7: dataHandlerInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IXmppDataHandler*(*)>(_a[2]))); break;
        case 8: dataHandlerRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IXmppDataHandler*(*)>(_a[2]))); break;
        case 9: stanzaHandlerInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IXmppStanzaHadler*(*)>(_a[2]))); break;
        case 10: stanzaHandlerRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IXmppStanzaHadler*(*)>(_a[2]))); break;
        case 11: streamDestroyed(); break;
        case 12: onConnectionConnected(); break;
        case 13: onConnectionReadyRead((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 14: onConnectionError((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 15: onConnectionDisconnected(); break;
        case 16: onParserOpened((*reinterpret_cast< QDomElement(*)>(_a[1]))); break;
        case 17: onParserElement((*reinterpret_cast< QDomElement(*)>(_a[1]))); break;
        case 18: onParserError((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 19: onParserClosed(); break;
        case 20: onFeatureFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: onFeatureError((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 22: onFeatureDestroyed(); break;
        case 23: onKeepAliveTimeout(); break;
        default: ;
        }
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void XmppStream::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void XmppStream::aboutToClose()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void XmppStream::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void XmppStream::error(const XmppError & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void XmppStream::jidAboutToBeChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void XmppStream::jidChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void XmppStream::connectionChanged(IConnection * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void XmppStream::dataHandlerInserted(int _t1, IXmppDataHandler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void XmppStream::dataHandlerRemoved(int _t1, IXmppDataHandler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void XmppStream::stanzaHandlerInserted(int _t1, IXmppStanzaHadler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void XmppStream::stanzaHandlerRemoved(int _t1, IXmppStanzaHadler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void XmppStream::streamDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}
QT_END_MOC_NAMESPACE
