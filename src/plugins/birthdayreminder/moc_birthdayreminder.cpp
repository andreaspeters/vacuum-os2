/****************************************************************************
** Meta object code from reading C++ file 'birthdayreminder.h'
**
** Created: Sat Jan 26 02:25:01 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "birthdayreminder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'birthdayreminder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BirthdayReminder[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      54,   44,   17,   17, 0x09,
      83,   44,   17,   17, 0x09,
     117,  110,   17,   17, 0x09,
     180,  154,   17,   17, 0x09,
     256,  244,   17,   17, 0x09,
     299,  277,   17,   17, 0x09,
     354,   17,   17,   17, 0x09,
     372,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BirthdayReminder[] = {
    "BirthdayReminder\0\0onShowNotificationTimer()\0"
    "ANotifyId\0onNotificationActivated(int)\0"
    "onNotificationRemoved(int)\0AIndex\0"
    "onRosterIndexInserted(IRosterIndex*)\0"
    "AIndex,ALabelId,AToolTips\0"
    "onRosterIndexToolTips(IRosterIndex*,quint32,QMap<int,QString>&)\0"
    "AContactJid\0onVCardReceived(Jid)\0"
    "ARoster,AItem,ABefore\0"
    "onRosterItemReceived(IRoster*,IRosterItem,IRosterItem)\0"
    "onOptionsOpened()\0onOptionsClosed()\0"
};

const QMetaObject BirthdayReminder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BirthdayReminder,
      qt_meta_data_BirthdayReminder, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BirthdayReminder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BirthdayReminder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BirthdayReminder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BirthdayReminder))
        return static_cast<void*>(const_cast< BirthdayReminder*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< BirthdayReminder*>(this));
    if (!strcmp(_clname, "IBirthdayReminder"))
        return static_cast< IBirthdayReminder*>(const_cast< BirthdayReminder*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< BirthdayReminder*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IBirthdayReminer/1.0"))
        return static_cast< IBirthdayReminder*>(const_cast< BirthdayReminder*>(this));
    return QObject::qt_metacast(_clname);
}

int BirthdayReminder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onShowNotificationTimer(); break;
        case 1: onNotificationActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: onNotificationRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: onRosterIndexInserted((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 4: onRosterIndexToolTips((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[3]))); break;
        case 5: onVCardReceived((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 6: onRosterItemReceived((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const IRosterItem(*)>(_a[2])),(*reinterpret_cast< const IRosterItem(*)>(_a[3]))); break;
        case 7: onOptionsOpened(); break;
        case 8: onOptionsClosed(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
