/****************************************************************************
** Meta object code from reading C++ file 'vcard.h'
**
** Created: Sat Jan 26 02:15:27 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vcard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vcard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCard[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      22,    6,    6,    6, 0x05,
      46,   39,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   68,    6,    6, 0x09,
     101,   68,    6,    6, 0x09,
     142,  123,    6,    6, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VCard[] = {
    "VCard\0\0vcardUpdated()\0vcardPublished()\0"
    "AError\0vcardError(XmppError)\0AContactJid\0"
    "onVCardReceived(Jid)\0onVCardPublished(Jid)\0"
    "AContactJid,AError\0onVCardError(Jid,XmppError)\0"
};

const QMetaObject VCard::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VCard,
      qt_meta_data_VCard, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCard))
        return static_cast<void*>(const_cast< VCard*>(this));
    if (!strcmp(_clname, "IVCard"))
        return static_cast< IVCard*>(const_cast< VCard*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IVCard/1.2"))
        return static_cast< IVCard*>(const_cast< VCard*>(this));
    return QObject::qt_metacast(_clname);
}

int VCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: vcardUpdated(); break;
        case 1: vcardPublished(); break;
        case 2: vcardError((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 3: onVCardReceived((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 4: onVCardPublished((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 5: onVCardError((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void VCard::vcardUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void VCard::vcardPublished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void VCard::vcardError(const XmppError & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
