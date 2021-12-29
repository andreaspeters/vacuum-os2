/****************************************************************************
** Meta object code from reading C++ file 'filestreamswindow.h'
**
** Created: Sat Jan 26 02:22:59 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filestreamswindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filestreamswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileStreamsWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   19,   18,   18, 0x09,
      57,   18,   18,   18, 0x09,
      80,   18,   18,   18, 0x09,
     103,   18,   18,   18, 0x09,
     129,   18,   18,   18, 0x09,
     157,   19,   18,   18, 0x09,
     196,  189,   18,   18, 0x09,
     231,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FileStreamsWindow[] = {
    "FileStreamsWindow\0\0AStream\0"
    "onStreamCreated(IFileStream*)\0"
    "onStreamStateChanged()\0onStreamSpeedChanged()\0"
    "onStreamProgressChanged()\0"
    "onStreamPropertiesChanged()\0"
    "onStreamDestroyed(IFileStream*)\0AIndex\0"
    "onTableIndexActivated(QModelIndex)\0"
    "onUpdateStatusBar()\0"
};

const QMetaObject FileStreamsWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FileStreamsWindow,
      qt_meta_data_FileStreamsWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileStreamsWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileStreamsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileStreamsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileStreamsWindow))
        return static_cast<void*>(const_cast< FileStreamsWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FileStreamsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onStreamCreated((*reinterpret_cast< IFileStream*(*)>(_a[1]))); break;
        case 1: onStreamStateChanged(); break;
        case 2: onStreamSpeedChanged(); break;
        case 3: onStreamProgressChanged(); break;
        case 4: onStreamPropertiesChanged(); break;
        case 5: onStreamDestroyed((*reinterpret_cast< IFileStream*(*)>(_a[1]))); break;
        case 6: onTableIndexActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: onUpdateStatusBar(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
