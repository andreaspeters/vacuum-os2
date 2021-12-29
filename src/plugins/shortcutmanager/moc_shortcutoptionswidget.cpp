/****************************************************************************
** Meta object code from reading C++ file 'shortcutoptionswidget.h'
**
** Created: Sat Jan 26 02:24:51 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "shortcutoptionswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcutoptionswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShortcutOptionsWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      34,   22,   22,   22, 0x05,
      47,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   22,   22,   22, 0x0a,
      68,   22,   22,   22, 0x0a,
      76,   22,   22,   22, 0x09,
      95,   22,   22,   22, 0x09,
     112,   22,   22,   22, 0x09,
     139,   22,   22,   22, 0x09,
     175,  169,   22,   22, 0x09,
     217,  210,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ShortcutOptionsWidget[] = {
    "ShortcutOptionsWidget\0\0modified()\0"
    "childApply()\0childReset()\0apply()\0"
    "reset()\0onDefaultClicked()\0onClearClicked()\0"
    "onRestoreDefaultsClicked()\0"
    "onShowConflictsTimerTimeout()\0AItem\0"
    "onModelItemChanged(QStandardItem*)\0"
    "AIndex\0onIndexDoubleClicked(QModelIndex)\0"
};

const QMetaObject ShortcutOptionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ShortcutOptionsWidget,
      qt_meta_data_ShortcutOptionsWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShortcutOptionsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShortcutOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShortcutOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutOptionsWidget))
        return static_cast<void*>(const_cast< ShortcutOptionsWidget*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< ShortcutOptionsWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< ShortcutOptionsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ShortcutOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 5: onDefaultClicked(); break;
        case 6: onClearClicked(); break;
        case 7: onRestoreDefaultsClicked(); break;
        case 8: onShowConflictsTimerTimeout(); break;
        case 9: onModelItemChanged((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 10: onIndexDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ShortcutOptionsWidget::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ShortcutOptionsWidget::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ShortcutOptionsWidget::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
