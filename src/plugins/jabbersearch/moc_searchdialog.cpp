/****************************************************************************
** Meta object code from reading C++ file 'searchdialog.h'
**
** Created: Sat Jan 26 02:19:01 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "searchdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SearchDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   14,   13,   13, 0x09,
      76,   64,   13,   13, 0x09,
     125,  114,   13,   13, 0x09,
     158,   13,   13,   13, 0x09,
     197,  189,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SearchDialog[] = {
    "SearchDialog\0\0AId,AFields\0"
    "onSearchFields(QString,ISearchFields)\0"
    "AId,AResult\0onSearchResult(QString,ISearchResult)\0"
    "AId,AError\0onSearchError(QString,XmppError)\0"
    "onToolBarActionTriggered(bool)\0AButton\0"
    "onDialogButtonClicked(QAbstractButton*)\0"
};

const QMetaObject SearchDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SearchDialog,
      qt_meta_data_SearchDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchDialog))
        return static_cast<void*>(const_cast< SearchDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onSearchFields((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ISearchFields(*)>(_a[2]))); break;
        case 1: onSearchResult((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ISearchResult(*)>(_a[2]))); break;
        case 2: onSearchError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 3: onToolBarActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: onDialogButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
