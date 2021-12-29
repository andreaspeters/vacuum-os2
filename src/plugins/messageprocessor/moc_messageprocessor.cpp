/****************************************************************************
** Meta object code from reading C++ file 'messageprocessor.h'
**
** Created: Sat Jan 26 02:06:40 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "messageprocessor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messageprocessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessageProcessor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   18,   17,   17, 0x05,
      48,   18,   17,   17, 0x05,
      84,   73,   17,   17, 0x05,
     122,  111,   17,   17, 0x05,
     164,  148,   17,   17, 0x05,
     209,  148,   17,   17, 0x05,
     268,  253,   17,   17, 0x05,
     311,  253,   17,   17, 0x05,
     368,  353,   17,   17, 0x05,
     411,  353,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     465,  453,   17,   17, 0x09,
     494,  453,   17,   17, 0x09,
     523,  453,   17,   17, 0x09,
     563,  553,   17,   17, 0x09,
     592,  553,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MessageProcessor[] = {
    "MessageProcessor\0\0AMessage\0"
    "messageSent(Message)\0messageReceived(Message)\0"
    "AMessageId\0messageNotifyInserted(int)\0"
    "AMessageid\0messageNotifyRemoved(int)\0"
    "AOrder,AHandler\0"
    "messageHandlerInserted(int,IMessageHandler*)\0"
    "messageHandlerRemoved(int,IMessageHandler*)\0"
    "AOrder,AWriter\0"
    "messageWriterInserted(int,IMessageWriter*)\0"
    "messageWriterRemoved(int,IMessageWriter*)\0"
    "AOrder,AEditor\0"
    "messageEditorInserted(int,IMessageEditor*)\0"
    "messageEditorRemoved(int,IMessageEditor*)\0"
    "AXmppStream\0onStreamOpened(IXmppStream*)\0"
    "onStreamClosed(IXmppStream*)\0"
    "onStreamRemoved(IXmppStream*)\0ANotifyId\0"
    "onNotificationActivated(int)\0"
    "onNotificationRemoved(int)\0"
};

const QMetaObject MessageProcessor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MessageProcessor,
      qt_meta_data_MessageProcessor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageProcessor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageProcessor))
        return static_cast<void*>(const_cast< MessageProcessor*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< MessageProcessor*>(this));
    if (!strcmp(_clname, "IMessageProcessor"))
        return static_cast< IMessageProcessor*>(const_cast< MessageProcessor*>(this));
    if (!strcmp(_clname, "IMessageWriter"))
        return static_cast< IMessageWriter*>(const_cast< MessageProcessor*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< MessageProcessor*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< MessageProcessor*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageProcessor/1.2"))
        return static_cast< IMessageProcessor*>(const_cast< MessageProcessor*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageWriter/1.1"))
        return static_cast< IMessageWriter*>(const_cast< MessageProcessor*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< MessageProcessor*>(this));
    return QObject::qt_metacast(_clname);
}

int MessageProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: messageSent((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        case 1: messageReceived((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        case 2: messageNotifyInserted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: messageNotifyRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: messageHandlerInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IMessageHandler*(*)>(_a[2]))); break;
        case 5: messageHandlerRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IMessageHandler*(*)>(_a[2]))); break;
        case 6: messageWriterInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IMessageWriter*(*)>(_a[2]))); break;
        case 7: messageWriterRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IMessageWriter*(*)>(_a[2]))); break;
        case 8: messageEditorInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IMessageEditor*(*)>(_a[2]))); break;
        case 9: messageEditorRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IMessageEditor*(*)>(_a[2]))); break;
        case 10: onStreamOpened((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 11: onStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 12: onStreamRemoved((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 13: onNotificationActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: onNotificationRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MessageProcessor::messageSent(const Message & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MessageProcessor::messageReceived(const Message & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MessageProcessor::messageNotifyInserted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MessageProcessor::messageNotifyRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MessageProcessor::messageHandlerInserted(int _t1, IMessageHandler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MessageProcessor::messageHandlerRemoved(int _t1, IMessageHandler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MessageProcessor::messageWriterInserted(int _t1, IMessageWriter * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MessageProcessor::messageWriterRemoved(int _t1, IMessageWriter * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MessageProcessor::messageEditorInserted(int _t1, IMessageEditor * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MessageProcessor::messageEditorRemoved(int _t1, IMessageEditor * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
