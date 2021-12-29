/****************************************************************************
** Meta object code from reading C++ file 'setuppluginsdialog.h'
**
** Created: Sat Jan 26 01:23:18 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "setuppluginsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setuppluginsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SetupPluginsDialog[] = {

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
      27,   20,   19,   19, 0x09,
      76,   57,   19,   19, 0x09,
     144,  136,   19,   19, 0x09,
     190,  184,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SetupPluginsDialog[] = {
    "SetupPluginsDialog\0\0AIndex\0"
    "onCurrentLanguageChanged(int)\0"
    "ACurrent,APrevious\0"
    "onCurrentPluginChanged(QTableWidgetItem*,QTableWidgetItem*)\0"
    "AButton\0onDialogButtonClicked(QAbstractButton*)\0"
    "ALink\0onHomePageLinkActivated(QString)\0"
};

const QMetaObject SetupPluginsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SetupPluginsDialog,
      qt_meta_data_SetupPluginsDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SetupPluginsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SetupPluginsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SetupPluginsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetupPluginsDialog))
        return static_cast<void*>(const_cast< SetupPluginsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SetupPluginsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onCurrentLanguageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: onCurrentPluginChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 2: onDialogButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: onHomePageLinkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
