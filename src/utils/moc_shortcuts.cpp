/****************************************************************************
** Meta object code from reading C++ file 'shortcuts.h'
**
** Created: Sat Jan 26 00:39:32 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "shortcuts.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcuts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Shortcuts[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   11,   10,   10, 0x05,
      38,   11,   10,   10, 0x05,
      64,   11,   10,   10, 0x05,
     101,   89,   10,   10, 0x05,
     146,  134,   10,   10, 0x05,
     181,  134,   10,   10, 0x05,
     228,  215,   10,   10, 0x05,
     258,  134,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     294,   10,   10,   10, 0x09,
     316,   10,   10,   10, 0x09,
     352,  344,   10,   10, 0x09,
     380,  344,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Shortcuts[] = {
    "Shortcuts\0\0AId\0groupDeclared(QString)\0"
    "shortcutDeclared(QString)\0"
    "shortcutUpdated(QString)\0AId,AObject\0"
    "shortcutBinded(QString,QObject*)\0"
    "AId,AWidget\0shortcutInserted(QString,QWidget*)\0"
    "shortcutRemoved(QString,QWidget*)\0"
    "AId,AEnabled\0shortcutEnabled(QString,bool)\0"
    "shortcutActivated(QString,QWidget*)\0"
    "onShortcutActivated()\0onGlobalShortcutActivated()\0"
    "AObject\0onWidgetDestroyed(QObject*)\0"
    "onObjectDestroyed(QObject*)\0"
};

const QMetaObject Shortcuts::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Shortcuts,
      qt_meta_data_Shortcuts, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Shortcuts::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Shortcuts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Shortcuts::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Shortcuts))
        return static_cast<void*>(const_cast< Shortcuts*>(this));
    return QObject::qt_metacast(_clname);
}

int Shortcuts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: groupDeclared((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: shortcutDeclared((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: shortcutUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: shortcutBinded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 4: shortcutInserted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 5: shortcutRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 6: shortcutEnabled((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: shortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 8: onShortcutActivated(); break;
        case 9: onGlobalShortcutActivated(); break;
        case 10: onWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 11: onObjectDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Shortcuts::groupDeclared(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Shortcuts::shortcutDeclared(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Shortcuts::shortcutUpdated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Shortcuts::shortcutBinded(const QString & _t1, QObject * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Shortcuts::shortcutInserted(const QString & _t1, QWidget * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Shortcuts::shortcutRemoved(const QString & _t1, QWidget * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Shortcuts::shortcutEnabled(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Shortcuts::shortcutActivated(const QString & _t1, QWidget * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
