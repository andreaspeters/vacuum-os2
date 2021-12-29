/****************************************************************************
** Meta object code from reading C++ file 'simpleoptionswidget.h'
**
** Created: Sat Jan 26 02:12:38 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "simpleoptionswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simpleoptionswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimpleOptionsWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      32,   20,   20,   20, 0x05,
      45,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   58,   20,   20, 0x0a,
      83,   20,   20,   20, 0x0a,
      91,   20,   20,   20, 0x0a,
     106,   99,   20,   20, 0x09,
     126,   99,   20,   20, 0x09,
     148,   20,   20,   20, 0x09,
     167,   20,   20,   20, 0x09,
     190,   99,   20,   20, 0x09,
     220,   20,   20,   20, 0x09,
     240,   20,   20,   20, 0x09,
     271,  264,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SimpleOptionsWidget[] = {
    "SimpleOptionsWidget\0\0modified()\0"
    "childApply()\0childReset()\0ANode\0"
    "apply(OptionsNode)\0apply()\0reset()\0"
    "AIndex\0onStyleChanged(int)\0"
    "onVariantChanged(int)\0onSetFontClicked()\0"
    "onDefaultFontClicked()\0"
    "onBackgroundColorChanged(int)\0"
    "onSetImageClicked()\0onDefaultImageClicked()\0"
    "AState\0onAnimationEnableToggled(int)\0"
};

const QMetaObject SimpleOptionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SimpleOptionsWidget,
      qt_meta_data_SimpleOptionsWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimpleOptionsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimpleOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimpleOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleOptionsWidget))
        return static_cast<void*>(const_cast< SimpleOptionsWidget*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< SimpleOptionsWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< SimpleOptionsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SimpleOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: modified(); break;
        case 1: childApply(); break;
        case 2: childReset(); break;
        case 3: apply((*reinterpret_cast< OptionsNode(*)>(_a[1]))); break;
        case 4: apply(); break;
        case 5: reset(); break;
        case 6: onStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: onVariantChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: onSetFontClicked(); break;
        case 9: onDefaultFontClicked(); break;
        case 10: onBackgroundColorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: onSetImageClicked(); break;
        case 12: onDefaultImageClicked(); break;
        case 13: onAnimationEnableToggled((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SimpleOptionsWidget::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SimpleOptionsWidget::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SimpleOptionsWidget::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
