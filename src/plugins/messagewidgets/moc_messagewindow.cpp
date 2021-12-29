/****************************************************************************
** Meta object code from reading C++ file 'messagewindow.h'
**
** Created: Sat Jan 26 02:07:47 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "messagewindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessageWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      31,   14,   14,   14, 0x05,
      45,   14,   14,   14, 0x05,
      68,   14,   14,   14, 0x05,
      83,   14,   14,   14, 0x05,
      99,   14,   14,   14, 0x05,
     116,   14,   14,   14, 0x05,
     135,   14,   14,   14, 0x05,
     156,   14,   14,   14, 0x05,
     175,   14,   14,   14, 0x05,
     200,   14,   14,   14, 0x05,
     218,   14,   14,   14, 0x05,
     233,   14,   14,   14, 0x05,
     250,   14,   14,   14, 0x05,
     267,   14,   14,   14, 0x05,
     290,  282,   14,   14, 0x05,
     312,  282,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     335,  282,   14,   14, 0x09,
     359,   14,   14,   14, 0x09,
     376,   14,   14,   14, 0x09,
     398,   14,   14,   14, 0x09,
     420,   14,   14,   14, 0x09,
     443,   14,   14,   14, 0x09,
     468,   14,   14,   14, 0x09,
     500,  490,   14,   14, 0x09,
     536,  524,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MessageWindow[] = {
    "MessageWindow\0\0tabPageAssign()\0"
    "tabPageShow()\0tabPageShowMinimized()\0"
    "tabPageClose()\0tabPageClosed()\0"
    "tabPageChanged()\0tabPageActivated()\0"
    "tabPageDeactivated()\0tabPageDestroyed()\0"
    "tabPageNotifierChanged()\0showNextMessage()\0"
    "replyMessage()\0forwardMessage()\0"
    "showChatWindow()\0messageReady()\0ABefore\0"
    "streamJidChanged(Jid)\0contactJidChanged(Jid)\0"
    "onStreamJidChanged(Jid)\0onMessageReady()\0"
    "onSendButtonClicked()\0onNextButtonClicked()\0"
    "onReplyButtonClicked()\0onForwardButtonClicked()\0"
    "onChatButtonClicked()\0AReceiver\0"
    "onReceiversChanged(Jid)\0AId,AWidget\0"
    "onShortcutActivated(QString,QWidget*)\0"
};

const QMetaObject MessageWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MessageWindow,
      qt_meta_data_MessageWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageWindow))
        return static_cast<void*>(const_cast< MessageWindow*>(this));
    if (!strcmp(_clname, "IMessageWindow"))
        return static_cast< IMessageWindow*>(const_cast< MessageWindow*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageWindow/1.2"))
        return static_cast< IMessageWindow*>(const_cast< MessageWindow*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ITabPage/1.3"))
        return static_cast< ITabPage*>(const_cast< MessageWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MessageWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 10: showNextMessage(); break;
        case 11: replyMessage(); break;
        case 12: forwardMessage(); break;
        case 13: showChatWindow(); break;
        case 14: messageReady(); break;
        case 15: streamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 16: contactJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 17: onStreamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 18: onMessageReady(); break;
        case 19: onSendButtonClicked(); break;
        case 20: onNextButtonClicked(); break;
        case 21: onReplyButtonClicked(); break;
        case 22: onForwardButtonClicked(); break;
        case 23: onChatButtonClicked(); break;
        case 24: onReceiversChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 25: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void MessageWindow::tabPageAssign()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MessageWindow::tabPageShow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MessageWindow::tabPageShowMinimized()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MessageWindow::tabPageClose()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void MessageWindow::tabPageClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void MessageWindow::tabPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void MessageWindow::tabPageActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void MessageWindow::tabPageDeactivated()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void MessageWindow::tabPageDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void MessageWindow::tabPageNotifierChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void MessageWindow::showNextMessage()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void MessageWindow::replyMessage()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void MessageWindow::forwardMessage()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void MessageWindow::showChatWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void MessageWindow::messageReady()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void MessageWindow::streamJidChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MessageWindow::contactJidChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_END_MOC_NAMESPACE
