/****************************************************************************
** Meta object code from reading C++ file 'filestreamsmanager.h'
**
** Created: Sat Jan 26 02:23:05 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filestreamsmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filestreamsmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileStreamsManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   20,   19,   19, 0x05,
      56,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   19,   19,   19, 0x09,
     106,   19,   19,   19, 0x09,
     142,  136,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FileStreamsManager[] = {
    "FileStreamsManager\0\0AStream\0"
    "streamCreated(IFileStream*)\0"
    "streamDestroyed(IFileStream*)\0"
    "onStreamDestroyed()\0onShowFileStreamsWindow(bool)\0"
    "AName\0onProfileClosed(QString)\0"
};

const QMetaObject FileStreamsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileStreamsManager,
      qt_meta_data_FileStreamsManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileStreamsManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileStreamsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileStreamsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileStreamsManager))
        return static_cast<void*>(const_cast< FileStreamsManager*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< FileStreamsManager*>(this));
    if (!strcmp(_clname, "IFileStreamsManager"))
        return static_cast< IFileStreamsManager*>(const_cast< FileStreamsManager*>(this));
    if (!strcmp(_clname, "IDataStreamProfile"))
        return static_cast< IDataStreamProfile*>(const_cast< FileStreamsManager*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< FileStreamsManager*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< FileStreamsManager*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< FileStreamsManager*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IFileStreamsManager/1.2"))
        return static_cast< IFileStreamsManager*>(const_cast< FileStreamsManager*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataStreamProfile/1.1"))
        return static_cast< IDataStreamProfile*>(const_cast< FileStreamsManager*>(this));
    return QObject::qt_metacast(_clname);
}

int FileStreamsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: streamCreated((*reinterpret_cast< IFileStream*(*)>(_a[1]))); break;
        case 1: streamDestroyed((*reinterpret_cast< IFileStream*(*)>(_a[1]))); break;
        case 2: onStreamDestroyed(); break;
        case 3: onShowFileStreamsWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: onProfileClosed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FileStreamsManager::streamCreated(IFileStream * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileStreamsManager::streamDestroyed(IFileStream * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
