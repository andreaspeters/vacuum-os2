/****************************************************************************
** Meta object code from reading C++ file 'iconsoptionswidget.h'
**
** Created: Sat Jan 26 02:14:30 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "iconsoptionswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iconsoptionswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IconsOptionsWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      31,   19,   19,   19, 0x05,
      44,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   19,   19,   19, 0x0a,
      65,   19,   19,   19, 0x0a,
      73,   19,   19,   19, 0x09,
      89,   19,   19,   19, 0x09,
     114,  108,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_IconsOptionsWidget[] = {
    "IconsOptionsWidget\0\0modified()\0"
    "childApply()\0childReset()\0apply()\0"
    "reset()\0onAddUserRule()\0onDeleteUserRule()\0"
    "AItem\0onDefaultListItemChanged(QListWidgetItem*)\0"
};

const QMetaObject IconsOptionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IconsOptionsWidget,
      qt_meta_data_IconsOptionsWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IconsOptionsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IconsOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IconsOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IconsOptionsWidget))
        return static_cast<void*>(const_cast< IconsOptionsWidget*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< IconsOptionsWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< IconsOptionsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IconsOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: modified(); break;
        case 1: childApply(); break;
        case 2: childReset(); break;
        case 3: apply(); break;
        case 4: reset(); break;
        case 5: onAddUserRule(); break;
        case 6: onDeleteUserRule(); break;
        case 7: onDefaultListItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void IconsOptionsWidget::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void IconsOptionsWidget::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void IconsOptionsWidget::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
