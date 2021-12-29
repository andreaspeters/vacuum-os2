/****************************************************************************
** Meta object code from reading C++ file 'connectionoptionswidget.h'
**
** Created: Sat Jan 26 02:14:04 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "connectionoptionswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionoptionswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConnectionOptionsWidget[] = {

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
      25,   24,   24,   24, 0x05,
      36,   24,   24,   24, 0x05,
      49,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   62,   24,   24, 0x0a,
      87,   24,   24,   24, 0x0a,
      95,   24,   24,   24, 0x0a,
     110,  103,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ConnectionOptionsWidget[] = {
    "ConnectionOptionsWidget\0\0modified()\0"
    "childApply()\0childReset()\0ANode\0"
    "apply(OptionsNode)\0apply()\0reset()\0"
    "AState\0onUseLegacySSLStateChanged(int)\0"
};

const QMetaObject ConnectionOptionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ConnectionOptionsWidget,
      qt_meta_data_ConnectionOptionsWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConnectionOptionsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConnectionOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConnectionOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectionOptionsWidget))
        return static_cast<void*>(const_cast< ConnectionOptionsWidget*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< ConnectionOptionsWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< ConnectionOptionsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ConnectionOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 6: onUseLegacySSLStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ConnectionOptionsWidget::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ConnectionOptionsWidget::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ConnectionOptionsWidget::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
