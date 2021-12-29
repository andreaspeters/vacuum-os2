/****************************************************************************
** Meta object code from reading C++ file 'rosterindex.h'
**
** Created: Sat Jan 26 02:04:38 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rosterindex.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rosterindex.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RosterIndex[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   13,   12,   12, 0x05,
      69,   57,   12,   12, 0x05,
     108,   57,   12,   12, 0x05,
     153,  146,   12,   12, 0x05,
     191,  146,   12,   12, 0x05,
     220,  146,   12,   12, 0x05,
     257,  146,   12,   12, 0x05,
     285,  146,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     315,   13,   12,   12, 0x09,
     354,   12,   12,   12, 0x09,
     383,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RosterIndex[] = {
    "RosterIndex\0\0AIndex,ARole\0"
    "dataChanged(IRosterIndex*,int)\0"
    "ADataHolder\0dataHolderInserted(IRosterDataHolder*)\0"
    "dataHolderRemoved(IRosterDataHolder*)\0"
    "AIndex\0childAboutToBeInserted(IRosterIndex*)\0"
    "childInserted(IRosterIndex*)\0"
    "childAboutToBeRemoved(IRosterIndex*)\0"
    "childRemoved(IRosterIndex*)\0"
    "indexDestroyed(IRosterIndex*)\0"
    "onDataHolderChanged(IRosterIndex*,int)\0"
    "onRemoveByLastChildRemoved()\0"
    "onDestroyByParentRemoved()\0"
};

const QMetaObject RosterIndex::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RosterIndex,
      qt_meta_data_RosterIndex, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RosterIndex::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RosterIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RosterIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RosterIndex))
        return static_cast<void*>(const_cast< RosterIndex*>(this));
    if (!strcmp(_clname, "IRosterIndex"))
        return static_cast< IRosterIndex*>(const_cast< RosterIndex*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRosterIndex/1.2"))
        return static_cast< IRosterIndex*>(const_cast< RosterIndex*>(this));
    return QObject::qt_metacast(_clname);
}

int RosterIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: dataHolderInserted((*reinterpret_cast< IRosterDataHolder*(*)>(_a[1]))); break;
        case 2: dataHolderRemoved((*reinterpret_cast< IRosterDataHolder*(*)>(_a[1]))); break;
        case 3: childAboutToBeInserted((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 4: childInserted((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 5: childAboutToBeRemoved((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 6: childRemoved((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 7: indexDestroyed((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 8: onDataHolderChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: onRemoveByLastChildRemoved(); break;
        case 10: onDestroyByParentRemoved(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void RosterIndex::dataChanged(IRosterIndex * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RosterIndex::dataHolderInserted(IRosterDataHolder * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RosterIndex::dataHolderRemoved(IRosterDataHolder * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RosterIndex::childAboutToBeInserted(IRosterIndex * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RosterIndex::childInserted(IRosterIndex * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RosterIndex::childAboutToBeRemoved(IRosterIndex * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RosterIndex::childRemoved(IRosterIndex * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RosterIndex::indexDestroyed(IRosterIndex * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
