/****************************************************************************
** Meta object code from reading C++ file 'editbookmarksdialog.h'
**
** Created: Sat Jan 26 02:18:07 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editbookmarksdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editbookmarksdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditBookmarksDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   20,   20,   20, 0x09,
      61,   20,   20,   20, 0x09,
      86,   80,   20,   20, 0x09,
     138,  130,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_EditBookmarksDialog[] = {
    "EditBookmarksDialog\0\0dialogDestroyed()\0"
    "onEditButtonClicked()\0onDialogAccepted()\0"
    "AItem\0onTableItemDoubleClicked(QTableWidgetItem*)\0"
    "AColumn\0onSortingStateChange(int)\0"
};

const QMetaObject EditBookmarksDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditBookmarksDialog,
      qt_meta_data_EditBookmarksDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditBookmarksDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditBookmarksDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditBookmarksDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditBookmarksDialog))
        return static_cast<void*>(const_cast< EditBookmarksDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditBookmarksDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dialogDestroyed(); break;
        case 1: onEditButtonClicked(); break;
        case 2: onDialogAccepted(); break;
        case 3: onTableItemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: onSortingStateChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void EditBookmarksDialog::dialogDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
