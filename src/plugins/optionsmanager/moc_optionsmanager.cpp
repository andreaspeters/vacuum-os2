/****************************************************************************
** Meta object code from reading C++ file 'optionsmanager.h'
**
** Created: Sat Jan 26 01:40:30 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "optionsmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionsManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   16,   15,   15, 0x05,
      47,   16,   15,   15, 0x05,
      70,   16,   15,   15, 0x05,
     111,   93,   15,   15, 0x05,
     143,   16,   15,   15, 0x05,
     175,  167,   15,   15, 0x05,
     214,  167,   15,   15, 0x05,
     258,  252,   15,   15, 0x05,
     304,  252,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     349,  252,   15,   15, 0x09,
     379,   15,   15,   15, 0x09,
     404,   15,   15,   15, 0x09,
     434,   15,   15,   15, 0x09,
     468,   15,   15,   15, 0x09,
     492,   15,   15,   15, 0x09,
     517,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_OptionsManager[] = {
    "OptionsManager\0\0AProfile\0profileAdded(QString)\0"
    "profileOpened(QString)\0profileClosed(QString)\0"
    "AProfile,ANewName\0profileRenamed(QString,QString)\0"
    "profileRemoved(QString)\0AHolder\0"
    "optionsHolderInserted(IOptionsHolder*)\0"
    "optionsHolderRemoved(IOptionsHolder*)\0"
    "ANode\0optionsDialogNodeInserted(IOptionsDialogNode)\0"
    "optionsDialogNodeRemoved(IOptionsDialogNode)\0"
    "onOptionsChanged(OptionsNode)\0"
    "onOptionsDialogApplied()\0"
    "onChangeProfileByAction(bool)\0"
    "onShowOptionsDialogByAction(bool)\0"
    "onLoginDialogRejected()\0"
    "onAutoSaveTimerTimeout()\0onAboutToQuit()\0"
};

const QMetaObject OptionsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OptionsManager,
      qt_meta_data_OptionsManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionsManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsManager))
        return static_cast<void*>(const_cast< OptionsManager*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< OptionsManager*>(this));
    if (!strcmp(_clname, "IOptionsManager"))
        return static_cast< IOptionsManager*>(const_cast< OptionsManager*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< OptionsManager*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< OptionsManager*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsManager/1.0"))
        return static_cast< IOptionsManager*>(const_cast< OptionsManager*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< OptionsManager*>(this));
    return QObject::qt_metacast(_clname);
}

int OptionsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: profileAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: profileOpened((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: profileClosed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: profileRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: profileRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: optionsHolderInserted((*reinterpret_cast< IOptionsHolder*(*)>(_a[1]))); break;
        case 6: optionsHolderRemoved((*reinterpret_cast< IOptionsHolder*(*)>(_a[1]))); break;
        case 7: optionsDialogNodeInserted((*reinterpret_cast< const IOptionsDialogNode(*)>(_a[1]))); break;
        case 8: optionsDialogNodeRemoved((*reinterpret_cast< const IOptionsDialogNode(*)>(_a[1]))); break;
        case 9: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 10: onOptionsDialogApplied(); break;
        case 11: onChangeProfileByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: onShowOptionsDialogByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: onLoginDialogRejected(); break;
        case 14: onAutoSaveTimerTimeout(); break;
        case 15: onAboutToQuit(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void OptionsManager::profileAdded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OptionsManager::profileOpened(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OptionsManager::profileClosed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OptionsManager::profileRenamed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OptionsManager::profileRemoved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OptionsManager::optionsHolderInserted(IOptionsHolder * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OptionsManager::optionsHolderRemoved(IOptionsHolder * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OptionsManager::optionsDialogNodeInserted(const IOptionsDialogNode & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OptionsManager::optionsDialogNodeRemoved(const IOptionsDialogNode & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
