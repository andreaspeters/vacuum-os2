/****************************************************************************
** Meta object code from reading C++ file 'captchaforms.h'
**
** Created: Sat Jan 26 02:24:06 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "captchaforms.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'captchaforms.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CaptchaForms[] = {

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
      33,   14,   13,   13, 0x05,
      91,   70,   13,   13, 0x05,
     141,  128,   13,   13, 0x05,
     188,  168,   13,   13, 0x05,
     225,  128,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     264,  252,   13,   13, 0x09,
     293,  252,   13,   13, 0x09,
     322,   13,   13,   13, 0x09,
     350,   13,   13,   13, 0x09,
     388,  378,   13,   13, 0x09,
     417,  378,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CaptchaForms[] = {
    "CaptchaForms\0\0AChallengeId,AForm\0"
    "challengeReceived(QString,IDataForm)\0"
    "AChallengeId,ASubmit\0"
    "challengeSubmited(QString,IDataForm)\0"
    "AChallengeId\0challengeAccepted(QString)\0"
    "AChallengeId,AError\0"
    "challengeRejected(QString,XmppError)\0"
    "challengeCanceled(QString)\0AXmppStream\0"
    "onStreamOpened(IXmppStream*)\0"
    "onStreamClosed(IXmppStream*)\0"
    "onChallengeDialogAccepted()\0"
    "onChallengeDialogRejected()\0ANotifyId\0"
    "onNotificationActivated(int)\0"
    "onNotificationRemoved(int)\0"
};

const QMetaObject CaptchaForms::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CaptchaForms,
      qt_meta_data_CaptchaForms, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CaptchaForms::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CaptchaForms::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CaptchaForms::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CaptchaForms))
        return static_cast<void*>(const_cast< CaptchaForms*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< CaptchaForms*>(this));
    if (!strcmp(_clname, "ICaptchaForms"))
        return static_cast< ICaptchaForms*>(const_cast< CaptchaForms*>(this));
    if (!strcmp(_clname, "IStanzaHandler"))
        return static_cast< IStanzaHandler*>(const_cast< CaptchaForms*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< CaptchaForms*>(this));
    if (!strcmp(_clname, "IDataLocalizer"))
        return static_cast< IDataLocalizer*>(const_cast< CaptchaForms*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< CaptchaForms*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ICaptchaForms/1.1"))
        return static_cast< ICaptchaForms*>(const_cast< CaptchaForms*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaHandler/1.0"))
        return static_cast< IStanzaHandler*>(const_cast< CaptchaForms*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< CaptchaForms*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataLocalizer/1.0"))
        return static_cast< IDataLocalizer*>(const_cast< CaptchaForms*>(this));
    return QObject::qt_metacast(_clname);
}

int CaptchaForms::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: challengeReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IDataForm(*)>(_a[2]))); break;
        case 1: challengeSubmited((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IDataForm(*)>(_a[2]))); break;
        case 2: challengeAccepted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: challengeRejected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 4: challengeCanceled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: onStreamOpened((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 6: onStreamClosed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 7: onChallengeDialogAccepted(); break;
        case 8: onChallengeDialogRejected(); break;
        case 9: onNotificationActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: onNotificationRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void CaptchaForms::challengeReceived(const QString & _t1, const IDataForm & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CaptchaForms::challengeSubmited(const QString & _t1, const IDataForm & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CaptchaForms::challengeAccepted(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CaptchaForms::challengeRejected(const QString & _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CaptchaForms::challengeCanceled(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
