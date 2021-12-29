/****************************************************************************
** Meta object code from reading C++ file 'chatwindow.h'
**
** Created: Sat Jan 26 02:07:43 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "chatwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChatWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      28,   11,   11,   11, 0x05,
      42,   11,   11,   11, 0x05,
      65,   11,   11,   11, 0x05,
      80,   11,   11,   11, 0x05,
      96,   11,   11,   11, 0x05,
     113,   11,   11,   11, 0x05,
     132,   11,   11,   11, 0x05,
     153,   11,   11,   11, 0x05,
     172,   11,   11,   11, 0x05,
     197,   11,   11,   11, 0x05,
     220,  212,   11,   11, 0x05,
     242,  212,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     265,   11,   11,   11, 0x09,
     282,  212,   11,   11, 0x09,
     312,  306,   11,   11, 0x09,
     354,  342,   11,   11, 0x09,
     392,   11,   11,   11, 0x09,
     454,  432,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ChatWindow[] = {
    "ChatWindow\0\0tabPageAssign()\0tabPageShow()\0"
    "tabPageShowMinimized()\0tabPageClose()\0"
    "tabPageClosed()\0tabPageChanged()\0"
    "tabPageActivated()\0tabPageDeactivated()\0"
    "tabPageDestroyed()\0tabPageNotifierChanged()\0"
    "messageReady()\0ABefore\0streamJidChanged(Jid)\0"
    "contactJidChanged(Jid)\0onMessageReady()\0"
    "onStreamJidChanged(Jid)\0ANode\0"
    "onOptionsChanged(OptionsNode)\0AId,AWidget\0"
    "onShortcutActivated(QString,QWidget*)\0"
    "onViewContextQuoteActionTriggered(bool)\0"
    "APosition,AText,AMenu\0"
    "onViewWidgetContextMenu(QPoint,QTextDocumentFragment,Menu*)\0"
};

const QMetaObject ChatWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ChatWindow,
      qt_meta_data_ChatWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChatWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChatWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChatWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChatWindow))
        return static_cast<void*>(const_cast< ChatWindow*>(this));
    if (!strcmp(_clname, "IChatWindow"))
        return static_cast< IChatWindow*>(const_cast< ChatWindow*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IChatWindow/1.2"))
        return static_cast< IChatWindow*>(const_cast< ChatWindow*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ITabPage/1.3"))
        return static_cast< ITabPage*>(const_cast< ChatWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ChatWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tabPageAssign(); break;
        case 1: tabPageShow(); break;
        case 2: tabPageShowMinimized(); break;
        case 3: tabPageClose(); break;
        case 4: tabPageClosed(); break;
        case 5: tabPageChanged(); break;
        case 6: tabPageActivated(); break;
        case 7: tabPageDeactivated(); break;
        case 8: tabPageDestroyed(); break;
        case 9: tabPageNotifierChanged(); break;
        case 10: messageReady(); break;
        case 11: streamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 12: contactJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 13: onMessageReady(); break;
        case 14: onStreamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 15: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 16: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 17: onViewContextQuoteActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: onViewWidgetContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QTextDocumentFragment(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void ChatWindow::tabPageAssign()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ChatWindow::tabPageShow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ChatWindow::tabPageShowMinimized()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ChatWindow::tabPageClose()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ChatWindow::tabPageClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void ChatWindow::tabPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void ChatWindow::tabPageActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void ChatWindow::tabPageDeactivated()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void ChatWindow::tabPageDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void ChatWindow::tabPageNotifierChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void ChatWindow::messageReady()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void ChatWindow::streamJidChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ChatWindow::contactJidChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
