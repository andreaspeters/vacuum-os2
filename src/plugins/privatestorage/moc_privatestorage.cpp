/****************************************************************************
** Meta object code from reading C++ file 'privatestorage.h'
**
** Created: Sat Jan 26 02:06:34 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "privatestorage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'privatestorage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrivateStorage[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   16,   15,   15, 0x05,
      57,   46,   15,   15, 0x05,
     110,   86,   15,   15, 0x05,
     145,   86,   15,   15, 0x05,
     181,   86,   15,   15, 0x05,
     249,  218,   15,   15, 0x05,
     282,   16,   15,   15, 0x05,
     313,   16,   15,   15, 0x05,
     338,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     369,  357,   15,   15, 0x09,
     398,  357,   15,   15, 0x09,
     433,  357,   15,   15, 0x09,
     486,  462,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PrivateStorage[] = {
    "PrivateStorage\0\0AStreamJid\0"
    "storageOpened(Jid)\0AId,AError\0"
    "dataError(QString,XmppError)\0"
    "AId,AStreamJid,AElement\0"
    "dataSaved(QString,Jid,QDomElement)\0"
    "dataLoaded(QString,Jid,QDomElement)\0"
    "dataRemoved(QString,Jid,QDomElement)\0"
    "AStreamJid,ATagName,ANamespace\0"
    "dataChanged(Jid,QString,QString)\0"
    "storageNotifyAboutToClose(Jid)\0"
    "storageAboutToClose(Jid)\0storageClosed(Jid)\0"
    "AXmppStream\0onStreamOpened(IXmppStream*)\0"
    "onStreamAboutToClose(IXmppStream*)\0"
    "onStreamClosed(IXmppStream*)\0"
    "APresence,AShow,AStatus\0"
    "onPresenceAboutToClose(IPresence*,int,QString)\0"
};

const QMetaObject PrivateStorage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PrivateStorage,
      qt_meta_data_PrivateStorage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrivateStorage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrivateStorage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrivateStorage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrivateStorage))
        return static_cast<void*>(const_cast< PrivateStorage*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< PrivateStorage*>(this));
    if (!strcmp(_clname, "IPrivateStorage"))
        return static_cast< IPrivateStorage*>(const_cast< PrivateStorage*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< PrivateStorage*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< PrivateStorage*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< PrivateStorage*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IPrivateStorage/1.2"))
        return static_cast< IPrivateStorage*>(const_cast< PrivateStorage*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< PrivateStorage*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< PrivateStorage*>(this));
    return QObject::qt_metacast(_clname);
}

int PrivateStorage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: storageOpened((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 1: dataError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 2: dataSaved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< const QDomElement(*)>(_a[3]))); break;
        case 3: dataLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< const QDomElement(*)>(_a[3]))); break;
        case 4: dataRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< const QDomElement(*)>(_a[3]))); break;
        case 5: dataChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: storageNotifyAboutToClose((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 7: storageAboutToClose((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 8: storageClosed((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 9: onStreamOpened((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 10: onStreamAboutToClose((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 11: onStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 12: onPresenceAboutToClose((*reinterpret_cast< IPresence*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PrivateStorage::storageOpened(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PrivateStorage::dataError(const QString & _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PrivateStorage::dataSaved(const QString & _t1, const Jid & _t2, const QDomElement & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PrivateStorage::dataLoaded(const QString & _t1, const Jid & _t2, const QDomElement & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PrivateStorage::dataRemoved(const QString & _t1, const Jid & _t2, const QDomElement & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PrivateStorage::dataChanged(const Jid & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PrivateStorage::storageNotifyAboutToClose(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PrivateStorage::storageAboutToClose(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PrivateStorage::storageClosed(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
