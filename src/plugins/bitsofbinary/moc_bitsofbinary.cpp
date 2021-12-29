/****************************************************************************
** Meta object code from reading C++ file 'bitsofbinary.h'
**
** Created: Sat Jan 26 02:24:14 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bitsofbinary.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitsofbinary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BitsOfBinary[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   14,   13,   13, 0x05,
     112,   94,   13,   13, 0x05,
     154,  143,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     189,  177,   13,   13, 0x09,
     223,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BitsOfBinary[] = {
    "BitsOfBinary\0\0AContentId,AType,AData,AMaxAge\0"
    "binaryCached(QString,QString,QByteArray,quint64)\0"
    "AContentId,AError\0binaryError(QString,XmppError)\0"
    "AContentId\0binaryRemoved(QString)\0"
    "AXmppStream\0onXmppStreamCreated(IXmppStream*)\0"
    "onOfflineTimerTimeout()\0"
};

const QMetaObject BitsOfBinary::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BitsOfBinary,
      qt_meta_data_BitsOfBinary, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BitsOfBinary::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BitsOfBinary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BitsOfBinary::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BitsOfBinary))
        return static_cast<void*>(const_cast< BitsOfBinary*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< BitsOfBinary*>(this));
    if (!strcmp(_clname, "IBitsOfBinary"))
        return static_cast< IBitsOfBinary*>(const_cast< BitsOfBinary*>(this));
    if (!strcmp(_clname, "IXmppStanzaHadler"))
        return static_cast< IXmppStanzaHadler*>(const_cast< BitsOfBinary*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< BitsOfBinary*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< BitsOfBinary*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< BitsOfBinary*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IBitsOfBinary/1.1"))
        return static_cast< IBitsOfBinary*>(const_cast< BitsOfBinary*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppStanzaHadler/1.0"))
        return static_cast< IXmppStanzaHadler*>(const_cast< BitsOfBinary*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< BitsOfBinary*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< BitsOfBinary*>(this));
    return QObject::qt_metacast(_clname);
}

int BitsOfBinary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: binaryCached((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 1: binaryError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 2: binaryRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: onXmppStreamCreated((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 4: onOfflineTimerTimeout(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BitsOfBinary::binaryCached(const QString & _t1, const QString & _t2, const QByteArray & _t3, quint64 _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BitsOfBinary::binaryError(const QString & _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BitsOfBinary::binaryRemoved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
