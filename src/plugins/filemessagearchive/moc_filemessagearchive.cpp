/****************************************************************************
** Meta object code from reading C++ file 'filemessagearchive.h'
**
** Created: Sat Jan 26 02:25:25 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filemessagearchive.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filemessagearchive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileMessageArchive[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   20,   19,   19, 0x05,
      67,   56,   19,   19, 0x05,
     112,  100,   19,   19, 0x05,
     165,  152,   19,   19, 0x05,
     226,  210,   19,   19, 0x05,
     284,  271,   19,   19, 0x05,
     340,  328,   19,   19, 0x05,
     410,  391,   19,   19, 0x05,
     451,  391,   19,   19, 0x05,
     491,  391,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     533,   19,   19,   19, 0x09,
     559,   20,   19,   19, 0x09,
     585,   20,   19,   19, 0x09,
     619,  611,   19,   19, 0x09,
     666,   19,   19,   19, 0x09,
     684,   19,   19,   19, 0x09,
     708,  702,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FileMessageArchive[] = {
    "FileMessageArchive\0\0AStreamJid\0"
    "capabilitiesChanged(Jid)\0AId,AError\0"
    "requestFailed(QString,XmppError)\0"
    "AId,AHeader\0collectionSaved(QString,IArchiveHeader)\0"
    "AId,AHeaders\0headersLoaded(QString,QList<IArchiveHeader>)\0"
    "AId,ACollection\0"
    "collectionLoaded(QString,IArchiveCollection)\0"
    "AId,ARequest\0collectionsRemoved(QString,IArchiveRequest)\0"
    "AId,AModifs\0"
    "modificationsLoaded(QString,IArchiveModifications)\0"
    "AStreamJid,AHeader\0"
    "fileCollectionOpened(Jid,IArchiveHeader)\0"
    "fileCollectionSaved(Jid,IArchiveHeader)\0"
    "fileCollectionRemoved(Jid,IArchiveHeader)\0"
    "onWorkingThreadFinished()\0"
    "onArchivePrefsOpened(Jid)\0"
    "onArchivePrefsClosed(Jid)\0AWriter\0"
    "onCollectionWriterDestroyed(CollectionWriter*)\0"
    "onOptionsOpened()\0onOptionsClosed()\0"
    "AInfo\0onDiscoInfoReceived(IDiscoInfo)\0"
};

const QMetaObject FileMessageArchive::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileMessageArchive,
      qt_meta_data_FileMessageArchive, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileMessageArchive::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileMessageArchive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileMessageArchive::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileMessageArchive))
        return static_cast<void*>(const_cast< FileMessageArchive*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< FileMessageArchive*>(this));
    if (!strcmp(_clname, "IFileMessageArchive"))
        return static_cast< IFileMessageArchive*>(const_cast< FileMessageArchive*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< FileMessageArchive*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IArchiveEngine/1.1"))
        return static_cast< IArchiveEngine*>(const_cast< FileMessageArchive*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IFileMessageArchive/1.0"))
        return static_cast< IFileMessageArchive*>(const_cast< FileMessageArchive*>(this));
    return QObject::qt_metacast(_clname);
}

int FileMessageArchive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: capabilitiesChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 1: requestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 2: collectionSaved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveHeader(*)>(_a[2]))); break;
        case 3: headersLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<IArchiveHeader>(*)>(_a[2]))); break;
        case 4: collectionLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveCollection(*)>(_a[2]))); break;
        case 5: collectionsRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveRequest(*)>(_a[2]))); break;
        case 6: modificationsLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveModifications(*)>(_a[2]))); break;
        case 7: fileCollectionOpened((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const IArchiveHeader(*)>(_a[2]))); break;
        case 8: fileCollectionSaved((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const IArchiveHeader(*)>(_a[2]))); break;
        case 9: fileCollectionRemoved((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const IArchiveHeader(*)>(_a[2]))); break;
        case 10: onWorkingThreadFinished(); break;
        case 11: onArchivePrefsOpened((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 12: onArchivePrefsClosed((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 13: onCollectionWriterDestroyed((*reinterpret_cast< CollectionWriter*(*)>(_a[1]))); break;
        case 14: onOptionsOpened(); break;
        case 15: onOptionsClosed(); break;
        case 16: onDiscoInfoReceived((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void FileMessageArchive::capabilitiesChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileMessageArchive::requestFailed(const QString & _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileMessageArchive::collectionSaved(const QString & _t1, const IArchiveHeader & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileMessageArchive::headersLoaded(const QString & _t1, const QList<IArchiveHeader> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileMessageArchive::collectionLoaded(const QString & _t1, const IArchiveCollection & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FileMessageArchive::collectionsRemoved(const QString & _t1, const IArchiveRequest & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FileMessageArchive::modificationsLoaded(const QString & _t1, const IArchiveModifications & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FileMessageArchive::fileCollectionOpened(const Jid & _t1, const IArchiveHeader & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FileMessageArchive::fileCollectionSaved(const Jid & _t1, const IArchiveHeader & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FileMessageArchive::fileCollectionRemoved(const Jid & _t1, const IArchiveHeader & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
