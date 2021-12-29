/****************************************************************************
** Meta object code from reading C++ file 'toolbarwidget.h'
**
** Created: Sat Jan 26 02:07:38 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "toolbarwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolbarwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ToolBarWidget[] = {

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

static const char qt_meta_stringdata_ToolBarWidget[] = {
    "ToolBarWidget\0"
};

const QMetaObject ToolBarWidget::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_ToolBarWidget,
      qt_meta_data_ToolBarWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToolBarWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToolBarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToolBarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToolBarWidget))
        return static_cast<void*>(const_cast< ToolBarWidget*>(this));
    if (!strcmp(_clname, "IToolBarWidget"))
        return static_cast< IToolBarWidget*>(const_cast< ToolBarWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IToolBarWidget/1.0"))
        return static_cast< IToolBarWidget*>(const_cast< ToolBarWidget*>(this));
    return QToolBar::qt_metacast(_clname);
}

int ToolBarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
