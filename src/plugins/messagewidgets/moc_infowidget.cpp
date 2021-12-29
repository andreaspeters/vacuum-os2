/****************************************************************************
** Meta object code from reading C++ file 'infowidget.h'
**
** Created: Sat Jan 26 02:07:23 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "infowidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'infowidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InfoWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   12,   11,   11, 0x05,
      42,   12,   11,   11, 0x05,
      79,   65,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,  106,   11,   11, 0x09,
     156,  142,   11,   11, 0x09,
     202,  142,   11,   11, 0x09,
     266,  254,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_InfoWidget[] = {
    "InfoWidget\0\0ABefore\0streamJidChanged(Jid)\0"
    "contactJidChanged(Jid)\0AField,AValue\0"
    "fieldChanged(int,QVariant)\0ANode\0"
    "onAccountChanged(OptionsNode)\0"
    "AItem,ABefore\0"
    "onRosterItemReceived(IRosterItem,IRosterItem)\0"
    "onPresenceItemReceived(IPresenceItem,IPresenceItem)\0"
    "AContactJid\0onAvatarChanged(Jid)\0"
};

const QMetaObject InfoWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InfoWidget,
      qt_meta_data_InfoWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InfoWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InfoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InfoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InfoWidget))
        return static_cast<void*>(const_cast< InfoWidget*>(this));
    if (!strcmp(_clname, "IInfoWidget"))
        return static_cast< IInfoWidget*>(const_cast< InfoWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IInfoWidget/1.1"))
        return static_cast< IInfoWidget*>(const_cast< InfoWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int InfoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: streamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 1: contactJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 2: fieldChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: onAccountChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 4: onRosterItemReceived((*reinterpret_cast< const IRosterItem(*)>(_a[1])),(*reinterpret_cast< const IRosterItem(*)>(_a[2]))); break;
        case 5: onPresenceItemReceived((*reinterpret_cast< const IPresenceItem(*)>(_a[1])),(*reinterpret_cast< const IPresenceItem(*)>(_a[2]))); break;
        case 6: onAvatarChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void InfoWidget::streamJidChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InfoWidget::contactJidChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InfoWidget::fieldChanged(int _t1, const QVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
