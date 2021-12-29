/****************************************************************************
** Meta object code from reading C++ file 'accountmanager.h'
**
** Created: Sat Jan 26 02:06:22 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "accountmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AccountManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   16,   15,   15, 0x05,
      45,   16,   15,   15, 0x05,
      62,   16,   15,   15, 0x05,
      80,   16,   15,   15, 0x05,
     113,   99,   15,   15, 0x05,
     155,  144,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     181,  172,   15,   15, 0x09,
     206,  172,   15,   15, 0x09,
     231,   15,   15,   15, 0x09,
     249,   15,   15,   15, 0x09,
     267,   15,   15,   15, 0x09,
     302,  294,   15,   15, 0x09,
     337,  331,   15,   15, 0x09,
     398,  374,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AccountManager[] = {
    "AccountManager\0\0AAccount\0appended(IAccount*)\0"
    "shown(IAccount*)\0hidden(IAccount*)\0"
    "removed(IAccount*)\0AAcount,ANode\0"
    "changed(IAccount*,OptionsNode)\0"
    "AAccountId\0destroyed(QUuid)\0AProfile\0"
    "onProfileOpened(QString)\0"
    "onProfileClosed(QString)\0onOptionsOpened()\0"
    "onOptionsClosed()\0onShowAccountOptions(bool)\0"
    "AActive\0onAccountActiveChanged(bool)\0"
    "ANode\0onAccountOptionsChanged(OptionsNode)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
};

const QMetaObject AccountManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AccountManager,
      qt_meta_data_AccountManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AccountManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AccountManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AccountManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AccountManager))
        return static_cast<void*>(const_cast< AccountManager*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< AccountManager*>(this));
    if (!strcmp(_clname, "IAccountManager"))
        return static_cast< IAccountManager*>(const_cast< AccountManager*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< AccountManager*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< AccountManager*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IAccountManager/1.0"))
        return static_cast< IAccountManager*>(const_cast< AccountManager*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< AccountManager*>(this));
    return QObject::qt_metacast(_clname);
}

int AccountManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: appended((*reinterpret_cast< IAccount*(*)>(_a[1]))); break;
        case 1: shown((*reinterpret_cast< IAccount*(*)>(_a[1]))); break;
        case 2: hidden((*reinterpret_cast< IAccount*(*)>(_a[1]))); break;
        case 3: removed((*reinterpret_cast< IAccount*(*)>(_a[1]))); break;
        case 4: changed((*reinterpret_cast< IAccount*(*)>(_a[1])),(*reinterpret_cast< const OptionsNode(*)>(_a[2]))); break;
        case 5: destroyed((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 6: onProfileOpened((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: onProfileClosed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: onOptionsOpened(); break;
        case 9: onOptionsClosed(); break;
        case 10: onShowAccountOptions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: onAccountActiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: onAccountOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 13: onRosterIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void AccountManager::appended(IAccount * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AccountManager::shown(IAccount * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AccountManager::hidden(IAccount * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AccountManager::removed(IAccount * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AccountManager::changed(IAccount * _t1, const OptionsNode & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AccountManager::destroyed(const QUuid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
