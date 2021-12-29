/****************************************************************************
** Meta object code from reading C++ file 'vcarddialog.h'
**
** Created: Sat Jan 26 02:15:32 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vcarddialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vcarddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCardDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x09,
      30,   12,   12,   12, 0x09,
      56,   49,   12,   12, 0x09,
      80,   12,   12,   12, 0x09,
     104,   12,   12,   12, 0x09,
     125,   12,   12,   12, 0x09,
     146,   12,   12,   12, 0x09,
     168,   12,   12,   12, 0x09,
     188,   12,   12,   12, 0x09,
     208,   12,   12,   12, 0x09,
     229,   12,   12,   12, 0x09,
     249,   12,   12,   12, 0x09,
     278,  272,   12,   12, 0x09,
     321,   12,   12,   12, 0x09,
     341,   12,   12,   12, 0x09,
     364,  272,   12,   12, 0x09,
     415,  407,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VCardDialog[] = {
    "VCardDialog\0\0onVCardUpdated()\0"
    "onVCardPublished()\0AError\0"
    "onVCardError(XmppError)\0onUpdateDialogTimeout()\0"
    "onPhotoSaveClicked()\0onPhotoLoadClicked()\0"
    "onPhotoClearClicked()\0onLogoSaveClicked()\0"
    "onLogoLoadClicked()\0onLogoClearClicked()\0"
    "onEmailAddClicked()\0onEmailDeleteClicked()\0"
    "AItem\0onEmailItemDoubleClicked(QListWidgetItem*)\0"
    "onPhoneAddClicked()\0onPhoneDeleteClicked()\0"
    "onPhoneItemDoubleClicked(QListWidgetItem*)\0"
    "AButton\0onDialogButtonClicked(QAbstractButton*)\0"
};

const QMetaObject VCardDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_VCardDialog,
      qt_meta_data_VCardDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCardDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCardDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCardDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCardDialog))
        return static_cast<void*>(const_cast< VCardDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int VCardDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onVCardUpdated(); break;
        case 1: onVCardPublished(); break;
        case 2: onVCardError((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 3: onUpdateDialogTimeout(); break;
        case 4: onPhotoSaveClicked(); break;
        case 5: onPhotoLoadClicked(); break;
        case 6: onPhotoClearClicked(); break;
        case 7: onLogoSaveClicked(); break;
        case 8: onLogoLoadClicked(); break;
        case 9: onLogoClearClicked(); break;
        case 10: onEmailAddClicked(); break;
        case 11: onEmailDeleteClicked(); break;
        case 12: onEmailItemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 13: onPhoneAddClicked(); break;
        case 14: onPhoneDeleteClicked(); break;
        case 15: onPhoneItemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 16: onDialogButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
