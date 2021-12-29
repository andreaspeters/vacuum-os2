/****************************************************************************
** Meta object code from reading C++ file 'gateways.h'
**
** Created: Sat Jan 26 02:19:26 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gateways.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gateways.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gateways[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   10,    9,    9, 0x05,
      81,   68,    9,    9, 0x05,
     121,  110,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     154,    9,    9,    9, 0x09,
     191,    9,    9,    9, 0x09,
     218,    9,    9,    9, 0x09,
     249,    9,    9,    9, 0x09,
     277,    9,    9,    9, 0x09,
     307,    9,    9,    9, 0x09,
     349,  337,    9,    9, 0x09,
     407,  387,    9,    9, 0x09,
     487,  463,    9,    9, 0x09,
     558,  548,    9,    9, 0x09,
     623,  587,    9,    9, 0x09,
     659,  548,    9,    9, 0x09,
     688,  548,    9,    9, 0x09,
     726,  718,    9,    9, 0x09,
     784,  751,    9,    9, 0x09,
     854,  839,    9,    9, 0x09,
     913,  902,    9,    9, 0x09,
     965,  941,    9,    9, 0x09,
    1041, 1010,    9,    9, 0x09,
    1083,    9,    9,    9, 0x09,
    1116, 1104,    9,    9, 0x09,
    1156, 1137,    9,    9, 0x09,
    1192, 1184,    9,    9, 0x09,
    1251, 1238,    9,    9, 0x09,
    1305, 1293,    9,    9, 0x09,
    1347,  110,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Gateways[] = {
    "Gateways\0\0AId,ADesc,APrompt\0"
    "promptReceived(QString,QString,QString)\0"
    "AId,AUserJid\0userJidReceived(QString,Jid)\0"
    "AId,AError\0errorReceived(QString,XmppError)\0"
    "onAddLegacyUserActionTriggered(bool)\0"
    "onLogActionTriggered(bool)\0"
    "onResolveActionTriggered(bool)\0"
    "onKeepActionTriggered(bool)\0"
    "onChangeActionTriggered(bool)\0"
    "onRemoveActionTriggered(bool)\0AId,AWidget\0"
    "onShortcutActivated(QString,QWidget*)\0"
    "ASelected,AAccepted\0"
    "onRosterIndexMultiSelection(QList<IRosterIndex*>,bool&)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "APresence\0onPresenceOpened(IPresence*)\0"
    "AStreamJid,AContactJid,AStateOnline\0"
    "onContactStateChanged(Jid,Jid,bool)\0"
    "onPresenceClosed(IPresence*)\0"
    "onPresenceRemoved(IPresence*)\0ARoster\0"
    "onRosterOpened(IRoster*)\0"
    "ARoster,AItemJid,ASubsType,AText\0"
    "onRosterSubscriptionReceived(IRoster*,Jid,int,QString)\0"
    "ARoster,AAfter\0"
    "onRosterStreamJidAboutToBeChanged(IRoster*,Jid)\0"
    "AStreamJid\0onPrivateStorateOpened(Jid)\0"
    "AId,AStreamJid,AElement\0"
    "onPrivateDataLoaded(QString,Jid,QDomElement)\0"
    "AStreamJid,ATagName,ANamespace\0"
    "onPrivateDataChanged(Jid,QString,QString)\0"
    "onKeepTimerTimeout()\0AContactJid\0"
    "onVCardReceived(Jid)\0AContactJid,AError\0"
    "onVCardError(Jid,XmppError)\0AWindow\0"
    "onDiscoItemsWindowCreated(IDiscoItemsWindow*)\0"
    "AIndex,AMenu\0onDiscoItemContextMenu(QModelIndex,Menu*)\0"
    "AId,AFields\0onRegisterFields(QString,IRegisterFields)\0"
    "onRegisterError(QString,XmppError)\0"
};

const QMetaObject Gateways::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Gateways,
      qt_meta_data_Gateways, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gateways::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gateways::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gateways::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gateways))
        return static_cast<void*>(const_cast< Gateways*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< Gateways*>(this));
    if (!strcmp(_clname, "IGateways"))
        return static_cast< IGateways*>(const_cast< Gateways*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< Gateways*>(this));
    if (!strcmp(_clname, "IDiscoFeatureHandler"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< Gateways*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< Gateways*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IGateways/1.2"))
        return static_cast< IGateways*>(const_cast< Gateways*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< Gateways*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDiscoFeatureHandler/1.0"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< Gateways*>(this));
    return QObject::qt_metacast(_clname);
}

int Gateways::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: promptReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: userJidReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 2: errorReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 3: onAddLegacyUserActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: onLogActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: onResolveActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: onKeepActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: onChangeActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: onRemoveActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 10: onRosterIndexMultiSelection((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: onRosterIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 12: onPresenceOpened((*reinterpret_cast< IPresence*(*)>(_a[1]))); break;
        case 13: onContactStateChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 14: onPresenceClosed((*reinterpret_cast< IPresence*(*)>(_a[1]))); break;
        case 15: onPresenceRemoved((*reinterpret_cast< IPresence*(*)>(_a[1]))); break;
        case 16: onRosterOpened((*reinterpret_cast< IRoster*(*)>(_a[1]))); break;
        case 17: onRosterSubscriptionReceived((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 18: onRosterStreamJidAboutToBeChanged((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 19: onPrivateStorateOpened((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 20: onPrivateDataLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< const QDomElement(*)>(_a[3]))); break;
        case 21: onPrivateDataChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 22: onKeepTimerTimeout(); break;
        case 23: onVCardReceived((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 24: onVCardError((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 25: onDiscoItemsWindowCreated((*reinterpret_cast< IDiscoItemsWindow*(*)>(_a[1]))); break;
        case 26: onDiscoItemContextMenu((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< Menu*(*)>(_a[2]))); break;
        case 27: onRegisterFields((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IRegisterFields(*)>(_a[2]))); break;
        case 28: onRegisterError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void Gateways::promptReceived(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gateways::userJidReceived(const QString & _t1, const Jid & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gateways::errorReceived(const QString & _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
