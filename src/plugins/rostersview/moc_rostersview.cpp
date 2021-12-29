/****************************************************************************
** Meta object code from reading C++ file 'rostersview.h'
**
** Created: Sat Jan 26 02:05:12 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rostersview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rostersview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RostersView[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      30,   12,   12,   12, 0x05,
      62,   49,   12,   12, 0x05,
     106,   99,   12,   12, 0x25,
     139,   12,   12,   12, 0x25,
     175,  159,   12,   12, 0x05,
     226,  217,   12,   12, 0x25,
     261,  254,   12,   12, 0x05,
     297,  254,   12,   12, 0x05,
     343,  324,   12,   12, 0x05,
     409,  397,   12,   12, 0x05,
     450,  397,   12,   12, 0x05,
     499,  397,   12,   12, 0x05,
     539,  254,   12,   12, 0x05,
     586,  254,   12,   12, 0x05,
     644,  624,   12,   12, 0x05,
     716,  692,   12,   12, 0x05,
     769,  692,   12,   12, 0x05,
     850,  824,   12,   12, 0x05,
     916,  906,   12,   12, 0x05,
     936,  906,   12,   12, 0x05,
     957,  906,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     990,  976,   12,   12, 0x09,
    1047,  824,   12,   12, 0x09,
    1133, 1111,   12,   12, 0x09,
    1183,  159,   12,   12, 0x09,
    1227,   12,   12,   12, 0x09,
    1266,   99,   12,   12, 0x09,
    1298,   12,   12,   12, 0x09,
    1327,   12,   12,   12, 0x09,
    1356,   12,   12,   12, 0x09,
    1378,   12,   12,   12, 0x09,
    1410, 1398,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RostersView[] = {
    "RostersView\0\0tabPageChanged()\0"
    "tabPageDestroyed()\0AIndex,ARole\0"
    "rosterDataChanged(IRosterIndex*,int)\0"
    "AIndex\0rosterDataChanged(IRosterIndex*)\0"
    "rosterDataChanged()\0ALabelId,AIndex\0"
    "rosterLabelChanged(quint32,IRosterIndex*)\0"
    "ALabelId\0rosterLabelChanged(quint32)\0"
    "AModel\0modelAboutToBeSeted(IRostersModel*)\0"
    "modelSeted(IRostersModel*)\0"
    "AProxyModel,AOrder\0"
    "proxyModelAboutToBeInserted(QAbstractProxyModel*,int)\0"
    "AProxyModel\0proxyModelInserted(QAbstractProxyModel*)\0"
    "proxyModelAboutToBeRemoved(QAbstractProxyModel*)\0"
    "proxyModelRemoved(QAbstractProxyModel*)\0"
    "viewModelAboutToBeChanged(QAbstractItemModel*)\0"
    "viewModelChanged(QAbstractItemModel*)\0"
    "ASelected,AAccepted\0"
    "indexMultiSelection(QList<IRosterIndex*>,bool&)\0"
    "AIndexes,ALabelId,AMenu\0"
    "indexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "indexClipboardMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "AIndex,ALabelId,AToolTips\0"
    "indexToolTips(IRosterIndex*,quint32,QMap<int,QString>&)\0"
    "ANotifyId\0notifyInserted(int)\0"
    "notifyActivated(int)\0notifyRemoved(int)\0"
    "AEditor,AHint\0"
    "closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)\0"
    "onRosterIndexToolTips(IRosterIndex*,quint32,QMap<int,QString>&)\0"
    "ASelected,ADeselected\0"
    "onSelectionChanged(QItemSelection,QItemSelection)\0"
    "onRosterLabelChanged(quint32,IRosterIndex*)\0"
    "onCopyToClipboardActionTriggered(bool)\0"
    "onIndexDestroyed(IRosterIndex*)\0"
    "onUpdateIndexNotifyTimeout()\0"
    "onRemoveIndexNotifyTimeout()\0"
    "onUpdateBlinkLabels()\0onDragExpandTimer()\0"
    "AId,AWidget\0onShortcutActivated(QString,QWidget*)\0"
};

const QMetaObject RostersView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_RostersView,
      qt_meta_data_RostersView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RostersView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RostersView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RostersView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RostersView))
        return static_cast<void*>(const_cast< RostersView*>(this));
    if (!strcmp(_clname, "IMainTabPage"))
        return static_cast< IMainTabPage*>(const_cast< RostersView*>(this));
    if (!strcmp(_clname, "IRostersView"))
        return static_cast< IRostersView*>(const_cast< RostersView*>(this));
    if (!strcmp(_clname, "IRosterDataHolder"))
        return static_cast< IRosterDataHolder*>(const_cast< RostersView*>(this));
    if (!strcmp(_clname, "IRostersLabelHolder"))
        return static_cast< IRostersLabelHolder*>(const_cast< RostersView*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMainTabPage/1.0"))
        return static_cast< IMainTabPage*>(const_cast< RostersView*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersView/1.5"))
        return static_cast< IRostersView*>(const_cast< RostersView*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRosterDataHolder/1.0"))
        return static_cast< IRosterDataHolder*>(const_cast< RostersView*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersLabelHolder/1.0"))
        return static_cast< IRostersLabelHolder*>(const_cast< RostersView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int RostersView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tabPageChanged(); break;
        case 1: tabPageDestroyed(); break;
        case 2: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 4: rosterDataChanged(); break;
        case 5: rosterLabelChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< IRosterIndex*(*)>(_a[2]))); break;
        case 6: rosterLabelChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 7: modelAboutToBeSeted((*reinterpret_cast< IRostersModel*(*)>(_a[1]))); break;
        case 8: modelSeted((*reinterpret_cast< IRostersModel*(*)>(_a[1]))); break;
        case 9: proxyModelAboutToBeInserted((*reinterpret_cast< QAbstractProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: proxyModelInserted((*reinterpret_cast< QAbstractProxyModel*(*)>(_a[1]))); break;
        case 11: proxyModelAboutToBeRemoved((*reinterpret_cast< QAbstractProxyModel*(*)>(_a[1]))); break;
        case 12: proxyModelRemoved((*reinterpret_cast< QAbstractProxyModel*(*)>(_a[1]))); break;
        case 13: viewModelAboutToBeChanged((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1]))); break;
        case 14: viewModelChanged((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1]))); break;
        case 15: indexMultiSelection((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: indexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 17: indexClipboardMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 18: indexToolTips((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[3]))); break;
        case 19: notifyInserted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: notifyActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: notifyRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: closeEditor((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 23: onRosterIndexToolTips((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[3]))); break;
        case 24: onSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 25: onRosterLabelChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< IRosterIndex*(*)>(_a[2]))); break;
        case 26: onCopyToClipboardActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: onIndexDestroyed((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 28: onUpdateIndexNotifyTimeout(); break;
        case 29: onRemoveIndexNotifyTimeout(); break;
        case 30: onUpdateBlinkLabels(); break;
        case 31: onDragExpandTimer(); break;
        case 32: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void RostersView::tabPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void RostersView::tabPageDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void RostersView::rosterDataChanged(IRosterIndex * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 5
void RostersView::rosterLabelChanged(quint32 _t1, IRosterIndex * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 7
void RostersView::modelAboutToBeSeted(IRostersModel * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RostersView::modelSeted(IRostersModel * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RostersView::proxyModelAboutToBeInserted(QAbstractProxyModel * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RostersView::proxyModelInserted(QAbstractProxyModel * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RostersView::proxyModelAboutToBeRemoved(QAbstractProxyModel * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void RostersView::proxyModelRemoved(QAbstractProxyModel * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void RostersView::viewModelAboutToBeChanged(QAbstractItemModel * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void RostersView::viewModelChanged(QAbstractItemModel * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void RostersView::indexMultiSelection(const QList<IRosterIndex*> & _t1, bool & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void RostersView::indexContextMenu(const QList<IRosterIndex*> & _t1, quint32 _t2, Menu * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void RostersView::indexClipboardMenu(const QList<IRosterIndex*> & _t1, quint32 _t2, Menu * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void RostersView::indexToolTips(IRosterIndex * _t1, quint32 _t2, QMap<int,QString> & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void RostersView::notifyInserted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void RostersView::notifyActivated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void RostersView::notifyRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
QT_END_MOC_NAMESPACE
