/****************************************************************************
** Meta object code from reading C++ file 'styleoptionswidget.h'
**
** Created: Sat Jan 26 02:08:09 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "styleoptionswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'styleoptionswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StyleOptionsWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
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
      73,   19,   19,   19, 0x0a,
      96,   19,   19,   19, 0x09,
     123,  116,   19,   19, 0x09,
     149,  116,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_StyleOptionsWidget[] = {
    "StyleOptionsWidget\0\0modified()\0"
    "childApply()\0childReset()\0apply()\0"
    "reset()\0startStyleViewUpdate()\0"
    "onUpdateStyleView()\0AIndex\0"
    "onMessageTypeChanged(int)\0"
    "onStyleEngineChanged(int)\0"
};

const QMetaObject StyleOptionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StyleOptionsWidget,
      qt_meta_data_StyleOptionsWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StyleOptionsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StyleOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StyleOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StyleOptionsWidget))
        return static_cast<void*>(const_cast< StyleOptionsWidget*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< StyleOptionsWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< StyleOptionsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int StyleOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 5: startStyleViewUpdate(); break;
        case 6: onUpdateStyleView(); break;
        case 7: onMessageTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: onStyleEngineChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void StyleOptionsWidget::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void StyleOptionsWidget::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StyleOptionsWidget::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
