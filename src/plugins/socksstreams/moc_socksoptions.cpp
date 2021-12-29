/****************************************************************************
** Meta object code from reading C++ file 'socksoptions.h'
**
** Created: Sat Jan 26 02:23:51 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "socksoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socksoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SocksOptions[] = {

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
      14,   13,   13,   13, 0x05,
      25,   13,   13,   13, 0x05,
      38,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   51,   13,   13, 0x0a,
      84,   76,   13,   13, 0x0a,
     105,   13,   13,   13, 0x0a,
     113,   13,   13,   13, 0x0a,
     121,   13,   13,   13, 0x09,
     151,   13,   13,   13, 0x09,
     180,   13,   13,   13, 0x09,
     211,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SocksOptions[] = {
    "SocksOptions\0\0modified()\0childApply()\0"
    "childReset()\0ANode\0apply(OptionsNode)\0"
    "AStream\0apply(ISocksStream*)\0apply()\0"
    "reset()\0onAddStreamProxyClicked(bool)\0"
    "onStreamProxyUpClicked(bool)\0"
    "onStreamProxyDownClicked(bool)\0"
    "onDeleteStreamProxyClicked(bool)\0"
};

const QMetaObject SocksOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SocksOptions,
      qt_meta_data_SocksOptions, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SocksOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SocksOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SocksOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SocksOptions))
        return static_cast<void*>(const_cast< SocksOptions*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< SocksOptions*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< SocksOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int SocksOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 4: apply((*reinterpret_cast< ISocksStream*(*)>(_a[1]))); break;
        case 5: apply(); break;
        case 6: reset(); break;
        case 7: onAddStreamProxyClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: onStreamProxyUpClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: onStreamProxyDownClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: onDeleteStreamProxyClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SocksOptions::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SocksOptions::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SocksOptions::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
