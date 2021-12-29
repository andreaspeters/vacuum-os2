/****************************************************************************
** Meta object code from reading C++ file 'avatars.h'
**
** Created: Sat Jan 26 02:21:01 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "avatars.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avatars.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Avatars[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,    9,    8,    8, 0x05,
      53,   40,    8,    8, 0x05,
      97,   90,    8,    8, 0x25,
     130,    8,    8,    8, 0x25,
     166,  150,    8,    8, 0x05,
     217,  208,    8,    8, 0x25,

 // slots: signature, parameters, type, tag, flags
     257,  245,    8,    8, 0x09,
     286,  245,    8,    8, 0x09,
     315,    9,    8,    8, 0x09,
     335,   90,    8,    8, 0x09,
     392,  372,    8,    8, 0x09,
     472,  448,    8,    8, 0x09,
     559,  533,    8,    8, 0x09,
     623,    8,    8,    8, 0x09,
     649,    8,    8,    8, 0x09,
     677,    8,    8,    8, 0x09,
     700,    8,    8,    8, 0x09,
     718,    8,    8,    8, 0x09,
     742,  736,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Avatars[] = {
    "Avatars\0\0AContactJid\0avatarChanged(Jid)\0"
    "AIndex,ARole\0rosterDataChanged(IRosterIndex*,int)\0"
    "AIndex\0rosterDataChanged(IRosterIndex*)\0"
    "rosterDataChanged()\0ALabelId,AIndex\0"
    "rosterLabelChanged(quint32,IRosterIndex*)\0"
    "ALabelId\0rosterLabelChanged(quint32)\0"
    "AXmppStream\0onStreamOpened(IXmppStream*)\0"
    "onStreamClosed(IXmppStream*)\0"
    "onVCardChanged(Jid)\0"
    "onRosterIndexInserted(IRosterIndex*)\0"
    "ASelected,AAccepted\0"
    "onRosterIndexMultiSelection(QList<IRosterIndex*>,bool&)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "AIndex,ALabelId,AToolTips\0"
    "onRosterIndexToolTips(IRosterIndex*,quint32,QMap<int,QString>&)\0"
    "onSetAvatarByAction(bool)\0"
    "onClearAvatarByAction(bool)\0"
    "onIconStorageChanged()\0onOptionsOpened()\0"
    "onOptionsClosed()\0ANode\0"
    "onOptionsChanged(OptionsNode)\0"
};

const QMetaObject Avatars::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Avatars,
      qt_meta_data_Avatars, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Avatars::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Avatars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Avatars::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Avatars))
        return static_cast<void*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "IAvatars"))
        return static_cast< IAvatars*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "IRosterDataHolder"))
        return static_cast< IRosterDataHolder*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "IRostersLabelHolder"))
        return static_cast< IRostersLabelHolder*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IAvatars/1.1"))
        return static_cast< IAvatars*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRosterDataHolder/1.0"))
        return static_cast< IRosterDataHolder*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersLabelHolder/1.0"))
        return static_cast< IRostersLabelHolder*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< Avatars*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< Avatars*>(this));
    return QObject::qt_metacast(_clname);
}

int Avatars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: avatarChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 1: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 3: rosterDataChanged(); break;
        case 4: rosterLabelChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< IRosterIndex*(*)>(_a[2]))); break;
        case 5: rosterLabelChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: onStreamOpened((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 7: onStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 8: onVCardChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 9: onRosterIndexInserted((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 10: onRosterIndexMultiSelection((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: onRosterIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 12: onRosterIndexToolTips((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[3]))); break;
        case 13: onSetAvatarByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: onClearAvatarByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: onIconStorageChanged(); break;
        case 16: onOptionsOpened(); break;
        case 17: onOptionsClosed(); break;
        case 18: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Avatars::avatarChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Avatars::rosterDataChanged(IRosterIndex * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 4
void Avatars::rosterLabelChanged(quint32 _t1, IRosterIndex * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
