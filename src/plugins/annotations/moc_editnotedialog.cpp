/****************************************************************************
** Meta object code from reading C++ file 'editnotedialog.h'
**
** Created: Sat Jan 26 02:22:07 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editnotedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editnotedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditNoteDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_EditNoteDialog[] = {
    "EditNoteDialog\0\0dialogDestroyed()\0"
    "onDialogAccepted()\0"
};

const QMetaObject EditNoteDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditNoteDialog,
      qt_meta_data_EditNoteDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditNoteDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditNoteDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditNoteDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditNoteDialog))
        return static_cast<void*>(const_cast< EditNoteDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditNoteDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dialogDestroyed(); break;
        case 1: onDialogAccepted(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void EditNoteDialog::dialogDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
