/****************************************************************************
** Meta object code from reading C++ file 'filetransfer.h'
**
** Created: Sat Jan 26 02:23:21 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filetransfer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filetransfer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileTransfer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x09,
      37,   13,   13,   13, 0x09,
      57,   13,   13,   13, 0x09,
      83,   13,   13,   13, 0x09,
     128,  118,   13,   13, 0x09,
     157,  118,   13,   13, 0x09,
     190,  184,   13,   13, 0x09,
     222,  184,   13,   13, 0x09,
     261,  253,   13,   13, 0x09,
     309,  301,   13,   13, 0x09,
     352,  344,   13,   13, 0x09,
     399,  387,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FileTransfer[] = {
    "FileTransfer\0\0onStreamStateChanged()\0"
    "onStreamDestroyed()\0onStreamDialogDestroyed()\0"
    "onShowSendFileDialogByAction(bool)\0"
    "ANotifyId\0onNotificationActivated(int)\0"
    "onNotificationRemoved(int)\0AInfo\0"
    "onDiscoInfoReceived(IDiscoInfo)\0"
    "onDiscoInfoRemoved(IDiscoInfo)\0AWidget\0"
    "onToolBarWidgetCreated(IToolBarWidget*)\0"
    "ABefore\0onEditWidgetContactJidChanged(Jid)\0"
    "AObject\0onToolBarWidgetDestroyed(QObject*)\0"
    "AId,AWidget\0onShortcutActivated(QString,QWidget*)\0"
};

const QMetaObject FileTransfer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileTransfer,
      qt_meta_data_FileTransfer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileTransfer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileTransfer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileTransfer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileTransfer))
        return static_cast<void*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "IFileTransfer"))
        return static_cast< IFileTransfer*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "IDiscoFeatureHandler"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "IRostersDragDropHandler"))
        return static_cast< IRostersDragDropHandler*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "IViewDropHandler"))
        return static_cast< IViewDropHandler*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "IFileStreamsHandler"))
        return static_cast< IFileStreamsHandler*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IFileTransfer/1.0"))
        return static_cast< IFileTransfer*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDiscoFeatureHandler/1.0"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersDragDropHandler/1.1"))
        return static_cast< IRostersDragDropHandler*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IViewDropHandler/1.0"))
        return static_cast< IViewDropHandler*>(const_cast< FileTransfer*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IFileStreamsHandler/1.0"))
        return static_cast< IFileStreamsHandler*>(const_cast< FileTransfer*>(this));
    return QObject::qt_metacast(_clname);
}

int FileTransfer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onStreamStateChanged(); break;
        case 1: onStreamDestroyed(); break;
        case 2: onStreamDialogDestroyed(); break;
        case 3: onShowSendFileDialogByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: onNotificationActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: onNotificationRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: onDiscoInfoReceived((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 7: onDiscoInfoRemoved((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 8: onToolBarWidgetCreated((*reinterpret_cast< IToolBarWidget*(*)>(_a[1]))); break;
        case 9: onEditWidgetContactJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 10: onToolBarWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 11: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
