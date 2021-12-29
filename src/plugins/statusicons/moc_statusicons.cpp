/****************************************************************************
** Meta object code from reading C++ file 'statusicons.h'
**
** Created: Sat Jan 26 02:14:27 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "statusicons.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusicons.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StatusIcons[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   13,   12,   12, 0x05,
      87,   56,   12,   12, 0x05,
     145,  126,   12,   12, 0x05,
     175,   12,   12,   12, 0x05,
     197,   12,   12,   12, 0x05,
     231,  218,   12,   12, 0x05,
     275,  268,   12,   12, 0x25,
     308,   12,   12,   12, 0x25,

 // slots: signature, parameters, type, tag, flags
     328,   12,   12,   12, 0x09,
     390,  356,   12,   12, 0x09,
     458,  436,   12,   12, 0x09,
     537,  513,   12,   12, 0x09,
     624,  600,   12,   12, 0x09,
     705,  685,   12,   12, 0x09,
     781,  761,   12,   12, 0x09,
     845,   12,   12,   12, 0x09,
     863,   12,   12,   12, 0x09,
     887,  881,   12,   12, 0x09,
     917,   12,   12,   12, 0x09,
     943,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_StatusIcons[] = {
    "StatusIcons\0\0ASubStorage\0"
    "defaultIconsetChanged(QString)\0"
    "APattern,ASubStorage,ARuleType\0"
    "ruleInserted(QString,QString,RuleType)\0"
    "APattern,ARuleType\0ruleRemoved(QString,RuleType)\0"
    "defaultIconsChanged()\0statusIconsChanged()\0"
    "AIndex,ARole\0rosterDataChanged(IRosterIndex*,int)\0"
    "AIndex\0rosterDataChanged(IRosterIndex*)\0"
    "rosterDataChanged()\0onStatusIconsChangedTimer()\0"
    "APresence,AShow,AStatus,APriority\0"
    "onPresenceChanged(IPresence*,int,QString,int)\0"
    "ARoster,AItem,ABefore\0"
    "onRosterItemReceived(IRoster*,IRosterItem,IRosterItem)\0"
    "APresence,AItem,ABefore\0"
    "onPresenceItemReceived(IPresence*,IPresenceItem,IPresenceItem)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "ASelected,AAccepted\0"
    "onRosterIndexMultiSelection(QList<IRosterIndex*>,bool&)\0"
    "AWindow,AUser,AMenu\0"
    "onMultiUserContextMenu(IMultiUserChatWindow*,IMultiUser*,Menu*)\0"
    "onOptionsOpened()\0onOptionsClosed()\0"
    "ANode\0onOptionsChanged(OptionsNode)\0"
    "onDefaultIconsetChanged()\0"
    "onSetCustomIconset(bool)\0"
};

const QMetaObject StatusIcons::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StatusIcons,
      qt_meta_data_StatusIcons, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StatusIcons::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StatusIcons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StatusIcons::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StatusIcons))
        return static_cast<void*>(const_cast< StatusIcons*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< StatusIcons*>(this));
    if (!strcmp(_clname, "IStatusIcons"))
        return static_cast< IStatusIcons*>(const_cast< StatusIcons*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< StatusIcons*>(this));
    if (!strcmp(_clname, "IRosterDataHolder"))
        return static_cast< IRosterDataHolder*>(const_cast< StatusIcons*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< StatusIcons*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStatusIcons/1.0"))
        return static_cast< IStatusIcons*>(const_cast< StatusIcons*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< StatusIcons*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRosterDataHolder/1.0"))
        return static_cast< IRosterDataHolder*>(const_cast< StatusIcons*>(this));
    return QObject::qt_metacast(_clname);
}

int StatusIcons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: defaultIconsetChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: ruleInserted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< RuleType(*)>(_a[3]))); break;
        case 2: ruleRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< RuleType(*)>(_a[2]))); break;
        case 3: defaultIconsChanged(); break;
        case 4: statusIconsChanged(); break;
        case 5: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 7: rosterDataChanged(); break;
        case 8: onStatusIconsChangedTimer(); break;
        case 9: onPresenceChanged((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 10: onRosterItemReceived((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const IRosterItem(*)>(_a[2])),(*reinterpret_cast< const IRosterItem(*)>(_a[3]))); break;
        case 11: onPresenceItemReceived((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< const IPresenceItem(*)>(_a[2])),(*reinterpret_cast< const IPresenceItem(*)>(_a[3]))); break;
        case 12: onRosterIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 13: onRosterIndexMultiSelection((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: onMultiUserContextMenu((*reinterpret_cast< IMultiUserChatWindow*(*)>(_a[1])),(*reinterpret_cast< IMultiUser*(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 15: onOptionsOpened(); break;
        case 16: onOptionsClosed(); break;
        case 17: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 18: onDefaultIconsetChanged(); break;
        case 19: onSetCustomIconset((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void StatusIcons::defaultIconsetChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StatusIcons::ruleInserted(const QString & _t1, const QString & _t2, RuleType _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StatusIcons::ruleRemoved(const QString & _t1, RuleType _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StatusIcons::defaultIconsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void StatusIcons::statusIconsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void StatusIcons::rosterDataChanged(IRosterIndex * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
