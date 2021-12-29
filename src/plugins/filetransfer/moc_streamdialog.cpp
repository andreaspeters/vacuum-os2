/****************************************************************************
** Meta object code from reading C++ file 'streamdialog.h'
**
** Created: Sat Jan 26 02:23:18 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "streamdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StreamDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   13,   13,   13, 0x09,
      55,   13,   13,   13, 0x09,
      78,   13,   13,   13, 0x09,
     106,   13,   13,   13, 0x09,
     126,   13,   13,   13, 0x09,
     160,  152,   13,   13, 0x09,
     207,  200,   13,   13, 0x09,
     253,  236,   13,   13, 0x09,
     305,  294,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_StreamDialog[] = {
    "StreamDialog\0\0dialogDestroyed()\0"
    "onStreamStateChanged()\0onStreamSpeedChanged()\0"
    "onStreamPropertiesChanged()\0"
    "onStreamDestroyed()\0onFileButtonClicked(bool)\0"
    "AButton\0onDialogButtonClicked(QAbstractButton*)\0"
    "AIndex\0onMethodSettingsChanged(int)\0"
    "AProfileId,AName\0"
    "onSettingsProfileInserted(QUuid,QString)\0"
    "AProfileId\0onSettingsProfileRemoved(QUuid)\0"
};

const QMetaObject StreamDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_StreamDialog,
      qt_meta_data_StreamDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StreamDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StreamDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StreamDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StreamDialog))
        return static_cast<void*>(const_cast< StreamDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int StreamDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dialogDestroyed(); break;
        case 1: onStreamStateChanged(); break;
        case 2: onStreamSpeedChanged(); break;
        case 3: onStreamPropertiesChanged(); break;
        case 4: onStreamDestroyed(); break;
        case 5: onFileButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: onDialogButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 7: onMethodSettingsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: onSettingsProfileInserted((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: onSettingsProfileRemoved((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void StreamDialog::dialogDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
