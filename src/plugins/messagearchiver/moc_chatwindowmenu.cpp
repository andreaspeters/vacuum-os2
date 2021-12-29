/****************************************************************************
** Meta object code from reading C++ file 'chatwindowmenu.h'
**
** Created: Sat Jan 26 02:20:10 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "chatwindowmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatwindowmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChatWindowMenu[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x09,
      51,   40,   15,   15, 0x09,
      82,   78,   15,   15, 0x09,
     128,  117,   15,   15, 0x09,
     181,  170,   15,   15, 0x09,
     221,  212,   15,   15, 0x09,
     262,  212,   15,   15, 0x09,
     312,  304,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ChatWindowMenu[] = {
    "ChatWindowMenu\0\0onActionTriggered(bool)\0"
    "AStreamJid\0onArchivePrefsChanged(Jid)\0"
    "AId\0onArchiveRequestCompleted(QString)\0"
    "AId,AError\0onArchiveRequestFailed(QString,XmppError)\0"
    "ADiscoInfo\0onDiscoInfoChanged(IDiscoInfo)\0"
    "ASession\0onStanzaSessionActivated(IStanzaSession)\0"
    "onStanzaSessionTerminated(IStanzaSession)\0"
    "ABefore\0onEditWidgetContactJidChanged(Jid)\0"
};

const QMetaObject ChatWindowMenu::staticMetaObject = {
    { &Menu::staticMetaObject, qt_meta_stringdata_ChatWindowMenu,
      qt_meta_data_ChatWindowMenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChatWindowMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChatWindowMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChatWindowMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChatWindowMenu))
        return static_cast<void*>(const_cast< ChatWindowMenu*>(this));
    return Menu::qt_metacast(_clname);
}

int ChatWindowMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Menu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: onArchivePrefsChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 2: onArchiveRequestCompleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: onArchiveRequestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 4: onDiscoInfoChanged((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 5: onStanzaSessionActivated((*reinterpret_cast< const IStanzaSession(*)>(_a[1]))); break;
        case 6: onStanzaSessionTerminated((*reinterpret_cast< const IStanzaSession(*)>(_a[1]))); break;
        case 7: onEditWidgetContactJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
