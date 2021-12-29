/****************************************************************************
** Meta object code from reading C++ file 'inbandoptions.h'
**
** Created: Sat Jan 26 02:23:32 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inbandoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inbandoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InBandOptions[] = {

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
      15,   14,   14,   14, 0x05,
      26,   14,   14,   14, 0x05,
      39,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   52,   14,   14, 0x0a,
      85,   77,   14,   14, 0x0a,
     107,   14,   14,   14, 0x0a,
     115,   14,   14,   14, 0x0a,
     130,  123,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_InBandOptions[] = {
    "InBandOptions\0\0modified()\0childApply()\0"
    "childReset()\0ANode\0apply(OptionsNode)\0"
    "AStream\0apply(IInBandStream*)\0apply()\0"
    "reset()\0AValue\0onMaxBlockSizeValueChanged(int)\0"
};

const QMetaObject InBandOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InBandOptions,
      qt_meta_data_InBandOptions, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InBandOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InBandOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InBandOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InBandOptions))
        return static_cast<void*>(const_cast< InBandOptions*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< InBandOptions*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< InBandOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int InBandOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 4: apply((*reinterpret_cast< IInBandStream*(*)>(_a[1]))); break;
        case 5: apply(); break;
        case 6: reset(); break;
        case 7: onMaxBlockSizeValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void InBandOptions::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void InBandOptions::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void InBandOptions::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
