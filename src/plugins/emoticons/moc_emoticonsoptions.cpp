/****************************************************************************
** Meta object code from reading C++ file 'emoticonsoptions.h'
**
** Created: Sat Jan 26 02:14:47 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "emoticonsoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emoticonsoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EmoticonsOptions[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      29,   17,   17,   17, 0x05,
      42,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   17,   17,   17, 0x0a,
      63,   17,   17,   17, 0x0a,
      71,   17,   17,   17, 0x09,
      91,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_EmoticonsOptions[] = {
    "EmoticonsOptions\0\0modified()\0childApply()\0"
    "childReset()\0apply()\0reset()\0"
    "onUpButtonClicked()\0onDownButtonClicked()\0"
};

const QMetaObject EmoticonsOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EmoticonsOptions,
      qt_meta_data_EmoticonsOptions, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EmoticonsOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EmoticonsOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EmoticonsOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmoticonsOptions))
        return static_cast<void*>(const_cast< EmoticonsOptions*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< EmoticonsOptions*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< EmoticonsOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int EmoticonsOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 5: onUpButtonClicked(); break;
        case 6: onDownButtonClicked(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void EmoticonsOptions::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void EmoticonsOptions::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void EmoticonsOptions::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
