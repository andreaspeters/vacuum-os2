/****************************************************************************
** Meta object code from reading C++ file 'servermessagearchive.h'
**
** Created: Sat Jan 26 02:25:45 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "servermessagearchive.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'servermessagearchive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ServerMessageArchive[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   22,   21,   21, 0x05,
      69,   58,   21,   21, 0x05,
     114,  102,   21,   21, 0x05,
     167,  154,   21,   21, 0x05,
     228,  212,   21,   21, 0x05,
     286,  273,   21,   21, 0x05,
     342,  330,   21,   21, 0x05,
     414,  393,   21,   21, 0x05,
     507,  483,   21,   21, 0x05,
     596,  576,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     671,   22,   21,   21, 0x09,
     697,   22,   21,   21, 0x09,
     723,   58,   21,   21, 0x09,
     764,  393,   21,   21, 0x09,
     835,  483,   21,   21, 0x09,
     906,  576,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ServerMessageArchive[] = {
    "ServerMessageArchive\0\0AStreamJid\0"
    "capabilitiesChanged(Jid)\0AId,AError\0"
    "requestFailed(QString,XmppError)\0"
    "AId,AHeader\0collectionSaved(QString,IArchiveHeader)\0"
    "AId,AHeaders\0headersLoaded(QString,QList<IArchiveHeader>)\0"
    "AId,ACollection\0"
    "collectionLoaded(QString,IArchiveCollection)\0"
    "AId,ARequest\0collectionsRemoved(QString,IArchiveRequest)\0"
    "AId,AModifs\0"
    "modificationsLoaded(QString,IArchiveModifications)\0"
    "AId,AHeaders,AResult\0"
    "serverHeadersLoaded(QString,QList<IArchiveHeader>,IArchiveResultSet)\0"
    "AId,ACollection,AResult\0"
    "serverCollectionLoaded(QString,IArchiveCollection,IArchiveResultSet)\0"
    "AId,AModifs,AResult\0"
    "serverModificationsLoaded(QString,IArchiveModifications,IArchiveResult"
    "Set)\0"
    "onArchivePrefsOpened(Jid)\0"
    "onArchivePrefsClosed(Jid)\0"
    "onServerRequestFailed(QString,XmppError)\0"
    "onServerHeadersLoaded(QString,QList<IArchiveHeader>,IArchiveResultSet)\0"
    "onServerCollectionLoaded(QString,IArchiveCollection,IArchiveResultSet)\0"
    "onServerModificationsLoaded(QString,IArchiveModifications,IArchiveResu"
    "ltSet)\0"
};

const QMetaObject ServerMessageArchive::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ServerMessageArchive,
      qt_meta_data_ServerMessageArchive, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ServerMessageArchive::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ServerMessageArchive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ServerMessageArchive::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ServerMessageArchive))
        return static_cast<void*>(const_cast< ServerMessageArchive*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< ServerMessageArchive*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< ServerMessageArchive*>(this));
    if (!strcmp(_clname, "IServerMesssageArchive"))
        return static_cast< IServerMesssageArchive*>(const_cast< ServerMessageArchive*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< ServerMessageArchive*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< ServerMessageArchive*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IArchiveEngine/1.1"))
        return static_cast< IArchiveEngine*>(const_cast< ServerMessageArchive*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IServerMesssageArchive/1.1"))
        return static_cast< IServerMesssageArchive*>(const_cast< ServerMessageArchive*>(this));
    return QObject::qt_metacast(_clname);
}

int ServerMessageArchive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: capabilitiesChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 1: requestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 2: collectionSaved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveHeader(*)>(_a[2]))); break;
        case 3: headersLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<IArchiveHeader>(*)>(_a[2]))); break;
        case 4: collectionLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveCollection(*)>(_a[2]))); break;
        case 5: collectionsRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveRequest(*)>(_a[2]))); break;
        case 6: modificationsLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveModifications(*)>(_a[2]))); break;
        case 7: serverHeadersLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<IArchiveHeader>(*)>(_a[2])),(*reinterpret_cast< const IArchiveResultSet(*)>(_a[3]))); break;
        case 8: serverCollectionLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveCollection(*)>(_a[2])),(*reinterpret_cast< const IArchiveResultSet(*)>(_a[3]))); break;
        case 9: serverModificationsLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveModifications(*)>(_a[2])),(*reinterpret_cast< const IArchiveResultSet(*)>(_a[3]))); break;
        case 10: onArchivePrefsOpened((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 11: onArchivePrefsClosed((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 12: onServerRequestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 13: onServerHeadersLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<IArchiveHeader>(*)>(_a[2])),(*reinterpret_cast< const IArchiveResultSet(*)>(_a[3]))); break;
        case 14: onServerCollectionLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveCollection(*)>(_a[2])),(*reinterpret_cast< const IArchiveResultSet(*)>(_a[3]))); break;
        case 15: onServerModificationsLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveModifications(*)>(_a[2])),(*reinterpret_cast< const IArchiveResultSet(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void ServerMessageArchive::capabilitiesChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ServerMessageArchive::requestFailed(const QString & _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ServerMessageArchive::collectionSaved(const QString & _t1, const IArchiveHeader & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ServerMessageArchive::headersLoaded(const QString & _t1, const QList<IArchiveHeader> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ServerMessageArchive::collectionLoaded(const QString & _t1, const IArchiveCollection & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ServerMessageArchive::collectionsRemoved(const QString & _t1, const IArchiveRequest & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ServerMessageArchive::modificationsLoaded(const QString & _t1, const IArchiveModifications & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ServerMessageArchive::serverHeadersLoaded(const QString & _t1, const QList<IArchiveHeader> & _t2, const IArchiveResultSet & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ServerMessageArchive::serverCollectionLoaded(const QString & _t1, const IArchiveCollection & _t2, const IArchiveResultSet & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ServerMessageArchive::serverModificationsLoaded(const QString & _t1, const IArchiveModifications & _t2, const IArchiveResultSet & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
