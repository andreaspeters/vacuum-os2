/****************************************************************************
** Meta object code from reading C++ file 'vcardplugin.h'
**
** Created: Sat Jan 26 02:15:25 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vcardplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vcardplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCardPlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   13,   12,   12, 0x05,
      44,   13,   12,   12, 0x05,
      83,   64,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     121,  109,   12,   12, 0x09,
     183,  159,   12,   12, 0x09,
     264,  244,   12,   12, 0x09,
     328,   12,   12,   12, 0x09,
     360,   12,   12,   12, 0x09,
     410,  402,   12,   12, 0x09,
     455,  443,   12,   12, 0x09,
     497,  489,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VCardPlugin[] = {
    "VCardPlugin\0\0AContactJid\0vcardReceived(Jid)\0"
    "vcardPublished(Jid)\0AContactJid,AError\0"
    "vcardError(Jid,XmppError)\0AId,AWidget\0"
    "onShortcutActivated(QString,QWidget*)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "AWindow,AUser,AMenu\0"
    "onMultiUserContextMenu(IMultiUserChatWindow*,IMultiUser*,Menu*)\0"
    "onShowVCardDialogByAction(bool)\0"
    "onShowVCardDialogByChatWindowAction(bool)\0"
    "ADialog\0onVCardDialogDestroyed(QObject*)\0"
    "AXmppStream\0onXmppStreamRemoved(IXmppStream*)\0"
    "AWindow\0onChatWindowCreated(IChatWindow*)\0"
};

const QMetaObject VCardPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VCardPlugin,
      qt_meta_data_VCardPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCardPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCardPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCardPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCardPlugin))
        return static_cast<void*>(const_cast< VCardPlugin*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< VCardPlugin*>(this));
    if (!strcmp(_clname, "IVCardPlugin"))
        return static_cast< IVCardPlugin*>(const_cast< VCardPlugin*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< VCardPlugin*>(this));
    if (!strcmp(_clname, "IXmppUriHandler"))
        return static_cast< IXmppUriHandler*>(const_cast< VCardPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< VCardPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IVCardPlugin/1.2"))
        return static_cast< IVCardPlugin*>(const_cast< VCardPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< VCardPlugin*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppUriHandler/1.0"))
        return static_cast< IXmppUriHandler*>(const_cast< VCardPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int VCardPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: vcardReceived((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 1: vcardPublished((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 2: vcardError((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 3: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 4: onRosterIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 5: onMultiUserContextMenu((*reinterpret_cast< IMultiUserChatWindow*(*)>(_a[1])),(*reinterpret_cast< IMultiUser*(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 6: onShowVCardDialogByAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: onShowVCardDialogByChatWindowAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: onVCardDialogDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 9: onXmppStreamRemoved((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 10: onChatWindowCreated((*reinterpret_cast< IChatWindow*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void VCardPlugin::vcardReceived(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VCardPlugin::vcardPublished(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VCardPlugin::vcardError(const Jid & _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
