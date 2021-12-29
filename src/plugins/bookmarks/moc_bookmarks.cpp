/****************************************************************************
** Meta object code from reading C++ file 'bookmarks.h'
**
** Created: Sat Jan 26 02:18:11 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bookmarks.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Bookmarks[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   11,   10,   10, 0x05,
      57,   44,   10,   10, 0x05,
     101,   94,   10,   10, 0x25,
     134,   10,   10,   10, 0x25,

 // slots: signature, parameters, type, tag, flags
     154,   11,   10,   10, 0x09,
     206,  182,   10,   10, 0x09,
     252,  182,   10,   10, 0x09,
     329,  298,   10,   10, 0x09,
     371,   11,   10,   10, 0x09,
     419,  399,   10,   10, 0x09,
     504,  480,   10,   10, 0x09,
     570,   94,   10,   10, 0x09,
     616,  608,   10,   10, 0x09,
     664,  608,   10,   10, 0x09,
     723,  710,   10,   10, 0x09,
     766,   10,   10,   10, 0x09,
     803,   10,   10,   10, 0x09,
     839,   10,   10,   10, 0x09,
     877,   10,   10,   10, 0x09,
     923,   10,   10,   10, 0x09,
     959,   10,   10,   10, 0x09,
     998,   10,   10,   10, 0x09,
    1035,   10,   10,   10, 0x09,
    1085,   10,   10,   10, 0x09,
    1131,   10,   10,   10, 0x09,
    1176, 1164,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Bookmarks[] = {
    "Bookmarks\0\0AStreamJid\0bookmarksChanged(Jid)\0"
    "AIndex,ARole\0rosterDataChanged(IRosterIndex*,int)\0"
    "AIndex\0rosterDataChanged(IRosterIndex*)\0"
    "rosterDataChanged()\0onPrivateStorageOpened(Jid)\0"
    "AId,AStreamJid,AElement\0"
    "onPrivateDataUpdated(QString,Jid,QDomElement)\0"
    "onPrivateDataRemoved(QString,Jid,QDomElement)\0"
    "AStreamJid,ATagName,ANamespace\0"
    "onPrivateDataChanged(Jid,QString,QString)\0"
    "onPrivateStorageClosed(Jid)\0"
    "ASelected,AAccepted\0"
    "onRostersViewIndexMultiSelection(QList<IRosterIndex*>,bool&)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRostersViewIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "onRosterIndexDestroyed(IRosterIndex*)\0"
    "AWindow\0onMultiChatWindowCreated(IMultiUserChatWindow*)\0"
    "onDiscoItemsWindowCreated(IDiscoItemsWindow*)\0"
    "AIndex,AMenu\0onDiscoIndexContextMenu(QModelIndex,Menu*)\0"
    "onStartBookmarkActionTriggered(bool)\0"
    "onEditBookmarkActionTriggered(bool)\0"
    "onRenameBookmarkActionTriggered(bool)\0"
    "onChangeBookmarkAutoJoinActionTriggered(bool)\0"
    "onAddBookmarksActionTriggered(bool)\0"
    "onRemoveBookmarksActionTriggered(bool)\0"
    "onEditBookmarksActionTriggered(bool)\0"
    "onMultiChatWindowAddBookmarkActionTriggered(bool)\0"
    "onDiscoWindowAddBookmarkActionTriggered(bool)\0"
    "onEditBookmarksDialogDestroyed()\0"
    "AId,AWidget\0onShortcutActivated(QString,QWidget*)\0"
};

const QMetaObject Bookmarks::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Bookmarks,
      qt_meta_data_Bookmarks, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Bookmarks::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Bookmarks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Bookmarks::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Bookmarks))
        return static_cast<void*>(const_cast< Bookmarks*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< Bookmarks*>(this));
    if (!strcmp(_clname, "IBookmarks"))
        return static_cast< IBookmarks*>(const_cast< Bookmarks*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< Bookmarks*>(this));
    if (!strcmp(_clname, "IRosterDataHolder"))
        return static_cast< IRosterDataHolder*>(const_cast< Bookmarks*>(this));
    if (!strcmp(_clname, "IRostersEditHandler"))
        return static_cast< IRostersEditHandler*>(const_cast< Bookmarks*>(this));
    if (!strcmp(_clname, "AdvancedDelegateEditProxy"))
        return static_cast< AdvancedDelegateEditProxy*>(const_cast< Bookmarks*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< Bookmarks*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IBookmarks/1.1"))
        return static_cast< IBookmarks*>(const_cast< Bookmarks*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< Bookmarks*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRosterDataHolder/1.0"))
        return static_cast< IRosterDataHolder*>(const_cast< Bookmarks*>(this));
    if (!strcmp(_clname, "Virtus.Plugin.IRostersEditHandler/1.1"))
        return static_cast< IRostersEditHandler*>(const_cast< Bookmarks*>(this));
    return QObject::qt_metacast(_clname);
}

int Bookmarks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: bookmarksChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 1: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 3: rosterDataChanged(); break;
        case 4: onPrivateStorageOpened((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 5: onPrivateDataUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< const QDomElement(*)>(_a[3]))); break;
        case 6: onPrivateDataRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< const QDomElement(*)>(_a[3]))); break;
        case 7: onPrivateDataChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: onPrivateStorageClosed((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 9: onRostersViewIndexMultiSelection((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: onRostersViewIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 11: onRosterIndexDestroyed((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 12: onMultiChatWindowCreated((*reinterpret_cast< IMultiUserChatWindow*(*)>(_a[1]))); break;
        case 13: onDiscoItemsWindowCreated((*reinterpret_cast< IDiscoItemsWindow*(*)>(_a[1]))); break;
        case 14: onDiscoIndexContextMenu((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< Menu*(*)>(_a[2]))); break;
        case 15: onStartBookmarkActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: onEditBookmarkActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: onRenameBookmarkActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: onChangeBookmarkAutoJoinActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: onAddBookmarksActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: onRemoveBookmarksActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: onEditBookmarksActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: onMultiChatWindowAddBookmarkActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: onDiscoWindowAddBookmarkActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: onEditBookmarksDialogDestroyed(); break;
        case 25: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void Bookmarks::bookmarksChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Bookmarks::rosterDataChanged(IRosterIndex * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
