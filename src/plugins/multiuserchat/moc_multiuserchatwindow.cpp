/****************************************************************************
** Meta object code from reading C++ file 'multiuserchatwindow.h'
**
** Created: Sat Jan 26 02:16:26 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "multiuserchatwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multiuserchatwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MultiUserChatWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      37,   20,   20,   20, 0x05,
      51,   20,   20,   20, 0x05,
      74,   20,   20,   20, 0x05,
      89,   20,   20,   20, 0x05,
     105,   20,   20,   20, 0x05,
     122,   20,   20,   20, 0x05,
     141,   20,   20,   20, 0x05,
     162,   20,   20,   20, 0x05,
     181,   20,   20,   20, 0x05,
     214,  206,   20,   20, 0x05,
     246,  206,   20,   20, 0x05,
     286,  280,   20,   20, 0x05,
     332,  320,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     372,   20,   20,   20, 0x09,
     395,  387,   20,   20, 0x09,
     426,  417,   20,   20, 0x09,
     447,   20,   20,   20, 0x09,
     477,  462,   20,   20, 0x09,
     505,   20,   20,   20, 0x09,
     545,  525,   20,   20, 0x09,
     612,  585,   20,   20, 0x09,
     689,  665,   20,   20, 0x09,
     750,  736,   20,   20, 0x09,
     796,  781,   20,   20, 0x09,
     830,  417,   20,   20, 0x09,
     884,  864,   20,   20, 0x09,
     936,  914,   20,   20, 0x09,
     974,  914,   20,   20, 0x09,
    1031, 1012,   20,   20, 0x09,
    1098, 1092,   20,   20, 0x09,
    1138, 1130,   20,   20, 0x09,
    1163,   20,   20,   20, 0x09,
    1180,   20,   20,   20, 0x09,
    1215, 1205,   20,   20, 0x09,
    1268, 1250,   20,   20, 0x09,
    1307,   20,   20,   20, 0x09,
    1369, 1347,   20,   20, 0x09,
    1429,   20,   20,   20, 0x09,
    1449,   20,   20,   20, 0x09,
    1470,   20,   20,   20, 0x09,
    1494,   20,   20,   20, 0x09,
    1515,   20,   20,   20, 0x09,
    1539, 1205,   20,   20, 0x09,
    1590, 1578,   20,   20, 0x09,
    1656, 1625,   20,   20, 0x09,
    1722, 1712,   20,   20, 0x09,
    1789, 1778,   20,   20, 0x09,
    1831,   20,   20,   20, 0x09,
    1863,   20,   20,   20, 0x09,
    1894,   20,   20,   20, 0x09,
    1932,   20,   20,   20, 0x09,
    1970,   20,   20,   20, 0x09,
    2015,   20,   20,   20, 0x09,
    2054,   20,   20,   20, 0x09,
    2088,   20,   20,   20, 0x09,
    2122,   20,   20,   20, 0x09,
    2158, 2151,   20,   20, 0x09,
    2195,   20,   20,   20, 0x09,
    2224, 2218,   20,   20, 0x09,
    2273, 2261,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MultiUserChatWindow[] = {
    "MultiUserChatWindow\0\0tabPageAssign()\0"
    "tabPageShow()\0tabPageShowMinimized()\0"
    "tabPageClose()\0tabPageClosed()\0"
    "tabPageChanged()\0tabPageActivated()\0"
    "tabPageDeactivated()\0tabPageDestroyed()\0"
    "tabPageNotifierChanged()\0AWindow\0"
    "chatWindowCreated(IChatWindow*)\0"
    "chatWindowDestroyed(IChatWindow*)\0"
    "AMenu\0multiChatWindowContextMenu(Menu*)\0"
    "AUser,AMenu\0multiUserContextMenu(IMultiUser*,Menu*)\0"
    "onChatOpened()\0ANotify\0onChatNotify(QString)\0"
    "AMessage\0onChatError(QString)\0"
    "onChatClosed()\0ABefore,AAfter\0"
    "onStreamJidChanged(Jid,Jid)\0"
    "onRejoinAfterKick()\0AUser,AShow,AStatus\0"
    "onUserPresence(IMultiUser*,int,QString)\0"
    "AUser,ARole,ABefore,AAfter\0"
    "onUserDataChanged(IMultiUser*,int,QVariant,QVariant)\0"
    "AUser,AOldNick,ANewNick\0"
    "onUserNickChanged(IMultiUser*,QString,QString)\0"
    "AShow,AStatus\0onPresenceChanged(int,QString)\0"
    "ANick,ASubject\0onSubjectChanged(QString,QString)\0"
    "onServiceMessageReceived(Message)\0"
    "AContactJid,AReason\0onInviteDeclined(Jid,QString)\0"
    "ANick,AReason,AByUser\0"
    "onUserKicked(QString,QString,QString)\0"
    "onUserBanned(QString,QString,QString)\0"
    "AAffiliation,AList\0"
    "onAffiliationListReceived(QString,QList<IMultiUserListItem>)\0"
    "AForm\0onConfigFormReceived(IDataForm)\0"
    "AReason\0onRoomDestroyed(QString)\0"
    "onMessageReady()\0onMessageAboutToBeSend()\0"
    "ANotifyId\0onNotifierActiveNotifyChanged(int)\0"
    "AKeyEvent,AHooked\0"
    "onEditWidgetKeyEvent(QKeyEvent*,bool&)\0"
    "onViewContextQuoteActionTriggered(bool)\0"
    "APosition,AText,AMenu\0"
    "onViewWidgetContextMenu(QPoint,QTextDocumentFragment,Menu*)\0"
    "onWindowActivated()\0onChatMessageReady()\0"
    "onChatWindowActivated()\0onChatWindowClosed()\0"
    "onChatWindowDestroyed()\0"
    "onChatNotifierActiveNotifyChanged(int)\0"
    "APos,AIndex\0onHorizontalSplitterMoved(int,int)\0"
    "AOptions,AMessageType,AContext\0"
    "onStyleOptionsChanged(IMessageStyleOptions,int,QString)\0"
    "AId,ABody\0"
    "onArchiveMessagesLoaded(QString,IArchiveCollectionBody)\0"
    "AId,AError\0onArchiveRequestFailed(QString,XmppError)\0"
    "onNickMenuActionTriggered(bool)\0"
    "onToolBarActionTriggered(bool)\0"
    "onOpenChatWindowActionTriggered(bool)\0"
    "onChangeUserRoleActionTriggeted(bool)\0"
    "onChangeUserAffiliationActionTriggered(bool)\0"
    "onClearChatWindowActionTriggered(bool)\0"
    "onDataFormMessageDialogAccepted()\0"
    "onAffiliationListDialogAccepted()\0"
    "onConfigFormDialogAccepted()\0AIndex\0"
    "onUserItemDoubleClicked(QModelIndex)\0"
    "onStatusIconsChanged()\0ANode\0"
    "onAccountOptionsChanged(OptionsNode)\0"
    "AId,AWidget\0onShortcutActivated(QString,QWidget*)\0"
};

const QMetaObject MultiUserChatWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MultiUserChatWindow,
      qt_meta_data_MultiUserChatWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiUserChatWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiUserChatWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiUserChatWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiUserChatWindow))
        return static_cast<void*>(const_cast< MultiUserChatWindow*>(this));
    if (!strcmp(_clname, "IMultiUserChatWindow"))
        return static_cast< IMultiUserChatWindow*>(const_cast< MultiUserChatWindow*>(this));
    if (!strcmp(_clname, "IMessageHandler"))
        return static_cast< IMessageHandler*>(const_cast< MultiUserChatWindow*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMultiUserChatWindow/1.2"))
        return static_cast< IMultiUserChatWindow*>(const_cast< MultiUserChatWindow*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.ITabPage/1.3"))
        return static_cast< ITabPage*>(const_cast< MultiUserChatWindow*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageHandler/1.2"))
        return static_cast< IMessageHandler*>(const_cast< MultiUserChatWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MultiUserChatWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 10: chatWindowCreated((*reinterpret_cast< IChatWindow*(*)>(_a[1]))); break;
        case 11: chatWindowDestroyed((*reinterpret_cast< IChatWindow*(*)>(_a[1]))); break;
        case 12: multiChatWindowContextMenu((*reinterpret_cast< Menu*(*)>(_a[1]))); break;
        case 13: multiUserContextMenu((*reinterpret_cast< IMultiUser*(*)>(_a[1])),(*reinterpret_cast< Menu*(*)>(_a[2]))); break;
        case 14: onChatOpened(); break;
        case 15: onChatNotify((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: onChatError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: onChatClosed(); break;
        case 18: onStreamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 19: onRejoinAfterKick(); break;
        case 20: onUserPresence((*reinterpret_cast< IMultiUser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 21: onUserDataChanged((*reinterpret_cast< IMultiUser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 22: onUserNickChanged((*reinterpret_cast< IMultiUser*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 23: onPresenceChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 24: onSubjectChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: onServiceMessageReceived((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        case 26: onInviteDeclined((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 27: onUserKicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 28: onUserBanned((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 29: onAffiliationListReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<IMultiUserListItem>(*)>(_a[2]))); break;
        case 30: onConfigFormReceived((*reinterpret_cast< const IDataForm(*)>(_a[1]))); break;
        case 31: onRoomDestroyed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: onMessageReady(); break;
        case 33: onMessageAboutToBeSend(); break;
        case 34: onNotifierActiveNotifyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: onEditWidgetKeyEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 36: onViewContextQuoteActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: onViewWidgetContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QTextDocumentFragment(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 38: onWindowActivated(); break;
        case 39: onChatMessageReady(); break;
        case 40: onChatWindowActivated(); break;
        case 41: onChatWindowClosed(); break;
        case 42: onChatWindowDestroyed(); break;
        case 43: onChatNotifierActiveNotifyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: onHorizontalSplitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: onStyleOptionsChanged((*reinterpret_cast< const IMessageStyleOptions(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 46: onArchiveMessagesLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveCollectionBody(*)>(_a[2]))); break;
        case 47: onArchiveRequestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 48: onNickMenuActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: onToolBarActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: onOpenChatWindowActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: onChangeUserRoleActionTriggeted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: onChangeUserAffiliationActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: onClearChatWindowActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: onDataFormMessageDialogAccepted(); break;
        case 55: onAffiliationListDialogAccepted(); break;
        case 56: onConfigFormDialogAccepted(); break;
        case 57: onUserItemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 58: onStatusIconsChanged(); break;
        case 59: onAccountOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 60: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 61;
    }
    return _id;
}

// SIGNAL 0
void MultiUserChatWindow::tabPageAssign()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MultiUserChatWindow::tabPageShow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MultiUserChatWindow::tabPageShowMinimized()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MultiUserChatWindow::tabPageClose()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void MultiUserChatWindow::tabPageClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void MultiUserChatWindow::tabPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void MultiUserChatWindow::tabPageActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void MultiUserChatWindow::tabPageDeactivated()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void MultiUserChatWindow::tabPageDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void MultiUserChatWindow::tabPageNotifierChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void MultiUserChatWindow::chatWindowCreated(IChatWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MultiUserChatWindow::chatWindowDestroyed(IChatWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MultiUserChatWindow::multiChatWindowContextMenu(Menu * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MultiUserChatWindow::multiUserContextMenu(IMultiUser * _t1, Menu * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
