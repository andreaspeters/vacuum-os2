/****************************************************************************
** Meta object code from reading C++ file 'simplemessagestyleplugin.h'
**
** Created: Sat Jan 26 02:12:33 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "simplemessagestyleplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simplemessagestyleplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimpleMessageStylePlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   26,   25,   25, 0x05,
      62,   26,   25,   25, 0x05,
     108,   93,   25,   25, 0x05,
     150,   93,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     202,  194,   25,   25, 0x09,
     231,  194,   25,   25, 0x09,
     262,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SimpleMessageStylePlugin[] = {
    "SimpleMessageStylePlugin\0\0AStyle\0"
    "styleCreated(IMessageStyle*)\0"
    "styleDestroyed(IMessageStyle*)\0"
    "AStyle,AWidget\0styleWidgetAdded(IMessageStyle*,QWidget*)\0"
    "styleWidgetRemoved(IMessageStyle*,QWidget*)\0"
    "AWidget\0onStyleWidgetAdded(QWidget*)\0"
    "onStyleWidgetRemoved(QWidget*)\0"
    "onClearEmptyStyles()\0"
};

const QMetaObject SimpleMessageStylePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimpleMessageStylePlugin,
      qt_meta_data_SimpleMessageStylePlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimpleMessageStylePlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimpleMessageStylePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimpleMessageStylePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleMessageStylePlugin))
        return static_cast<void*>(const_cast< SimpleMessageStylePlugin*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< SimpleMessageStylePlugin*>(this));
    if (!strcmp(_clname, "IMessageStylePlugin"))
        return static_cast< IMessageStylePlugin*>(const_cast< SimpleMessageStylePlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< SimpleMessageStylePlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageStylePlugin/1.1"))
        return static_cast< IMessageStylePlugin*>(const_cast< SimpleMessageStylePlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int SimpleMessageStylePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: styleCreated((*reinterpret_cast< IMessageStyle*(*)>(_a[1]))); break;
        case 1: styleDestroyed((*reinterpret_cast< IMessageStyle*(*)>(_a[1]))); break;
        case 2: styleWidgetAdded((*reinterpret_cast< IMessageStyle*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 3: styleWidgetRemoved((*reinterpret_cast< IMessageStyle*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 4: onStyleWidgetAdded((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 5: onStyleWidgetRemoved((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 6: onClearEmptyStyles(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SimpleMessageStylePlugin::styleCreated(IMessageStyle * _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< SimpleMessageStylePlugin *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SimpleMessageStylePlugin::styleDestroyed(IMessageStyle * _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< SimpleMessageStylePlugin *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SimpleMessageStylePlugin::styleWidgetAdded(IMessageStyle * _t1, QWidget * _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< SimpleMessageStylePlugin *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SimpleMessageStylePlugin::styleWidgetRemoved(IMessageStyle * _t1, QWidget * _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< SimpleMessageStylePlugin *>(this), &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
