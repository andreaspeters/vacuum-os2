/****************************************************************************
** Meta object code from reading C++ file 'pepmanager.h'
**
** Created: Sat Jan 26 02:24:37 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pepmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pepmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PEPManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   12,   11,   11, 0x08,
      53,   12,   11,   11, 0x08,
      91,   82,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PEPManager[] = {
    "PEPManager\0\0AXmppStream\0"
    "onStreamOpened(IXmppStream*)\0"
    "onStreamClosed(IXmppStream*)\0AHandler\0"
    "onPEPHandlerDestroyed(QObject*)\0"
};

const QMetaObject PEPManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PEPManager,
      qt_meta_data_PEPManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PEPManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PEPManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PEPManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PEPManager))
        return static_cast<void*>(const_cast< PEPManager*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< PEPManager*>(this));
    if (!strcmp(_clname, "IPEPManager"))
        return static_cast< IPEPManager*>(const_cast< PEPManager*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< PEPManager*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< PEPManager*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IPEPManager/1.1"))
        return static_cast< IPEPManager*>(const_cast< PEPManager*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< PEPManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PEPManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onStreamOpened((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 1: onStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 2: onPEPHandlerDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
