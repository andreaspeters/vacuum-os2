/****************************************************************************
** Meta object code from reading C++ file 'editlistsdialog.h'
**
** Created: Sat Jan 26 02:20:37 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editlistsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editlistsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditListsDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   43,   16,   16, 0x09,
      86,   43,   16,   16, 0x09,
     113,   43,   16,   16, 0x09,
     146,   43,   16,   16, 0x09,
     184,  180,   16,   16, 0x09,
     223,  212,   16,   16, 0x09,
     258,   16,   16,   16, 0x09,
     277,   16,   16,   16, 0x09,
     299,   16,   16,   16, 0x09,
     318,   16,   16,   16, 0x09,
     340,   16,   16,   16, 0x09,
     358,   16,   16,   16, 0x09,
     378,   16,   16,   16, 0x09,
     410,  403,   16,   16, 0x09,
     461,  442,   16,   16, 0x09,
     521,  442,   16,   16, 0x09,
     589,  581,   16,   16, 0x09,
     629,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_EditListsDialog[] = {
    "EditListsDialog\0\0AStreamJid\0destroyed(Jid)\0"
    "AStreamJid,AName\0onListLoaded(Jid,QString)\0"
    "onListRemoved(Jid,QString)\0"
    "onActiveListChanged(Jid,QString)\0"
    "onDefaultListChanged(Jid,QString)\0AId\0"
    "onRequestCompleted(QString)\0AId,AError\0"
    "onRequestFailed(QString,XmppError)\0"
    "onAddListClicked()\0onDeleteListClicked()\0"
    "onAddRuleClicked()\0onDeleteRuleClicked()\0"
    "onRuleUpClicked()\0onRuleDownClicked()\0"
    "onRuleConditionChanged()\0AIndex\0"
    "onRuleConditionTypeChanged(int)\0"
    "ACurrent,APrevious\0"
    "onCurrentListItemChanged(QListWidgetItem*,QListWidgetItem*)\0"
    "onCurrentRuleItemChanged(QListWidgetItem*,QListWidgetItem*)\0"
    "AButton\0onDialogButtonClicked(QAbstractButton*)\0"
    "onUpdateEnabledState()\0"
};

const QMetaObject EditListsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditListsDialog,
      qt_meta_data_EditListsDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditListsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditListsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditListsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditListsDialog))
        return static_cast<void*>(const_cast< EditListsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditListsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: destroyed((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 1: onListLoaded((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: onListRemoved((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: onActiveListChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: onDefaultListChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: onRequestCompleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: onRequestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 7: onAddListClicked(); break;
        case 8: onDeleteListClicked(); break;
        case 9: onAddRuleClicked(); break;
        case 10: onDeleteRuleClicked(); break;
        case 11: onRuleUpClicked(); break;
        case 12: onRuleDownClicked(); break;
        case 13: onRuleConditionChanged(); break;
        case 14: onRuleConditionTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: onCurrentListItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 16: onCurrentRuleItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 17: onDialogButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 18: onUpdateEnabledState(); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void EditListsDialog::destroyed(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
