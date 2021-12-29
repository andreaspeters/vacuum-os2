/****************************************************************************
** Meta object code from reading C++ file 'messagearchiver.h'
**
** Created: Sat Jan 26 02:20:17 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "messagearchiver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagearchiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessageArchiver[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   17,   16,   16, 0x05,
      58,   47,   16,   16, 0x05,
     102,   91,   16,   16, 0x05,
     126,   91,   16,   16, 0x05,
     151,   91,   16,   16, 0x05,
     185,  175,   16,   16, 0x05,
     245,  232,   16,   16, 0x05,
     306,  290,   16,   16, 0x05,
     364,  351,   16,   16, 0x05,
     408,   91,   16,   16, 0x05,
     446,  438,   16,   16, 0x05,
     500,  487,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     539,   91,   16,   16, 0x09,
     572,   47,   16,   16, 0x09,
     613,  351,   16,   16, 0x09,
     665,  232,   16,   16, 0x09,
     718,  290,   16,   16, 0x09,
     771,   47,   16,   16, 0x09,
     810,  232,   16,   16, 0x09,
     861,  290,   16,   16, 0x09,
     924,  912,   16,   16, 0x09,
     953,  912,   16,   16, 0x09,
    1006,  982,   16,   16, 0x09,
    1087, 1056,   16,   16, 0x09,
    1141, 1129,   16,   16, 0x09,
    1199, 1179,   16,   16, 0x09,
    1279, 1255,   16,   16, 0x09,
    1360, 1340,   16,   16, 0x09,
    1424,   16,   16,   16, 0x09,
    1453,   16,   16,   16, 0x09,
    1486,   16,   16,   16, 0x09,
    1518,   16,   16,   16, 0x09,
    1552,   16,   16,   16, 0x09,
    1593,   16,   16,   16, 0x09,
    1640, 1634,   16,   16, 0x09,
    1681, 1672,   16,   16, 0x09,
    1722, 1672,   16,   16, 0x09,
    1772, 1764,   16,   16, 0x09,
    1818, 1812,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MessageArchiver[] = {
    "MessageArchiver\0\0AId\0requestCompleted(QString)\0"
    "AId,AError\0requestFailed(QString,XmppError)\0"
    "AStreamJid\0archivePrefsOpened(Jid)\0"
    "archivePrefsChanged(Jid)\0"
    "archivePrefsClosed(Jid)\0AId,ABody\0"
    "messagesLoaded(QString,IArchiveCollectionBody)\0"
    "AId,AHeaders\0headersLoaded(QString,QList<IArchiveHeader>)\0"
    "AId,ACollection\0"
    "collectionLoaded(QString,IArchiveCollection)\0"
    "AId,ARequest\0collectionsRemoved(QString,IArchiveRequest)\0"
    "totalCapabilitiesChanged(Jid)\0AEngine\0"
    "archiveEngineRegistered(IArchiveEngine*)\0"
    "AId,AEnabled\0archiveEngineEnableChanged(QUuid,bool)\0"
    "onEngineCapabilitiesChanged(Jid)\0"
    "onEngineRequestFailed(QString,XmppError)\0"
    "onEngineCollectionsRemoved(QString,IArchiveRequest)\0"
    "onEngineHeadersLoaded(QString,QList<IArchiveHeader>)\0"
    "onEngineCollectionLoaded(QString,IArchiveCollection)\0"
    "onSelfRequestFailed(QString,XmppError)\0"
    "onSelfHeadersLoaded(QString,QList<IArchiveHeader>)\0"
    "onSelfCollectionLoaded(QString,IArchiveCollection)\0"
    "AXmppStream\0onStreamOpened(IXmppStream*)\0"
    "onStreamClosed(IXmppStream*)\0"
    "AId,AStreamJid,AElement\0"
    "onPrivateDataLoadedSaved(QString,Jid,QDomElement)\0"
    "AStreamJid,ATagName,ANamespace\0"
    "onPrivateDataChanged(Jid,QString,QString)\0"
    "AId,AWidget\0onShortcutActivated(QString,QWidget*)\0"
    "ASelected,AAccepted\0"
    "onRosterIndexMultiSelection(QList<IRosterIndex*>,bool&)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "AWindow,AUser,AMenu\0"
    "onMultiUserContextMenu(IMultiUserChatWindow*,IMultiUser*,Menu*)\0"
    "onSetItemPrefsByAction(bool)\0"
    "onSetAutoArchivingByAction(bool)\0"
    "onRemoveItemPrefsByAction(bool)\0"
    "onShowArchiveWindowByAction(bool)\0"
    "onShowArchiveWindowByToolBarAction(bool)\0"
    "onShowHistoryOptionsDialogByAction(bool)\0"
    "AInfo\0onDiscoInfoReceived(IDiscoInfo)\0"
    "ASession\0onStanzaSessionActivated(IStanzaSession)\0"
    "onStanzaSessionTerminated(IStanzaSession)\0"
    "AWidget\0onToolBarWidgetCreated(IToolBarWidget*)\0"
    "ANode\0onOptionsChanged(OptionsNode)\0"
};

const QMetaObject MessageArchiver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MessageArchiver,
      qt_meta_data_MessageArchiver, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageArchiver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageArchiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageArchiver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageArchiver))
        return static_cast<void*>(const_cast< MessageArchiver*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< MessageArchiver*>(this));
    if (!strcmp(_clname, "IMessageArchiver"))
        return static_cast< IMessageArchiver*>(const_cast< MessageArchiver*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< MessageArchiver*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< MessageArchiver*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< MessageArchiver*>(this));
    if (!strcmp(_clname, "ISessionNegotiator"))
        return static_cast< ISessionNegotiator*>(const_cast< MessageArchiver*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< MessageArchiver*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageArchiver/1.1"))
        return static_cast< IMessageArchiver*>(const_cast< MessageArchiver*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< MessageArchiver*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< MessageArchiver*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< MessageArchiver*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ISessionNegotiator/1.0"))
        return static_cast< ISessionNegotiator*>(const_cast< MessageArchiver*>(this));
    return QObject::qt_metacast(_clname);
}

int MessageArchiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: requestCompleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: requestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 2: archivePrefsOpened((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 3: archivePrefsChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 4: archivePrefsClosed((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 5: messagesLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveCollectionBody(*)>(_a[2]))); break;
        case 6: headersLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<IArchiveHeader>(*)>(_a[2]))); break;
        case 7: collectionLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveCollection(*)>(_a[2]))); break;
        case 8: collectionsRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveRequest(*)>(_a[2]))); break;
        case 9: totalCapabilitiesChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 10: archiveEngineRegistered((*reinterpret_cast< IArchiveEngine*(*)>(_a[1]))); break;
        case 11: archiveEngineEnableChanged((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: onEngineCapabilitiesChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 13: onEngineRequestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 14: onEngineCollectionsRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveRequest(*)>(_a[2]))); break;
        case 15: onEngineHeadersLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<IArchiveHeader>(*)>(_a[2]))); break;
        case 16: onEngineCollectionLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveCollection(*)>(_a[2]))); break;
        case 17: onSelfRequestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 18: onSelfHeadersLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<IArchiveHeader>(*)>(_a[2]))); break;
        case 19: onSelfCollectionLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveCollection(*)>(_a[2]))); break;
        case 20: onStreamOpened((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 21: onStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 22: onPrivateDataLoadedSaved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< const QDomElement(*)>(_a[3]))); break;
        case 23: onPrivateDataChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 24: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 25: onRosterIndexMultiSelection((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: onRosterIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 27: onMultiUserContextMenu((*reinterpret_cast< IMultiUserChatWindow*(*)>(_a[1])),(*reinterpret_cast< IMultiUser*(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 28: onSetItemPrefsByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: onSetAutoArchivingByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: onRemoveItemPrefsByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: onShowArchiveWindowByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: onShowArchiveWindowByToolBarAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: onShowHistoryOptionsDialogByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: onDiscoInfoReceived((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 35: onStanzaSessionActivated((*reinterpret_cast< const IStanzaSession(*)>(_a[1]))); break;
        case 36: onStanzaSessionTerminated((*reinterpret_cast< const IStanzaSession(*)>(_a[1]))); break;
        case 37: onToolBarWidgetCreated((*reinterpret_cast< IToolBarWidget*(*)>(_a[1]))); break;
        case 38: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void MessageArchiver::requestCompleted(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MessageArchiver::requestFailed(const QString & _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MessageArchiver::archivePrefsOpened(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MessageArchiver::archivePrefsChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MessageArchiver::archivePrefsClosed(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MessageArchiver::messagesLoaded(const QString & _t1, const IArchiveCollectionBody & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MessageArchiver::headersLoaded(const QString & _t1, const QList<IArchiveHeader> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MessageArchiver::collectionLoaded(const QString & _t1, const IArchiveCollection & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MessageArchiver::collectionsRemoved(const QString & _t1, const IArchiveRequest & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MessageArchiver::totalCapabilitiesChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MessageArchiver::archiveEngineRegistered(IArchiveEngine * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MessageArchiver::archiveEngineEnableChanged(const QUuid & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
