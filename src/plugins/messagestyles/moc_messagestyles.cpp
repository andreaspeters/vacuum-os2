/****************************************************************************
** Meta object code from reading C++ file 'messagestyles.h'
**
** Created: Sat Jan 26 02:08:07 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "messagestyles.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagestyles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessageStyles[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,  100,   14,   14, 0x09,
     138,  132,   14,   14, 0x09,
     168,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MessageStyles[] = {
    "MessageStyles\0\0AOptions,AMessageType,AContext\0"
    "styleOptionsChanged(IMessageStyleOptions,int,QString)\0"
    "AContactJid\0onVCardChanged(Jid)\0ANode\0"
    "onOptionsChanged(OptionsNode)\0"
    "onApplyPendingChanges()\0"
};

const QMetaObject MessageStyles::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MessageStyles,
      qt_meta_data_MessageStyles, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageStyles::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageStyles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageStyles::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageStyles))
        return static_cast<void*>(const_cast< MessageStyles*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< MessageStyles*>(this));
    if (!strcmp(_clname, "IMessageStyles"))
        return static_cast< IMessageStyles*>(const_cast< MessageStyles*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< MessageStyles*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< MessageStyles*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageStyles/1.2"))
        return static_cast< IMessageStyles*>(const_cast< MessageStyles*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< MessageStyles*>(this));
    return QObject::qt_metacast(_clname);
}

int MessageStyles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: styleOptionsChanged((*reinterpret_cast< const IMessageStyleOptions(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: onVCardChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 2: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 3: onApplyPendingChanges(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MessageStyles::styleOptionsChanged(const IMessageStyleOptions & _t1, int _t2, const QString & _t3)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< MessageStyles *>(this), &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
