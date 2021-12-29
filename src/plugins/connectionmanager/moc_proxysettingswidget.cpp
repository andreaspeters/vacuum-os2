/****************************************************************************
** Meta object code from reading C++ file 'proxysettingswidget.h'
**
** Created: Sat Jan 26 02:13:35 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "proxysettingswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'proxysettingswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProxySettingsWidget[] = {

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
      21,   20,   20,   20, 0x05,
      32,   20,   20,   20, 0x05,
      45,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   58,   20,   20, 0x0a,
      83,   20,   20,   20, 0x0a,
      91,   20,   20,   20, 0x0a,
      99,   20,   20,   20, 0x09,
     141,  125,   20,   20, 0x09,
     189,  180,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ProxySettingsWidget[] = {
    "ProxySettingsWidget\0\0modified()\0"
    "childApply()\0childReset()\0ANode\0"
    "apply(OptionsNode)\0apply()\0reset()\0"
    "onEditButtonClicked(bool)\0AProxyId,AProxy\0"
    "onProxyChanged(QUuid,IConnectionProxy)\0"
    "AProxyId\0onProxyRemoved(QUuid)\0"
};

const QMetaObject ProxySettingsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ProxySettingsWidget,
      qt_meta_data_ProxySettingsWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProxySettingsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProxySettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProxySettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProxySettingsWidget))
        return static_cast<void*>(const_cast< ProxySettingsWidget*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< ProxySettingsWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< ProxySettingsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ProxySettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 6: onEditButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: onProxyChanged((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const IConnectionProxy(*)>(_a[2]))); break;
        case 8: onProxyRemoved((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ProxySettingsWidget::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ProxySettingsWidget::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ProxySettingsWidget::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
