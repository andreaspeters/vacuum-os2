/****************************************************************************
** Meta object code from reading C++ file 'rosteritemexchange.h'
**
** Created: Sat Jan 26 02:25:57 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rosteritemexchange.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rosteritemexchange.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RosterItemExchange[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   20,   19,   19, 0x05,
      73,   20,   19,   19, 0x05,
     121,   20,   19,   19, 0x05,
     168,   20,   19,   19, 0x05,
     232,  216,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     288,   19,   19,   19, 0x09,
     330,  320,   19,   19, 0x09,
     359,  320,   19,   19, 0x09,
     386,   19,   19,   19, 0x09,
     420,   19,   19,   19, 0x09,
     454,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_RosterItemExchange[] = {
    "RosterItemExchange\0\0ARequest\0"
    "exchangeRequestSent(IRosterExchangeRequest)\0"
    "exchangeRequestReceived(IRosterExchangeRequest)\0"
    "exchangeRequestApplied(IRosterExchangeRequest)\0"
    "exchangeRequestApproved(IRosterExchangeRequest)\0"
    "ARequest,AError\0"
    "exchangeRequestFailed(IRosterExchangeRequest,XmppError)\0"
    "onSendExchangeRequestByAction()\0"
    "ANotifyId\0onNotificationActivated(int)\0"
    "onNotificationRemoved(int)\0"
    "onExchangeApproveDialogAccepted()\0"
    "onExchangeApproveDialogRejected()\0"
    "onExchangeApproveDialogDestroyed()\0"
};

const QMetaObject RosterItemExchange::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RosterItemExchange,
      qt_meta_data_RosterItemExchange, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RosterItemExchange::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RosterItemExchange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RosterItemExchange::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RosterItemExchange))
        return static_cast<void*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "IRosterItemExchange"))
        return static_cast< IRosterItemExchange*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "IViewDropHandler"))
        return static_cast< IViewDropHandler*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "IRostersDragDropHandler"))
        return static_cast< IRostersDragDropHandler*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRosterItemExchange/1.1"))
        return static_cast< IRosterItemExchange*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IViewDropHandler/1.0"))
        return static_cast< IViewDropHandler*>(const_cast< RosterItemExchange*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRostersDragDropHandler/1.1"))
        return static_cast< IRostersDragDropHandler*>(const_cast< RosterItemExchange*>(this));
    return QObject::qt_metacast(_clname);
}

int RosterItemExchange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: exchangeRequestSent((*reinterpret_cast< const IRosterExchangeRequest(*)>(_a[1]))); break;
        case 1: exchangeRequestReceived((*reinterpret_cast< const IRosterExchangeRequest(*)>(_a[1]))); break;
        case 2: exchangeRequestApplied((*reinterpret_cast< const IRosterExchangeRequest(*)>(_a[1]))); break;
        case 3: exchangeRequestApproved((*reinterpret_cast< const IRosterExchangeRequest(*)>(_a[1]))); break;
        case 4: exchangeRequestFailed((*reinterpret_cast< const IRosterExchangeRequest(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 5: onSendExchangeRequestByAction(); break;
        case 6: onNotificationActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: onNotificationRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: onExchangeApproveDialogAccepted(); break;
        case 9: onExchangeApproveDialogRejected(); break;
        case 10: onExchangeApproveDialogDestroyed(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void RosterItemExchange::exchangeRequestSent(const IRosterExchangeRequest & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RosterItemExchange::exchangeRequestReceived(const IRosterExchangeRequest & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RosterItemExchange::exchangeRequestApplied(const IRosterExchangeRequest & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RosterItemExchange::exchangeRequestApproved(const IRosterExchangeRequest & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RosterItemExchange::exchangeRequestFailed(const IRosterExchangeRequest & _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
