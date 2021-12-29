/****************************************************************************
** Meta object code from reading C++ file 'addcontactdialog.h'
**
** Created: Sat Jan 26 02:05:59 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addcontactdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addcontactdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddContactDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   17,   17,   17, 0x09,
      55,   17,   17,   17, 0x09,
      98,   86,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AddContactDialog[] = {
    "AddContactDialog\0\0dialogDestroyed()\0"
    "onDialogAccepted()\0onToolBarActionTriggered(bool)\0"
    "AContactJid\0onVCardReceived(Jid)\0"
};

const QMetaObject AddContactDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddContactDialog,
      qt_meta_data_AddContactDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddContactDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddContactDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddContactDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddContactDialog))
        return static_cast<void*>(const_cast< AddContactDialog*>(this));
    if (!strcmp(_clname, "IAddContactDialog"))
        return static_cast< IAddContactDialog*>(const_cast< AddContactDialog*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IAddContactDialog/1.0"))
        return static_cast< IAddContactDialog*>(const_cast< AddContactDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddContactDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dialogDestroyed(); break;
        case 1: onDialogAccepted(); break;
        case 2: onToolBarActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: onVCardReceived((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AddContactDialog::dialogDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
