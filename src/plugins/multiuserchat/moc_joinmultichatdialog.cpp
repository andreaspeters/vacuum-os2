/****************************************************************************
** Meta object code from reading C++ file 'joinmultichatdialog.h'
**
** Created: Sat Jan 26 02:16:23 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "joinmultichatdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joinmultichatdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JoinMultiChatDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x09,
      47,   40,   20,   20, 0x09,
      73,   40,   20,   20, 0x09,
     100,   20,   20,   20, 0x09,
     123,   20,   20,   20, 0x09,
     174,  148,   20,   20, 0x09,
     222,  210,   20,   20, 0x09,
     250,  210,   20,   20, 0x09,
     305,  285,   20,   20, 0x09,
     342,  210,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_JoinMultiChatDialog[] = {
    "JoinMultiChatDialog\0\0onDialogAccepted()\0"
    "AIndex\0onStreamIndexChanged(int)\0"
    "onHistoryIndexChanged(int)\0"
    "onResolveNickClicked()\0onDeleteHistoryClicked()\0"
    "AStreamJid,ARoomJid,ANick\0"
    "onRoomNickReceived(Jid,Jid,QString)\0"
    "AXmppStream\0onStreamAdded(IXmppStream*)\0"
    "onStreamStateChanged(IXmppStream*)\0"
    "AXmppStream,ABefore\0"
    "onStreamJidChanged(IXmppStream*,Jid)\0"
    "onStreamRemoved(IXmppStream*)\0"
};

const QMetaObject JoinMultiChatDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_JoinMultiChatDialog,
      qt_meta_data_JoinMultiChatDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JoinMultiChatDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JoinMultiChatDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JoinMultiChatDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JoinMultiChatDialog))
        return static_cast<void*>(const_cast< JoinMultiChatDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int JoinMultiChatDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onDialogAccepted(); break;
        case 1: onStreamIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: onHistoryIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: onResolveNickClicked(); break;
        case 4: onDeleteHistoryClicked(); break;
        case 5: onRoomNickReceived((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: onStreamAdded((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 7: onStreamStateChanged((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 8: onStreamJidChanged((*reinterpret_cast< IXmppStream*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 9: onStreamRemoved((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
