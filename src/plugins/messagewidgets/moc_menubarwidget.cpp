/****************************************************************************
** Meta object code from reading C++ file 'menubarwidget.h'
**
** Created: Sat Jan 26 02:07:35 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "menubarwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menubarwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MenuBarWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_MenuBarWidget[] = {
    "MenuBarWidget\0"
};

const QMetaObject MenuBarWidget::staticMetaObject = {
    { &QMenuBar::staticMetaObject, qt_meta_stringdata_MenuBarWidget,
      qt_meta_data_MenuBarWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MenuBarWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MenuBarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MenuBarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MenuBarWidget))
        return static_cast<void*>(const_cast< MenuBarWidget*>(this));
    if (!strcmp(_clname, "IMenuBarWidget"))
        return static_cast< IMenuBarWidget*>(const_cast< MenuBarWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMenuBarWidget/1.0"))
        return static_cast< IMenuBarWidget*>(const_cast< MenuBarWidget*>(this));
    return QMenuBar::qt_metacast(_clname);
}

int MenuBarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenuBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
