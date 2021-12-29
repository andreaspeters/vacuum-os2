/****************************************************************************
** Meta object code from reading C++ file 'archivestreamoptions.h'
**
** Created: Sat Jan 26 02:20:03 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "archivestreamoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'archivestreamoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArchiveDelegate[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   17,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ArchiveDelegate[] = {
    "ArchiveDelegate\0\0AIndex\0"
    "onExpireIndexChanged(int)\0"
};

const QMetaObject ArchiveDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_ArchiveDelegate,
      qt_meta_data_ArchiveDelegate, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArchiveDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArchiveDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArchiveDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArchiveDelegate))
        return static_cast<void*>(const_cast< ArchiveDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int ArchiveDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onExpireIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ArchiveStreamOptions[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      33,   21,   21,   21, 0x05,
      46,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   21,   21,   21, 0x0a,
      67,   21,   21,   21, 0x0a,
      75,   21,   21,   21, 0x09,
      98,   21,   21,   21, 0x09,
     131,  124,   21,   21, 0x09,
     168,  157,   21,   21, 0x09,
     199,  195,   21,   21, 0x09,
     245,  234,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ArchiveStreamOptions[] = {
    "ArchiveStreamOptions\0\0modified()\0"
    "childApply()\0childReset()\0apply()\0"
    "reset()\0onAddItemPrefClicked()\0"
    "onRemoveItemPrefClicked()\0AIndex\0"
    "onExpireIndexChanged(int)\0AStreamJid\0"
    "onArchivePrefsChanged(Jid)\0AId\0"
    "onArchiveRequestCompleted(QString)\0"
    "AId,AError\0onArchiveRequestFailed(QString,XmppError)\0"
};

const QMetaObject ArchiveStreamOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ArchiveStreamOptions,
      qt_meta_data_ArchiveStreamOptions, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArchiveStreamOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArchiveStreamOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArchiveStreamOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArchiveStreamOptions))
        return static_cast<void*>(const_cast< ArchiveStreamOptions*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< ArchiveStreamOptions*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< ArchiveStreamOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int ArchiveStreamOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 5: onAddItemPrefClicked(); break;
        case 6: onRemoveItemPrefClicked(); break;
        case 7: onExpireIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: onArchivePrefsChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 9: onArchiveRequestCompleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: onArchiveRequestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ArchiveStreamOptions::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ArchiveStreamOptions::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ArchiveStreamOptions::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
