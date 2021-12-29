/****************************************************************************
** Meta object code from reading C++ file 'addlegacycontactdialog.h'
**
** Created: Sat Jan 26 02:19:22 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addlegacycontactdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addlegacycontactdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddLegacyContactDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   24,   23,   23, 0x09,
      97,   84,   23,   23, 0x09,
     139,  128,   23,   23, 0x09,
     182,  174,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AddLegacyContactDialog[] = {
    "AddLegacyContactDialog\0\0AId,ADesc,APrompt\0"
    "onPromptReceived(QString,QString,QString)\0"
    "AId,AUserJid\0onUserJidReceived(QString,Jid)\0"
    "AId,AError\0onErrorReceived(QString,XmppError)\0"
    "AButton\0onDialogButtonsClicked(QAbstractButton*)\0"
};

const QMetaObject AddLegacyContactDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddLegacyContactDialog,
      qt_meta_data_AddLegacyContactDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddLegacyContactDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddLegacyContactDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddLegacyContactDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddLegacyContactDialog))
        return static_cast<void*>(const_cast< AddLegacyContactDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddLegacyContactDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onPromptReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: onUserJidReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 2: onErrorReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 3: onDialogButtonsClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
