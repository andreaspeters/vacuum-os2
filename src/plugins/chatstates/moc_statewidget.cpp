/****************************************************************************
** Meta object code from reading C++ file 'statewidget.h'
**
** Created: Sat Jan 26 02:22:24 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "statewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StateWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x09,
      63,   43,   12,   12, 0x09,
     124,   94,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_StateWidget[] = {
    "StateWidget\0\0onStatusActionTriggered(bool)\0"
    "AContactJid,AStatus\0onPermitStatusChanged(Jid,int)\0"
    "AStreamJid,AContactJid,AState\0"
    "onUserChatStateChanged(Jid,Jid,int)\0"
};

const QMetaObject StateWidget::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_StateWidget,
      qt_meta_data_StateWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StateWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StateWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StateWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StateWidget))
        return static_cast<void*>(const_cast< StateWidget*>(this));
    return QToolButton::qt_metacast(_clname);
}

int StateWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onStatusActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: onPermitStatusChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: onUserChatStateChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
