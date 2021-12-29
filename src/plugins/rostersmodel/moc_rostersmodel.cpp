/****************************************************************************
** Meta object code from reading C++ file 'rostersmodel.h'
**
** Created: Sat Jan 26 02:04:40 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rostersmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rostersmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RostersModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   14,   13,   13, 0x05,
      42,   14,   13,   13, 0x05,
      76,   61,   13,   13, 0x05,
     117,  102,   13,   13, 0x05,
     166,  159,   13,   13, 0x05,
     204,  159,   13,   13, 0x05,
     246,  233,   13,   13, 0x05,
     282,  159,   13,   13, 0x05,
     319,  159,   13,   13, 0x05,
     347,  159,   13,   13, 0x05,
     389,  377,   13,   13, 0x05,
     435,  377,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     489,  480,   13,   13, 0x09,
     515,  480,   13,   13, 0x09,
     548,  542,   13,   13, 0x09,
     607,  585,   13,   13, 0x09,
     678,  662,   13,   13, 0x09,
     751,  717,   13,   13, 0x09,
     821,  797,   13,   13, 0x09,
     884,  233,   13,   13, 0x09,
     922,  159,   13,   13, 0x09,
     967,  159,   13,   13, 0x09,
    1003,  159,   13,   13, 0x09,
    1047,  159,   13,   13, 0x09,
    1082,  159,   13,   13, 0x09,
    1114,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RostersModel[] = {
    "RostersModel\0\0AStreamJid\0streamAdded(Jid)\0"
    "streamRemoved(Jid)\0ABefore,AAfter\0"
    "streamJidChanged(Jid,Jid)\0AIndex,AParent\0"
    "indexCreated(IRosterIndex*,IRosterIndex*)\0"
    "AIndex\0indexAboutToBeInserted(IRosterIndex*)\0"
    "indexInserted(IRosterIndex*)\0AIndex,ARole\0"
    "indexDataChanged(IRosterIndex*,int)\0"
    "indexAboutToBeRemoved(IRosterIndex*)\0"
    "indexRemoved(IRosterIndex*)\0"
    "indexDestroyed(IRosterIndex*)\0ADataHolder\0"
    "defaultDataHolderInserted(IRosterDataHolder*)\0"
    "defaultDataHolderRemoved(IRosterDataHolder*)\0"
    "AAccount\0onAccountShown(IAccount*)\0"
    "onAccountHidden(IAccount*)\0ANode\0"
    "onAccountOptionsChanged(OptionsNode)\0"
    "ARoster,AItem,ABefore\0"
    "onRosterItemReceived(IRoster*,IRosterItem,IRosterItem)\0"
    "ARoster,ABefore\0onRosterStreamJidChanged(IRoster*,Jid)\0"
    "APresence,AShow,AStatus,APriority\0"
    "onPresenceChanged(IPresence*,int,QString,int)\0"
    "APresence,AItem,ABefore\0"
    "onPresenceItemReceived(IPresence*,IPresenceItem,IPresenceItem)\0"
    "onIndexDataChanged(IRosterIndex*,int)\0"
    "onIndexChildAboutToBeInserted(IRosterIndex*)\0"
    "onIndexChildInserted(IRosterIndex*)\0"
    "onIndexChildAboutToBeRemoved(IRosterIndex*)\0"
    "onIndexChildRemoved(IRosterIndex*)\0"
    "onIndexDestroyed(IRosterIndex*)\0"
    "onDelayedDataChanged()\0"
};

const QMetaObject RostersModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_RostersModel,
      qt_meta_data_RostersModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RostersModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RostersModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RostersModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RostersModel))
        return static_cast<void*>(const_cast< RostersModel*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< RostersModel*>(this));
    if (!strcmp(_clname, "IRostersModel"))
        return static_cast< IRostersModel*>(const_cast< RostersModel*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< RostersModel*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersModel/1.2"))
        return static_cast< IRostersModel*>(const_cast< RostersModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int RostersModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: streamAdded((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 1: streamRemoved((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 2: streamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 3: indexCreated((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< IRosterIndex*(*)>(_a[2]))); break;
        case 4: indexAboutToBeInserted((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 5: indexInserted((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 6: indexDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: indexAboutToBeRemoved((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 8: indexRemoved((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 9: indexDestroyed((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 10: defaultDataHolderInserted((*reinterpret_cast< IRosterDataHolder*(*)>(_a[1]))); break;
        case 11: defaultDataHolderRemoved((*reinterpret_cast< IRosterDataHolder*(*)>(_a[1]))); break;
        case 12: onAccountShown((*reinterpret_cast< IAccount*(*)>(_a[1]))); break;
        case 13: onAccountHidden((*reinterpret_cast< IAccount*(*)>(_a[1]))); break;
        case 14: onAccountOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 15: onRosterItemReceived((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const IRosterItem(*)>(_a[2])),(*reinterpret_cast< const IRosterItem(*)>(_a[3]))); break;
        case 16: onRosterStreamJidChanged((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 17: onPresenceChanged((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 18: onPresenceItemReceived((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< const IPresenceItem(*)>(_a[2])),(*reinterpret_cast< const IPresenceItem(*)>(_a[3]))); break;
        case 19: onIndexDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: onIndexChildAboutToBeInserted((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 21: onIndexChildInserted((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 22: onIndexChildAboutToBeRemoved((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 23: onIndexChildRemoved((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 24: onIndexDestroyed((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 25: onDelayedDataChanged(); break;
        default: ;
        }
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void RostersModel::streamAdded(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RostersModel::streamRemoved(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RostersModel::streamJidChanged(const Jid & _t1, const Jid & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RostersModel::indexCreated(IRosterIndex * _t1, IRosterIndex * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RostersModel::indexAboutToBeInserted(IRosterIndex * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RostersModel::indexInserted(IRosterIndex * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RostersModel::indexDataChanged(IRosterIndex * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RostersModel::indexAboutToBeRemoved(IRosterIndex * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RostersModel::indexRemoved(IRosterIndex * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RostersModel::indexDestroyed(IRosterIndex * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RostersModel::defaultDataHolderInserted(IRosterDataHolder * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RostersModel::defaultDataHolderRemoved(IRosterDataHolder * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
