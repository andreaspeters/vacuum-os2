/****************************************************************************
** Meta object code from reading C++ file 'optionsheader.h'
**
** Created: Sat Jan 26 01:40:35 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "optionsheader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsheader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionsHeader[] = {

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
      15,   14,   14,   14, 0x05,
      26,   14,   14,   14, 0x05,
      39,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   14,   14,   14, 0x0a,
      60,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OptionsHeader[] = {
    "OptionsHeader\0\0modified()\0childApply()\0"
    "childReset()\0apply()\0reset()\0"
};

const QMetaObject OptionsHeader::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_OptionsHeader,
      qt_meta_data_OptionsHeader, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionsHeader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionsHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionsHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsHeader))
        return static_cast<void*>(const_cast< OptionsHeader*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< OptionsHeader*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< OptionsHeader*>(this));
    return QLabel::qt_metacast(_clname);
}

int OptionsHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: modified(); break;
        case 1: childApply(); break;
        case 2: childReset(); break;
        case 3: apply(); break;
        case 4: reset(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OptionsHeader::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void OptionsHeader::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void OptionsHeader::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
