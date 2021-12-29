/****************************************************************************
** Meta object code from reading C++ file 'recentcontacts.h'
**
** Created: Sat Jan 26 02:33:32 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "recentcontacts.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recentcontacts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RecentContacts[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      44,   38,   15,   15, 0x05,
      73,   38,   15,   15, 0x05,
     104,   38,   15,   15, 0x05,
     148,  135,   15,   15, 0x05,
     213,  198,   15,   15, 0x05,
     277,  264,   15,   15, 0x05,
     321,  314,   15,   15, 0x25,
     354,   15,   15,   15, 0x25,
     390,  374,   15,   15, 0x05,
     441,  432,   15,   15, 0x25,
     469,   38,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     511,  500,   15,   15, 0x09,
     542,  500,   15,   15, 0x09,
     590,  575,   15,   15, 0x09,
     630,  314,   15,   15, 0x09,
     673,  264,   15,   15, 0x09,
     723,  314,   15,   15, 0x29,
     769,  314,   15,   15, 0x09,
     811,  500,   15,   15, 0x09,
     863,  839,   15,   15, 0x09,
     946,  915,   15,   15, 0x09,
     995,  500,   15,   15, 0x09,
    1035,   15,   15,   15, 0x09,
    1098, 1078,   15,   15, 0x09,
    1183, 1159,   15,   15, 0x09,
    1275, 1249,   15,   15, 0x09,
    1354, 1344,   15,   15, 0x09,
    1387, 1344,   15,   15, 0x09,
    1419, 1344,   15,   15, 0x09,
    1453,   38,   15,   15, 0x09,
    1493,   15,   15,   15, 0x09,
    1522,   15,   15,   15, 0x09,
    1552,   15,   15,   15, 0x09,
    1584,   15,   15,   15, 0x09,
    1631, 1619,   15,   15, 0x09,
    1669,   15,   15,   15, 0x09,
    1693, 1687,   15,   15, 0x09,
    1723,   15,   15,   15, 0x09,
    1759,   15,   15,   15, 0x09,
    1787,   15,   15,   15, 0x09,
    1816,   15,   15,   15, 0x09,
    1845,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RecentContacts[] = {
    "RecentContacts\0\0visibleItemsChanged()\0"
    "AItem\0recentItemAdded(IRecentItem)\0"
    "recentItemChanged(IRecentItem)\0"
    "recentItemRemoved(IRecentItem)\0"
    "AItem,AIndex\0"
    "recentItemIndexCreated(IRecentItem,IRosterIndex*)\0"
    "AType,AHandler\0"
    "itemHandlerRegistered(QString,IRecentItemHandler*)\0"
    "AIndex,ARole\0rosterDataChanged(IRosterIndex*,int)\0"
    "AIndex\0rosterDataChanged(IRosterIndex*)\0"
    "rosterDataChanged()\0ALabelId,AIndex\0"
    "rosterLabelChanged(quint32,IRosterIndex*)\0"
    "ALabelId\0rosterLabelChanged(quint32)\0"
    "recentItemUpdated(IRecentItem)\0"
    "AStreamJid\0onRostersModelStreamAdded(Jid)\0"
    "onRostersModelStreamRemoved(Jid)\0"
    "ABefore,AAfter\0onRostersModelStreamJidChanged(Jid,Jid)\0"
    "onRostersModelIndexInserted(IRosterIndex*)\0"
    "onRostersModelIndexDataChanged(IRosterIndex*,int)\0"
    "onRostersModelIndexDataChanged(IRosterIndex*)\0"
    "onRostersModelIndexRemoved(IRosterIndex*)\0"
    "onPrivateStorageOpened(Jid)\0"
    "AId,AStreamJid,AElement\0"
    "onPrivateStorageDataLoaded(QString,Jid,QDomElement)\0"
    "AStreamJid,ATagName,ANamespace\0"
    "onPrivateStorageDataChanged(Jid,QString,QString)\0"
    "onPrivateStorageNotifyAboutToClose(Jid)\0"
    "onRostersViewIndexContextMenuAboutToShow()\0"
    "ASelected,AAccepted\0"
    "onRostersViewIndexMultiSelection(QList<IRosterIndex*>,bool&)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRostersViewIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "AIndex,ALabelId,AToolTips\0"
    "onRostersViewIndexToolTips(IRosterIndex*,quint32,QMap<int,QString>&)\0"
    "ANotifyId\0onRostersViewNotifyInserted(int)\0"
    "onRostersViewNotifyRemoved(int)\0"
    "onRostersViewNotifyActivated(int)\0"
    "onHandlerRecentItemUpdated(IRecentItem)\0"
    "onRemoveFromRecentByAction()\0"
    "onInsertToFavoritesByAction()\0"
    "onRemoveFromFavoritesByAction()\0"
    "onSaveItemsToStorageTimerTimeout()\0"
    "AId,AWidget\0onShortcutActivated(QString,QWidget*)\0"
    "onOptionsOpened()\0ANode\0"
    "onOptionsChanged(OptionsNode)\0"
    "onChangeAlwaysShowOfflineContacts()\0"
    "onChangeHideLaterContacts()\0"
    "onChangeSimpleContactsView()\0"
    "onChangeSortByLastActivity()\0"
    "onChangeShowOnlyFavorite()\0"
};

const QMetaObject RecentContacts::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RecentContacts,
      qt_meta_data_RecentContacts, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RecentContacts::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RecentContacts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RecentContacts::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RecentContacts))
        return static_cast<void*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "IRecentContacts"))
        return static_cast< IRecentContacts*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "IRosterDataHolder"))
        return static_cast< IRosterDataHolder*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "IRostersDragDropHandler"))
        return static_cast< IRostersDragDropHandler*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "IRostersLabelHolder"))
        return static_cast< IRostersLabelHolder*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "IRostersClickHooker"))
        return static_cast< IRostersClickHooker*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "IRecentItemHandler"))
        return static_cast< IRecentItemHandler*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRecentContacts/1.1"))
        return static_cast< IRecentContacts*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRosterDataHolder/1.0"))
        return static_cast< IRosterDataHolder*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersDragDropHandler/1.1"))
        return static_cast< IRostersDragDropHandler*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersLabelHolder/1.0"))
        return static_cast< IRostersLabelHolder*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersClickHooker/1.3"))
        return static_cast< IRostersClickHooker*>(const_cast< RecentContacts*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRecentItemHandler/1.0"))
        return static_cast< IRecentItemHandler*>(const_cast< RecentContacts*>(this));
    return QObject::qt_metacast(_clname);
}

int RecentContacts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: visibleItemsChanged(); break;
        case 1: recentItemAdded((*reinterpret_cast< const IRecentItem(*)>(_a[1]))); break;
        case 2: recentItemChanged((*reinterpret_cast< const IRecentItem(*)>(_a[1]))); break;
        case 3: recentItemRemoved((*reinterpret_cast< const IRecentItem(*)>(_a[1]))); break;
        case 4: recentItemIndexCreated((*reinterpret_cast< const IRecentItem(*)>(_a[1])),(*reinterpret_cast< IRosterIndex*(*)>(_a[2]))); break;
        case 5: itemHandlerRegistered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< IRecentItemHandler*(*)>(_a[2]))); break;
        case 6: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 8: rosterDataChanged(); break;
        case 9: rosterLabelChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< IRosterIndex*(*)>(_a[2]))); break;
        case 10: rosterLabelChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 11: recentItemUpdated((*reinterpret_cast< const IRecentItem(*)>(_a[1]))); break;
        case 12: onRostersModelStreamAdded((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 13: onRostersModelStreamRemoved((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 14: onRostersModelStreamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 15: onRostersModelIndexInserted((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 16: onRostersModelIndexDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: onRostersModelIndexDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 18: onRostersModelIndexRemoved((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 19: onPrivateStorageOpened((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 20: onPrivateStorageDataLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< const QDomElement(*)>(_a[3]))); break;
        case 21: onPrivateStorageDataChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 22: onPrivateStorageNotifyAboutToClose((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 23: onRostersViewIndexContextMenuAboutToShow(); break;
        case 24: onRostersViewIndexMultiSelection((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 25: onRostersViewIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 26: onRostersViewIndexToolTips((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[3]))); break;
        case 27: onRostersViewNotifyInserted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: onRostersViewNotifyRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: onRostersViewNotifyActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: onHandlerRecentItemUpdated((*reinterpret_cast< const IRecentItem(*)>(_a[1]))); break;
        case 31: onRemoveFromRecentByAction(); break;
        case 32: onInsertToFavoritesByAction(); break;
        case 33: onRemoveFromFavoritesByAction(); break;
        case 34: onSaveItemsToStorageTimerTimeout(); break;
        case 35: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 36: onOptionsOpened(); break;
        case 37: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 38: onChangeAlwaysShowOfflineContacts(); break;
        case 39: onChangeHideLaterContacts(); break;
        case 40: onChangeSimpleContactsView(); break;
        case 41: onChangeSortByLastActivity(); break;
        case 42: onChangeShowOnlyFavorite(); break;
        default: ;
        }
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void RecentContacts::visibleItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void RecentContacts::recentItemAdded(const IRecentItem & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RecentContacts::recentItemChanged(const IRecentItem & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RecentContacts::recentItemRemoved(const IRecentItem & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RecentContacts::recentItemIndexCreated(const IRecentItem & _t1, IRosterIndex * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RecentContacts::itemHandlerRegistered(const QString & _t1, IRecentItemHandler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RecentContacts::rosterDataChanged(IRosterIndex * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 9
void RecentContacts::rosterLabelChanged(quint32 _t1, IRosterIndex * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 11
void RecentContacts::recentItemUpdated(const IRecentItem & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
