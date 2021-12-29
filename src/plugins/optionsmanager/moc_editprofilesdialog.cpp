/****************************************************************************
** Meta object code from reading C++ file 'editprofilesdialog.h'
**
** Created: Sat Jan 26 01:40:37 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editprofilesdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editprofilesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditProfilesDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x09,
      42,   19,   19,   19, 0x09,
      69,   19,   19,   19, 0x09,
      94,   19,   19,   19, 0x09,
     128,  119,   19,   19, 0x09,
     170,  152,   19,   19, 0x09,
     204,  119,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_EditProfilesDialog[] = {
    "EditProfilesDialog\0\0onAddProfileClicked()\0"
    "onPasswordProfileClicked()\0"
    "onRenameProfileClicked()\0"
    "onRemoveProfileClicked()\0AProfile\0"
    "onProfileAdded(QString)\0AProfile,ANewName\0"
    "onProfileRenamed(QString,QString)\0"
    "onProfileRemoved(QString)\0"
};

const QMetaObject EditProfilesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditProfilesDialog,
      qt_meta_data_EditProfilesDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditProfilesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditProfilesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditProfilesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditProfilesDialog))
        return static_cast<void*>(const_cast< EditProfilesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditProfilesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onAddProfileClicked(); break;
        case 1: onPasswordProfileClicked(); break;
        case 2: onRenameProfileClicked(); break;
        case 3: onRemoveProfileClicked(); break;
        case 4: onProfileAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: onProfileRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: onProfileRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
