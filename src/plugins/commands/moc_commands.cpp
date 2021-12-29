/****************************************************************************
** Meta object code from reading C++ file 'commands.h'
**
** Created: Sat Jan 26 02:18:49 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "commands.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commands.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Commands[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   10,    9,    9, 0x05,
      70,   64,    9,    9, 0x05,
     101,   93,    9,    9, 0x05,
     133,   93,    9,    9, 0x05,
     197,  164,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     250,  238,    9,    9, 0x09,
     279,  238,    9,    9, 0x09,
     314,  308,    9,    9, 0x09,
     346,  308,    9,    9, 0x09,
     384,  377,    9,    9, 0x09,
     442,  418,    9,    9, 0x09,
     505,    9,    9,    9, 0x09,
     536,    9,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Commands[] = {
    "Commands\0\0ANode,AServer\0"
    "serverInserted(QString,ICommandServer*)\0"
    "ANode\0serverRemoved(QString)\0AClient\0"
    "clientInserted(ICommandClient*)\0"
    "clientRemoved(ICommandClient*)\0"
    "AstreamJid,AContactJid,ACommands\0"
    "commandsUpdated(Jid,Jid,QList<ICommand>)\0"
    "AXmppStream\0onStreamOpened(IXmppStream*)\0"
    "onStreamClosed(IXmppStream*)\0AInfo\0"
    "onDiscoInfoReceived(IDiscoInfo)\0"
    "onDiscoInfoRemoved(IDiscoInfo)\0AItems\0"
    "onDiscoItemsReceived(IDiscoItems)\0"
    "APresence,AItem,ABefore\0"
    "onPresenceItemReceived(IPresence*,IPresenceItem,IPresenceItem)\0"
    "onExecuteActionTriggered(bool)\0"
    "onRequestActionTriggered(bool)\0"
};

const QMetaObject Commands::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Commands,
      qt_meta_data_Commands, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Commands::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Commands::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Commands::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Commands))
        return static_cast<void*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "ICommands"))
        return static_cast< ICommands*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "IXmppUriHandler"))
        return static_cast< IXmppUriHandler*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "IDiscoHandler"))
        return static_cast< IDiscoHandler*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "IDiscoFeatureHandler"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ICommands/1.2"))
        return static_cast< ICommands*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppUriHandler/1.0"))
        return static_cast< IXmppUriHandler*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDiscoHandler/1.0"))
        return static_cast< IDiscoHandler*>(const_cast< Commands*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDiscoFeatureHandler/1.0"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< Commands*>(this));
    return QObject::qt_metacast(_clname);
}

int Commands::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: serverInserted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< ICommandServer*(*)>(_a[2]))); break;
        case 1: serverRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: clientInserted((*reinterpret_cast< ICommandClient*(*)>(_a[1]))); break;
        case 3: clientRemoved((*reinterpret_cast< ICommandClient*(*)>(_a[1]))); break;
        case 4: commandsUpdated((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< const QList<ICommand>(*)>(_a[3]))); break;
        case 5: onStreamOpened((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 6: onStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 7: onDiscoInfoReceived((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 8: onDiscoInfoRemoved((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 9: onDiscoItemsReceived((*reinterpret_cast< const IDiscoItems(*)>(_a[1]))); break;
        case 10: onPresenceItemReceived((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< const IPresenceItem(*)>(_a[2])),(*reinterpret_cast< const IPresenceItem(*)>(_a[3]))); break;
        case 11: onExecuteActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: onRequestActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Commands::serverInserted(const QString & _t1, ICommandServer * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Commands::serverRemoved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Commands::clientInserted(ICommandClient * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Commands::clientRemoved(ICommandClient * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Commands::commandsUpdated(const Jid & _t1, const Jid & _t2, const QList<ICommand> & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
