/****************************************************************************
** Meta object code from reading C++ file 'filearchiveoptions.h'
**
** Created: Sat Jan 26 02:25:35 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filearchiveoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filearchiveoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileArchiveOptions[] = {

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
      20,   19,   19,   19, 0x05,
      31,   19,   19,   19, 0x05,
      44,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   19,   19,   19, 0x0a,
      65,   19,   19,   19, 0x0a,
      73,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FileArchiveOptions[] = {
    "FileArchiveOptions\0\0modified()\0"
    "childApply()\0childReset()\0apply()\0"
    "reset()\0onSelectLocationFolder()\0"
};

const QMetaObject FileArchiveOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FileArchiveOptions,
      qt_meta_data_FileArchiveOptions, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileArchiveOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileArchiveOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileArchiveOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileArchiveOptions))
        return static_cast<void*>(const_cast< FileArchiveOptions*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< FileArchiveOptions*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< FileArchiveOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int FileArchiveOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: modified(); break;
        case 1: childApply(); break;
        case 2: childReset(); break;
        case 3: apply(); break;
        case 4: reset(); break;
        case 5: onSelectLocationFolder(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void FileArchiveOptions::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void FileArchiveOptions::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FileArchiveOptions::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
