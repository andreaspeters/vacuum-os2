/****************************************************************************
** Meta object code from reading C++ file 'remotecontrol.h'
**
** Created: Sat Jan 26 02:24:30 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "remotecontrol.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remotecontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RemoteControl[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_RemoteControl[] = {
    "RemoteControl\0"
};

const QMetaObject RemoteControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RemoteControl,
      qt_meta_data_RemoteControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RemoteControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RemoteControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RemoteControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteControl))
        return static_cast<void*>(const_cast< RemoteControl*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< RemoteControl*>(this));
    if (!strcmp(_clname, "ICommandServer"))
        return static_cast< ICommandServer*>(const_cast< RemoteControl*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< RemoteControl*>(this));
    if (!strcmp(_clname, "IDataLocalizer"))
        return static_cast< IDataLocalizer*>(const_cast< RemoteControl*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< RemoteControl*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ICommandServer/1.0"))
        return static_cast< ICommandServer*>(const_cast< RemoteControl*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< RemoteControl*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataLocalizer/1.0"))
        return static_cast< IDataLocalizer*>(const_cast< RemoteControl*>(this));
    return QObject::qt_metacast(_clname);
}

int RemoteControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
