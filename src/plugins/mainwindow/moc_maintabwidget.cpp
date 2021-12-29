/****************************************************************************
** Meta object code from reading C++ file 'maintabwidget.h'
**
** Created: Sat Jan 26 02:04:53 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maintabwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainTabWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x05,
      73,   58,   14,   14, 0x05,
     108,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     138,   14,   14,   14, 0x09,
     157,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MainTabWidget[] = {
    "MainTabWidget\0\0APage\0"
    "currentTabPageChanged(IMainTabPage*)\0"
    "AOrderId,APage\0tabPageInserted(int,IMainTabPage*)\0"
    "tabPageRemoved(IMainTabPage*)\0"
    "onTabPageChanged()\0onTabPageDestroyed()\0"
};

const QMetaObject MainTabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_MainTabWidget,
      qt_meta_data_MainTabWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainTabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainTabWidget))
        return static_cast<void*>(const_cast< MainTabWidget*>(this));
    if (!strcmp(_clname, "IMainTabWidget"))
        return static_cast< IMainTabWidget*>(const_cast< MainTabWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMainTabWidget/1.0"))
        return static_cast< IMainTabWidget*>(const_cast< MainTabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int MainTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentTabPageChanged((*reinterpret_cast< IMainTabPage*(*)>(_a[1]))); break;
        case 1: tabPageInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IMainTabPage*(*)>(_a[2]))); break;
        case 2: tabPageRemoved((*reinterpret_cast< IMainTabPage*(*)>(_a[1]))); break;
        case 3: onTabPageChanged(); break;
        case 4: onTabPageDestroyed(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MainTabWidget::currentTabPageChanged(IMainTabPage * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainTabWidget::tabPageInserted(int _t1, IMainTabPage * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainTabWidget::tabPageRemoved(IMainTabPage * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
