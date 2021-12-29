/****************************************************************************
** Meta object code from reading C++ file 'discoitemswindow.h'
**
** Created: Sat Jan 26 02:17:40 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "discoitemswindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'discoitemswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DiscoItemsWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   18,   17,   17, 0x05,
      72,   65,   17,   17, 0x05,
     118,  105,   17,   17, 0x05,
     162,  154,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     209,  198,   17,   17, 0x09,
     253,  241,   17,   17, 0x09,
     292,  287,   17,   17, 0x09,
     337,  318,   17,   17, 0x09,
     384,   17,   17,   17, 0x09,
     415,   17,   17,   17, 0x09,
     438,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DiscoItemsWindow[] = {
    "DiscoItemsWindow\0\0AContactJid,ANode\0"
    "discoverChanged(Jid,QString)\0AIndex\0"
    "currentIndexChanged(QModelIndex)\0"
    "AIndex,AMenu\0indexContextMenu(QModelIndex,Menu*)\0"
    "AWindow\0windowDestroyed(IDiscoItemsWindow*)\0"
    "ADiscoInfo\0onDiscoInfoReceived(IDiscoInfo)\0"
    "ADiscoItems\0onDiscoItemsReceived(IDiscoItems)\0"
    "APos\0onViewContextMenu(QPoint)\0"
    "ACurrent,APrevious\0"
    "onCurrentIndexChanged(QModelIndex,QModelIndex)\0"
    "onToolBarActionTriggered(bool)\0"
    "onComboReturnPressed()\0onSearchTimerTimeout()\0"
};

const QMetaObject DiscoItemsWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DiscoItemsWindow,
      qt_meta_data_DiscoItemsWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiscoItemsWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiscoItemsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiscoItemsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiscoItemsWindow))
        return static_cast<void*>(const_cast< DiscoItemsWindow*>(this));
    if (!strcmp(_clname, "IDiscoItemsWindow"))
        return static_cast< IDiscoItemsWindow*>(const_cast< DiscoItemsWindow*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDiscoItemsWindow/1.1"))
        return static_cast< IDiscoItemsWindow*>(const_cast< DiscoItemsWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DiscoItemsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: discoverChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: currentIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: indexContextMenu((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< Menu*(*)>(_a[2]))); break;
        case 3: windowDestroyed((*reinterpret_cast< IDiscoItemsWindow*(*)>(_a[1]))); break;
        case 4: onDiscoInfoReceived((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 5: onDiscoItemsReceived((*reinterpret_cast< const IDiscoItems(*)>(_a[1]))); break;
        case 6: onViewContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: onCurrentIndexChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 8: onToolBarActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: onComboReturnPressed(); break;
        case 10: onSearchTimerTimeout(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void DiscoItemsWindow::discoverChanged(const Jid _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DiscoItemsWindow::currentIndexChanged(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DiscoItemsWindow::indexContextMenu(const QModelIndex & _t1, Menu * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DiscoItemsWindow::windowDestroyed(IDiscoItemsWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
