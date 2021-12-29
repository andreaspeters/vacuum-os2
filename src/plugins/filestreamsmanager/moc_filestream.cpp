/****************************************************************************
** Meta object code from reading C++ file 'filestream.h'
**
** Created: Sat Jan 26 02:22:56 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filestream.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filestream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileStream[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      27,   11,   11,   11, 0x05,
      42,   11,   11,   11, 0x05,
      60,   11,   11,   11, 0x05,
      80,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     105,   98,   11,   11, 0x09,
     138,  131,   11,   11, 0x09,
     171,   11,   11,   11, 0x09,
     198,   11,   11,   11, 0x09,
     222,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FileStream[] = {
    "FileStream\0\0stateChanged()\0speedChanged()\0"
    "progressChanged()\0propertiesChanged()\0"
    "streamDestroyed()\0AState\0"
    "onSocketStateChanged(int)\0ABytes\0"
    "onTransferThreadProgress(qint64)\0"
    "onTransferThreadFinished()\0"
    "onIncrementSpeedIndex()\0onConnectionTimeout()\0"
};

const QMetaObject FileStream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileStream,
      qt_meta_data_FileStream, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileStream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileStream))
        return static_cast<void*>(const_cast< FileStream*>(this));
    if (!strcmp(_clname, "IFileStream"))
        return static_cast< IFileStream*>(const_cast< FileStream*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IFileStream/1.2"))
        return static_cast< IFileStream*>(const_cast< FileStream*>(this));
    return QObject::qt_metacast(_clname);
}

int FileStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stateChanged(); break;
        case 1: speedChanged(); break;
        case 2: progressChanged(); break;
        case 3: propertiesChanged(); break;
        case 4: streamDestroyed(); break;
        case 5: onSocketStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: onTransferThreadProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: onTransferThreadFinished(); break;
        case 8: onIncrementSpeedIndex(); break;
        case 9: onConnectionTimeout(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FileStream::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void FileStream::speedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FileStream::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void FileStream::propertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void FileStream::streamDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
