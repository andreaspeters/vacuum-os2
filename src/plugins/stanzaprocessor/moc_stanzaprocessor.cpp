/****************************************************************************
** Meta object code from reading C++ file 'stanzaprocessor.h'
**
** Created: Sat Jan 26 01:57:57 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stanzaprocessor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stanzaprocessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StanzaProcessor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   17,   16,   16, 0x05,
      59,   17,   16,   16, 0x05,
     104,   86,   16,   16, 0x05,
     144,   86,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     195,  183,   16,   16, 0x09,
     245,  225,   16,   16, 0x09,
     282,  183,   16,   16, 0x09,
     311,  183,   16,   16, 0x09,
     343,   16,   16,   16, 0x09,
     375,  368,   16,   16, 0x09,
     424,  415,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_StanzaProcessor[] = {
    "StanzaProcessor\0\0AStreamJid,AStanza\0"
    "stanzaSent(Jid,Stanza)\0"
    "stanzaReceived(Jid,Stanza)\0AHandleId,AHandle\0"
    "stanzaHandleInserted(int,IStanzaHandle)\0"
    "stanzaHandleRemoved(int,IStanzaHandle)\0"
    "AXmppStream\0onStreamCreated(IXmppStream*)\0"
    "AXmppStream,ABefore\0"
    "onStreamJidChanged(IXmppStream*,Jid)\0"
    "onStreamClosed(IXmppStream*)\0"
    "onStreamDestroyed(IXmppStream*)\0"
    "onStanzaRequestTimeout()\0AOwner\0"
    "onStanzaRequestOwnerDestroyed(QObject*)\0"
    "AHandler\0onStanzaHandlerDestroyed(QObject*)\0"
};

const QMetaObject StanzaProcessor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StanzaProcessor,
      qt_meta_data_StanzaProcessor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StanzaProcessor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StanzaProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StanzaProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StanzaProcessor))
        return static_cast<void*>(const_cast< StanzaProcessor*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< StanzaProcessor*>(this));
    if (!strcmp(_clname, "IStanzaProcessor"))
        return static_cast< IStanzaProcessor*>(const_cast< StanzaProcessor*>(this));
    if (!strcmp(_clname, "IXmppStanzaHadler"))
        return static_cast< IXmppStanzaHadler*>(const_cast< StanzaProcessor*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< StanzaProcessor*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaProcessor/1.1"))
        return static_cast< IStanzaProcessor*>(const_cast< StanzaProcessor*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppStanzaHadler/1.0"))
        return static_cast< IXmppStanzaHadler*>(const_cast< StanzaProcessor*>(this));
    return QObject::qt_metacast(_clname);
}

int StanzaProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stanzaSent((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Stanza(*)>(_a[2]))); break;
        case 1: stanzaReceived((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Stanza(*)>(_a[2]))); break;
        case 2: stanzaHandleInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const IStanzaHandle(*)>(_a[2]))); break;
        case 3: stanzaHandleRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const IStanzaHandle(*)>(_a[2]))); break;
        case 4: onStreamCreated((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 5: onStreamJidChanged((*reinterpret_cast< IXmppStream*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 6: onStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 7: onStreamDestroyed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 8: onStanzaRequestTimeout(); break;
        case 9: onStanzaRequestOwnerDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 10: onStanzaHandlerDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void StanzaProcessor::stanzaSent(const Jid & _t1, const Stanza & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StanzaProcessor::stanzaReceived(const Jid & _t1, const Stanza & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StanzaProcessor::stanzaHandleInserted(int _t1, const IStanzaHandle & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StanzaProcessor::stanzaHandleRemoved(int _t1, const IStanzaHandle & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
