/****************************************************************************
** Meta object code from reading C++ file 'spellchecker.h'
**
** Created: Sat Jan 26 03:26:15 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "spellchecker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spellchecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpellChecker[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   14,   13,   13, 0x05,
      54,   48,   13,   13, 0x05,
      94,   88,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     127,   13,   13,   13, 0x09,
     149,   13,   13,   13, 0x09,
     170,   13,   13,   13, 0x09,
     196,   13,   13,   13, 0x09,
     235,  227,   13,   13, 0x09,
     285,  269,   13,   13, 0x09,
     340,  332,   13,   13, 0x09,
     370,   13,   13,   13, 0x09,
     394,  388,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SpellChecker[] = {
    "SpellChecker\0\0AEnabled\0spellEnableChanged(bool)\0"
    "ADict\0currentDictionaryChanged(QString)\0"
    "AWord\0wordAddedToPersonalDict(QString)\0"
    "onChangeSpellEnable()\0onChangeDictionary()\0"
    "onRepairWordUnderCursor()\0"
    "onAddUnknownWordToDictionary()\0AWidget\0"
    "onEditWidgetCreated(IEditWidget*)\0"
    "APosition,AMenu\0"
    "onEditWidgetContextMenuRequested(QPoint,Menu*)\0"
    "AObject\0onTextEditDestroyed(QObject*)\0"
    "onOptionsOpened()\0ANode\0"
    "onOptionsChanged(OptionsNode)\0"
};

const QMetaObject SpellChecker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpellChecker,
      qt_meta_data_SpellChecker, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpellChecker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpellChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpellChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpellChecker))
        return static_cast<void*>(const_cast< SpellChecker*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< SpellChecker*>(this));
    if (!strcmp(_clname, "ISpellChecker"))
        return static_cast< ISpellChecker*>(const_cast< SpellChecker*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< SpellChecker*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ISpellChecker/1.0"))
        return static_cast< ISpellChecker*>(const_cast< SpellChecker*>(this));
    return QObject::qt_metacast(_clname);
}

int SpellChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: spellEnableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: currentDictionaryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: wordAddedToPersonalDict((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: onChangeSpellEnable(); break;
        case 4: onChangeDictionary(); break;
        case 5: onRepairWordUnderCursor(); break;
        case 6: onAddUnknownWordToDictionary(); break;
        case 7: onEditWidgetCreated((*reinterpret_cast< IEditWidget*(*)>(_a[1]))); break;
        case 8: onEditWidgetContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< Menu*(*)>(_a[2]))); break;
        case 9: onTextEditDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 10: onOptionsOpened(); break;
        case 11: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SpellChecker::spellEnableChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpellChecker::currentDictionaryChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SpellChecker::wordAddedToPersonalDict(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
