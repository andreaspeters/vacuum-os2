/****************************************************************************
** Meta object code from reading C++ file 'tabwindow.h'
**
** Created: Sat Jan 26 02:07:51 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tabwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   11,   10,   10, 0x05,
      62,   50,   10,   10, 0x05,
     100,   11,   10,   10, 0x05,
     124,   11,   10,   10, 0x05,
     150,   11,   10,   10, 0x05,
     177,   10,   10,   10, 0x05,
     193,   10,   10,   10, 0x05,
     222,  211,   10,   10, 0x05,
     244,   10,   10,   10, 0x05,
     265,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     298,  288,   10,   10, 0x09,
     325,  318,   10,   10, 0x09,
     343,  318,   10,   10, 0x09,
     368,  318,   10,   10, 0x09,
     392,   10,   10,   10, 0x09,
     408,   10,   10,   10, 0x09,
     433,   10,   10,   10, 0x09,
     450,   10,   10,   10, 0x09,
     469,   10,   10,   10, 0x09,
     490,   10,   10,   10, 0x09,
     527,  517,   10,   10, 0x09,
     585,  569,   10,   10, 0x09,
     629,  623,   10,   10, 0x09,
     659,   10,   10,   10, 0x09,
     683,   10,   10,   10, 0x09,
     726,  714,   10,   10, 0x09,
     764,   10,   10,   10, 0x09,
     795,   10,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TabWindow[] = {
    "TabWindow\0\0APage\0currentTabPageChanged(ITabPage*)\0"
    "APage,AMenu\0tabPageMenuRequested(ITabPage*,Menu*)\0"
    "tabPageAdded(ITabPage*)\0"
    "tabPageRemoved(ITabPage*)\0"
    "tabPageDetached(ITabPage*)\0windowChanged()\0"
    "windowDestroyed()\0AMinimized\0"
    "centralPageShow(bool)\0centralPageChanged()\0"
    "centralPageDestroyed()\0AFrom,ATo\0"
    "onTabMoved(int,int)\0AIndex\0onTabChanged(int)\0"
    "onTabCloseRequested(int)\0"
    "onTabMenuRequested(int)\0onTabPageShow()\0"
    "onTabPageShowMinimized()\0onTabPageClose()\0"
    "onTabPageChanged()\0onTabPageDestroyed()\0"
    "onTabPageNotifierChanged()\0ANotifyId\0"
    "onTabPageNotifierActiveNotifyChanged(int)\0"
    "AWindowId,AName\0onTabWindowNameChanged(QUuid,QString)\0"
    "ANode\0onOptionsChanged(OptionsNode)\0"
    "onActionTriggered(bool)\0"
    "onTabMenuActionTriggered(bool)\0"
    "AId,AWidget\0onShortcutActivated(QString,QWidget*)\0"
    "onBlinkTabNotifyTimerTimeout()\0"
    "onCloseWindowIfEmpty()\0"
};

const QMetaObject TabWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TabWindow,
      qt_meta_data_TabWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabWindow))
        return static_cast<void*>(const_cast< TabWindow*>(this));
    if (!strcmp(_clname, "ITabWindow"))
        return static_cast< ITabWindow*>(const_cast< TabWindow*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ITabWindow/1.4"))
        return static_cast< ITabWindow*>(const_cast< TabWindow*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMainCentralPage/1.0"))
        return static_cast< IMainCentralPage*>(const_cast< TabWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TabWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentTabPageChanged((*reinterpret_cast< ITabPage*(*)>(_a[1]))); break;
        case 1: tabPageMenuRequested((*reinterpret_cast< ITabPage*(*)>(_a[1])),(*reinterpret_cast< Menu*(*)>(_a[2]))); break;
        case 2: tabPageAdded((*reinterpret_cast< ITabPage*(*)>(_a[1]))); break;
        case 3: tabPageRemoved((*reinterpret_cast< ITabPage*(*)>(_a[1]))); break;
        case 4: tabPageDetached((*reinterpret_cast< ITabPage*(*)>(_a[1]))); break;
        case 5: windowChanged(); break;
        case 6: windowDestroyed(); break;
        case 7: centralPageShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: centralPageChanged(); break;
        case 9: centralPageDestroyed(); break;
        case 10: onTabMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: onTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: onTabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: onTabMenuRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: onTabPageShow(); break;
        case 15: onTabPageShowMinimized(); break;
        case 16: onTabPageClose(); break;
        case 17: onTabPageChanged(); break;
        case 18: onTabPageDestroyed(); break;
        case 19: onTabPageNotifierChanged(); break;
        case 20: onTabPageNotifierActiveNotifyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: onTabWindowNameChanged((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 22: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 23: onActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: onTabMenuActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 26: onBlinkTabNotifyTimerTimeout(); break;
        case 27: onCloseWindowIfEmpty(); break;
        default: ;
        }
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void TabWindow::currentTabPageChanged(ITabPage * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TabWindow::tabPageMenuRequested(ITabPage * _t1, Menu * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TabWindow::tabPageAdded(ITabPage * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TabWindow::tabPageRemoved(ITabPage * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TabWindow::tabPageDetached(ITabPage * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TabWindow::windowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void TabWindow::windowDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void TabWindow::centralPageShow(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TabWindow::centralPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void TabWindow::centralPageDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
