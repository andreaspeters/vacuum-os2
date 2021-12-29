/****************************************************************************
** Meta object code from reading C++ file 'rostersviewplugin.h'
**
** Created: Sat Jan 26 02:05:15 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rostersviewplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rostersviewplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RostersViewPlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   19,   18,   18, 0x05,
      76,   69,   18,   18, 0x25,
     109,   18,   18,   18, 0x25,

 // slots: signature, parameters, type, tag, flags
     137,  129,   18,   18, 0x09,
     170,   18,   18,   18, 0x09,
     198,   18,   18,   18, 0x09,
     224,  217,   18,   18, 0x09,
     273,  217,   18,   18, 0x09,
     333,  313,   18,   18, 0x09,
     373,  313,   18,   18, 0x09,
     421,   69,   18,   18, 0x09,
     455,   69,   18,   18, 0x09,
     488,   18,   18,   18, 0x09,
     511,   18,   18,   18, 0x09,
     535,  529,   18,   18, 0x09,
     574,  565,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RostersViewPlugin[] = {
    "RostersViewPlugin\0\0AIndex,ARole\0"
    "rosterDataChanged(IRosterIndex*,int)\0"
    "AIndex\0rosterDataChanged(IRosterIndex*)\0"
    "rosterDataChanged()\0AObject\0"
    "onRostersViewDestroyed(QObject*)\0"
    "onViewModelAboutToBeReset()\0"
    "onViewModelReset()\0AModel\0"
    "onViewModelAboutToBeChanged(QAbstractItemModel*)\0"
    "onViewModelChanged(QAbstractItemModel*)\0"
    "AParent,AStart,AEnd\0"
    "onViewRowsInserted(QModelIndex,int,int)\0"
    "onViewRowsAboutToBeRemoved(QModelIndex,int,int)\0"
    "onViewIndexCollapsed(QModelIndex)\0"
    "onViewIndexExpanded(QModelIndex)\0"
    "onRestoreExpandState()\0onOptionsOpened()\0"
    "ANode\0onOptionsChanged(OptionsNode)\0"
    "AChecked\0onShowOfflineContactsAction(bool)\0"
};

const QMetaObject RostersViewPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RostersViewPlugin,
      qt_meta_data_RostersViewPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RostersViewPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RostersViewPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RostersViewPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RostersViewPlugin))
        return static_cast<void*>(const_cast< RostersViewPlugin*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< RostersViewPlugin*>(this));
    if (!strcmp(_clname, "IRostersViewPlugin"))
        return static_cast< IRostersViewPlugin*>(const_cast< RostersViewPlugin*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< RostersViewPlugin*>(this));
    if (!strcmp(_clname, "IRosterDataHolder"))
        return static_cast< IRosterDataHolder*>(const_cast< RostersViewPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< RostersViewPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersViewPlugin/1.5"))
        return static_cast< IRostersViewPlugin*>(const_cast< RostersViewPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< RostersViewPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRosterDataHolder/1.0"))
        return static_cast< IRosterDataHolder*>(const_cast< RostersViewPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int RostersViewPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 2: rosterDataChanged(); break;
        case 3: onRostersViewDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: onViewModelAboutToBeReset(); break;
        case 5: onViewModelReset(); break;
        case 6: onViewModelAboutToBeChanged((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1]))); break;
        case 7: onViewModelChanged((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1]))); break;
        case 8: onViewRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: onViewRowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: onViewIndexCollapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: onViewIndexExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: onRestoreExpandState(); break;
        case 13: onOptionsOpened(); break;
        case 14: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 15: onShowOfflineContactsAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void RostersViewPlugin::rosterDataChanged(IRosterIndex * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
