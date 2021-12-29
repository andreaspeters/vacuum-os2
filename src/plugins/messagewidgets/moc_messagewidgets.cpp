/****************************************************************************
** Meta object code from reading C++ file 'messagewidgets.h'
**
** Created: Sat Jan 26 02:07:18 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "messagewidgets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagewidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessageWidgets[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   16,   15,   15, 0x05,
      72,   60,   15,   15, 0x05,
     116,  104,   15,   15, 0x05,
     165,  148,   15,   15, 0x05,
     222,  207,   15,   15, 0x05,
     275,  260,   15,   15, 0x05,
     330,  313,   15,   15, 0x05,
     382,  372,   15,   15, 0x05,
     432,  424,   15,   15, 0x05,
     470,  424,   15,   15, 0x05,
     510,  424,   15,   15, 0x05,
     542,  424,   15,   15, 0x05,
     592,  576,   15,   15, 0x05,
     625,  576,   15,   15, 0x05,
     671,  661,   15,   15, 0x05,
     695,  424,   15,   15, 0x05,
     725,  424,   15,   15, 0x05,
     766,  757,   15,   15, 0x05,
     809,  757,   15,   15, 0x05,
     867,  851,   15,   15, 0x05,
     912,  851,   15,   15, 0x05,
     956,  851,   15,   15, 0x05,
    1011,  851,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
    1070, 1065,   15,   15, 0x09,
    1121, 1099,   15,   15, 0x09,
    1181,   15,   15,   15, 0x09,
    1220,   15,   15,   15, 0x09,
    1258,   15,   15,   15, 0x09,
    1305, 1299,   15,   15, 0x09,
    1364, 1347,   15,   15, 0x09,
    1437, 1421,   15,   15, 0x09,
    1526, 1500,   15,   15, 0x09,
    1567,   15,   15,   15, 0x09,
    1596,   15,   15,   15, 0x09,
    1625,   15,   15,   15, 0x09,
    1652,   15,   15,   15, 0x09,
    1682, 1676,   15,   15, 0x09,
    1714, 1676,   15,   15, 0x09,
    1755,   15,   15,   15, 0x09,
    1790, 1778,   15,   15, 0x09,
    1847, 1828,   15,   15, 0x09,
    1905, 1893,   15,   15, 0x09,
    1935,   15,   15,   15, 0x09,
    1953,   15,   15,   15, 0x09,
    1977, 1971,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MessageWidgets[] = {
    "MessageWidgets\0\0AInfoWidget\0"
    "infoWidgetCreated(IInfoWidget*)\0"
    "AViewWidget\0viewWidgetCreated(IViewWidget*)\0"
    "AEditWidget\0editWidgetCreated(IEditWidget*)\0"
    "AReceiversWidget\0"
    "receiversWidgetCreated(IReceiversWidget*)\0"
    "AMenuBarWidget\0menuBarWidgetCreated(IMenuBarWidget*)\0"
    "AToolBarWidget\0toolBarWidgetCreated(IToolBarWidget*)\0"
    "AStatusBarWidget\0"
    "statusBarWidgetCreated(IStatusBarWidget*)\0"
    "ANotifier\0tabPageNotifierCreated(ITabPageNotifier*)\0"
    "AWindow\0messageWindowCreated(IMessageWindow*)\0"
    "messageWindowDestroyed(IMessageWindow*)\0"
    "chatWindowCreated(IChatWindow*)\0"
    "chatWindowDestroyed(IChatWindow*)\0"
    "AWindowId,AName\0tabWindowAppended(QUuid,QString)\0"
    "tabWindowNameChanged(QUuid,QString)\0"
    "AWindowId\0tabWindowDeleted(QUuid)\0"
    "tabWindowCreated(ITabWindow*)\0"
    "tabWindowDestroyed(ITabWindow*)\0"
    "AHandler\0viewDropHandlerInserted(IViewDropHandler*)\0"
    "viewDropHandlerRemoved(IViewDropHandler*)\0"
    "AOrder,AHandler\0"
    "viewUrlHandlerInserted(int,IViewUrlHandler*)\0"
    "viewUrlHandlerRemoved(int,IViewUrlHandler*)\0"
    "editContentsHandlerInserted(int,IEditContentsHandler*)\0"
    "editContentsHandlerRemoved(int,IEditContentsHandler*)\0"
    "AUrl\0onViewWidgetUrlClicked(QUrl)\0"
    "APosition,AText,AMenu\0"
    "onViewWidgetContextMenu(QPoint,QTextDocumentFragment,Menu*)\0"
    "onViewContextCopyActionTriggered(bool)\0"
    "onViewContextUrlActionTriggered(bool)\0"
    "onViewContextSearchActionTriggered(bool)\0"
    "AData\0onEditWidgetCreateDataRequest(QMimeData*)\0"
    "AData,ACanInsert\0"
    "onEditWidgetCanInsertDataRequest(const QMimeData*,bool&)\0"
    "AData,ADocument\0"
    "onEditWidgetInsertDataRequest(const QMimeData*,QTextDocument*)\0"
    "APosition,ARemoved,AAdded\0"
    "onEditWidgetContentsChanged(int,int,int)\0"
    "onQuoteActionTriggered(bool)\0"
    "onAssignedTabPageDestroyed()\0"
    "onMessageWindowDestroyed()\0"
    "onChatWindowDestroyed()\0APage\0"
    "onTabWindowPageAdded(ITabPage*)\0"
    "onTabWindowCurrentPageChanged(ITabPage*)\0"
    "onTabWindowDestroyed()\0AId,AWidget\0"
    "onShortcutActivated(QString,QWidget*)\0"
    "AXmppStream,AAfter\0"
    "onStreamJidAboutToBeChanged(IXmppStream*,Jid)\0"
    "AXmppStream\0onStreamRemoved(IXmppStream*)\0"
    "onOptionsOpened()\0onOptionsClosed()\0"
    "ANode\0onOptionsChanged(OptionsNode)\0"
};

const QMetaObject MessageWidgets::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MessageWidgets,
      qt_meta_data_MessageWidgets, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageWidgets::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageWidgets::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageWidgets::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageWidgets))
        return static_cast<void*>(const_cast< MessageWidgets*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< MessageWidgets*>(this));
    if (!strcmp(_clname, "IMessageWidgets"))
        return static_cast< IMessageWidgets*>(const_cast< MessageWidgets*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< MessageWidgets*>(this));
    if (!strcmp(_clname, "IViewUrlHandler"))
        return static_cast< IViewUrlHandler*>(const_cast< MessageWidgets*>(this));
    if (!strcmp(_clname, "IEditContentsHandler"))
        return static_cast< IEditContentsHandler*>(const_cast< MessageWidgets*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< MessageWidgets*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageWidgets/1.5"))
        return static_cast< IMessageWidgets*>(const_cast< MessageWidgets*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< MessageWidgets*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IViewUrlHandler/1.0"))
        return static_cast< IViewUrlHandler*>(const_cast< MessageWidgets*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IEditContentsHandler/1.1"))
        return static_cast< IEditContentsHandler*>(const_cast< MessageWidgets*>(this));
    return QObject::qt_metacast(_clname);
}

int MessageWidgets::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: infoWidgetCreated((*reinterpret_cast< IInfoWidget*(*)>(_a[1]))); break;
        case 1: viewWidgetCreated((*reinterpret_cast< IViewWidget*(*)>(_a[1]))); break;
        case 2: editWidgetCreated((*reinterpret_cast< IEditWidget*(*)>(_a[1]))); break;
        case 3: receiversWidgetCreated((*reinterpret_cast< IReceiversWidget*(*)>(_a[1]))); break;
        case 4: menuBarWidgetCreated((*reinterpret_cast< IMenuBarWidget*(*)>(_a[1]))); break;
        case 5: toolBarWidgetCreated((*reinterpret_cast< IToolBarWidget*(*)>(_a[1]))); break;
        case 6: statusBarWidgetCreated((*reinterpret_cast< IStatusBarWidget*(*)>(_a[1]))); break;
        case 7: tabPageNotifierCreated((*reinterpret_cast< ITabPageNotifier*(*)>(_a[1]))); break;
        case 8: messageWindowCreated((*reinterpret_cast< IMessageWindow*(*)>(_a[1]))); break;
        case 9: messageWindowDestroyed((*reinterpret_cast< IMessageWindow*(*)>(_a[1]))); break;
        case 10: chatWindowCreated((*reinterpret_cast< IChatWindow*(*)>(_a[1]))); break;
        case 11: chatWindowDestroyed((*reinterpret_cast< IChatWindow*(*)>(_a[1]))); break;
        case 12: tabWindowAppended((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: tabWindowNameChanged((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: tabWindowDeleted((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 15: tabWindowCreated((*reinterpret_cast< ITabWindow*(*)>(_a[1]))); break;
        case 16: tabWindowDestroyed((*reinterpret_cast< ITabWindow*(*)>(_a[1]))); break;
        case 17: viewDropHandlerInserted((*reinterpret_cast< IViewDropHandler*(*)>(_a[1]))); break;
        case 18: viewDropHandlerRemoved((*reinterpret_cast< IViewDropHandler*(*)>(_a[1]))); break;
        case 19: viewUrlHandlerInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IViewUrlHandler*(*)>(_a[2]))); break;
        case 20: viewUrlHandlerRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IViewUrlHandler*(*)>(_a[2]))); break;
        case 21: editContentsHandlerInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IEditContentsHandler*(*)>(_a[2]))); break;
        case 22: editContentsHandlerRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< IEditContentsHandler*(*)>(_a[2]))); break;
        case 23: onViewWidgetUrlClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 24: onViewWidgetContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QTextDocumentFragment(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 25: onViewContextCopyActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: onViewContextUrlActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: onViewContextSearchActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: onEditWidgetCreateDataRequest((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 29: onEditWidgetCanInsertDataRequest((*reinterpret_cast< const QMimeData*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: onEditWidgetInsertDataRequest((*reinterpret_cast< const QMimeData*(*)>(_a[1])),(*reinterpret_cast< QTextDocument*(*)>(_a[2]))); break;
        case 31: onEditWidgetContentsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 32: onQuoteActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: onAssignedTabPageDestroyed(); break;
        case 34: onMessageWindowDestroyed(); break;
        case 35: onChatWindowDestroyed(); break;
        case 36: onTabWindowPageAdded((*reinterpret_cast< ITabPage*(*)>(_a[1]))); break;
        case 37: onTabWindowCurrentPageChanged((*reinterpret_cast< ITabPage*(*)>(_a[1]))); break;
        case 38: onTabWindowDestroyed(); break;
        case 39: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 40: onStreamJidAboutToBeChanged((*reinterpret_cast< IXmppStream*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 41: onStreamRemoved((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 42: onOptionsOpened(); break;
        case 43: onOptionsClosed(); break;
        case 44: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 45;
    }
    return _id;
}

// SIGNAL 0
void MessageWidgets::infoWidgetCreated(IInfoWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MessageWidgets::viewWidgetCreated(IViewWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MessageWidgets::editWidgetCreated(IEditWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MessageWidgets::receiversWidgetCreated(IReceiversWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MessageWidgets::menuBarWidgetCreated(IMenuBarWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MessageWidgets::toolBarWidgetCreated(IToolBarWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MessageWidgets::statusBarWidgetCreated(IStatusBarWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MessageWidgets::tabPageNotifierCreated(ITabPageNotifier * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MessageWidgets::messageWindowCreated(IMessageWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MessageWidgets::messageWindowDestroyed(IMessageWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MessageWidgets::chatWindowCreated(IChatWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MessageWidgets::chatWindowDestroyed(IChatWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MessageWidgets::tabWindowAppended(const QUuid & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MessageWidgets::tabWindowNameChanged(const QUuid & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MessageWidgets::tabWindowDeleted(const QUuid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MessageWidgets::tabWindowCreated(ITabWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MessageWidgets::tabWindowDestroyed(ITabWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MessageWidgets::viewDropHandlerInserted(IViewDropHandler * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MessageWidgets::viewDropHandlerRemoved(IViewDropHandler * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MessageWidgets::viewUrlHandlerInserted(int _t1, IViewUrlHandler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MessageWidgets::viewUrlHandlerRemoved(int _t1, IViewUrlHandler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MessageWidgets::editContentsHandlerInserted(int _t1, IEditContentsHandler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MessageWidgets::editContentsHandlerRemoved(int _t1, IEditContentsHandler * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}
QT_END_MOC_NAMESPACE
