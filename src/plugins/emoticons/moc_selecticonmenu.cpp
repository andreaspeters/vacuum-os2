/****************************************************************************
** Meta object code from reading C++ file 'selecticonmenu.h'
**
** Created: Sat Jan 26 02:14:45 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "selecticonmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selecticonmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SelectIconMenu[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SelectIconMenu[] = {
    "SelectIconMenu\0\0ASubStorage,AIconKey\0"
    "iconSelected(QString,QString)\0"
    "onAboutToShow()\0"
};

const QMetaObject SelectIconMenu::staticMetaObject = {
    { &Menu::staticMetaObject, qt_meta_stringdata_SelectIconMenu,
      qt_meta_data_SelectIconMenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SelectIconMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SelectIconMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SelectIconMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SelectIconMenu))
        return static_cast<void*>(const_cast< SelectIconMenu*>(this));
    return Menu::qt_metacast(_clname);
}

int SelectIconMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Menu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: iconSelected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: onAboutToShow(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SelectIconMenu::iconSelected(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
