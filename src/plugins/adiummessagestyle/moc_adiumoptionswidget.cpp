/****************************************************************************
** Meta object code from reading C++ file 'adiumoptionswidget.h'
**
** Created: Sat Jan 26 02:08:32 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "adiumoptionswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adiumoptionswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AdiumOptionsWidget[] = {

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
      20,   19,   19,   19, 0x05,
      31,   19,   19,   19, 0x05,
      44,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   57,   19,   19, 0x0a,
      82,   19,   19,   19, 0x0a,
      90,   19,   19,   19, 0x0a,
     105,   98,   19,   19, 0x09,
     125,   98,   19,   19, 0x09,
     147,   19,   19,   19, 0x09,
     166,   19,   19,   19, 0x09,
     189,   98,   19,   19, 0x09,
     215,   98,   19,   19, 0x09,
     245,   19,   19,   19, 0x09,
     265,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AdiumOptionsWidget[] = {
    "AdiumOptionsWidget\0\0modified()\0"
    "childApply()\0childReset()\0ANode\0"
    "apply(OptionsNode)\0apply()\0reset()\0"
    "AIndex\0onStyleChanged(int)\0"
    "onVariantChanged(int)\0onSetFontClicked()\0"
    "onDefaultFontClicked()\0onImageLayoutChanged(int)\0"
    "onBackgroundColorChanged(int)\0"
    "onSetImageClicked()\0onDefaultImageClicked()\0"
};

const QMetaObject AdiumOptionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdiumOptionsWidget,
      qt_meta_data_AdiumOptionsWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AdiumOptionsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AdiumOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AdiumOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdiumOptionsWidget))
        return static_cast<void*>(const_cast< AdiumOptionsWidget*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< AdiumOptionsWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< AdiumOptionsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdiumOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 10: onImageLayoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: onBackgroundColorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: onSetImageClicked(); break;
        case 13: onDefaultImageClicked(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void AdiumOptionsWidget::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AdiumOptionsWidget::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void AdiumOptionsWidget::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
