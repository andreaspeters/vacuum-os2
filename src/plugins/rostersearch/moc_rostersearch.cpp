/****************************************************************************
** Meta object code from reading C++ file 'rostersearch.h'
**
** Created: Sat Jan 26 02:21:43 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rostersearch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rostersearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RosterSearch[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      45,   36,   13,   13, 0x05,
      79,   70,   13,   13, 0x05,
     125,  109,   13,   13, 0x05,
     168,  158,   13,   13, 0x05,
     192,  158,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     216,   13,   13,   13, 0x09,
     254,  245,   13,   13, 0x09,
     291,  284,   13,   13, 0x09,
     329,   13,   13,   13, 0x09,
     349,   13,   13,   13, 0x09,
     367,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RosterSearch[] = {
    "RosterSearch\0\0searchResultUpdated()\0"
    "AEnabled\0searchStateChanged(bool)\0"
    "APattern\0searchPatternChanged(QString)\0"
    "ADataRole,AName\0searchFieldInserted(int,QString)\0"
    "ADataRole\0searchFieldChanged(int)\0"
    "searchFieldRemoved(int)\0"
    "onFieldActionTriggered(bool)\0AChecked\0"
    "onEnableActionTriggered(bool)\0AIndex\0"
    "onRosterIndexDestroyed(IRosterIndex*)\0"
    "onSearchEditStart()\0onOptionsOpened()\0"
    "onOptionsClosed()\0"
};

const QMetaObject RosterSearch::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_RosterSearch,
      qt_meta_data_RosterSearch, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RosterSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RosterSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RosterSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RosterSearch))
        return static_cast<void*>(const_cast< RosterSearch*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< RosterSearch*>(this));
    if (!strcmp(_clname, "IRosterSearch"))
        return static_cast< IRosterSearch*>(const_cast< RosterSearch*>(this));
    if (!strcmp(_clname, "IRostersClickHooker"))
        return static_cast< IRostersClickHooker*>(const_cast< RosterSearch*>(this));
    if (!strcmp(_clname, "IRostersKeyHooker"))
        return static_cast< IRostersKeyHooker*>(const_cast< RosterSearch*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< RosterSearch*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRosterSearch/1.0"))
        return static_cast< IRosterSearch*>(const_cast< RosterSearch*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersClickHooker/1.3"))
        return static_cast< IRostersClickHooker*>(const_cast< RosterSearch*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersKeyHooker/1.2"))
        return static_cast< IRostersKeyHooker*>(const_cast< RosterSearch*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int RosterSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: searchResultUpdated(); break;
        case 1: searchStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: searchPatternChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: searchFieldInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: searchFieldChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: searchFieldRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: onFieldActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: onEnableActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: onRosterIndexDestroyed((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 9: onSearchEditStart(); break;
        case 10: onOptionsOpened(); break;
        case 11: onOptionsClosed(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void RosterSearch::searchResultUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void RosterSearch::searchStateChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RosterSearch::searchPatternChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RosterSearch::searchFieldInserted(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RosterSearch::searchFieldChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RosterSearch::searchFieldRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
