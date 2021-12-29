/****************************************************************************
** Meta object code from reading C++ file 'editwidget.h'
**
** Created: Sat Jan 26 02:07:29 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   12,   11,   11, 0x05,
      63,   11,   11,   11, 0x05,
      86,   11,   11,   11, 0x05,
     101,   11,   11,   11, 0x05,
     125,  117,   11,   11, 0x05,
     147,  117,   11,   11, 0x05,
     178,  170,   11,   11, 0x05,
     209,  202,   11,   11, 0x05,
     246,  234,   11,   11, 0x05,
     284,  275,   11,   11, 0x05,
     328,  312,   11,   11, 0x05,
     371,  358,   11,   11, 0x05,
     418,  401,   11,   11, 0x05,
     479,  463,   11,   11, 0x05,
     556,  530,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     585,   11,   11,   11, 0x09,
     615,   11,   11,   11, 0x09,
     647,  643,   11,   11, 0x09,
     686,  674,   11,   11, 0x09,
     730,  724,   11,   11, 0x09,
     766,  760,   11,   11, 0x09,
     804,  401,   11,   11, 0x09,
     857,  463,   11,   11, 0x09,
     916,  530,   11,   11, 0x09,
     963,  953,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_EditWidget[] = {
    "EditWidget\0\0AKeyEvent,AHook\0"
    "keyEventReceived(QKeyEvent*,bool&)\0"
    "messageAboutToBeSend()\0messageReady()\0"
    "editorCleared()\0ABefore\0streamJidChanged(Jid)\0"
    "contactJidChanged(Jid)\0AResize\0"
    "autoResizeChanged(bool)\0ALines\0"
    "minimumLinesChanged(int)\0AShortcutId\0"
    "sendShortcutChanged(QString)\0AEnabled\0"
    "richTextEnableChanged(bool)\0APosition,AMenu\0"
    "editContextMenu(QPoint,Menu*)\0"
    "ADestination\0createDataRequest(QMimeData*)\0"
    "AData,ACanInsert\0"
    "canInsertDataRequest(const QMimeData*,bool&)\0"
    "AData,ADocument\0"
    "insertDataRequest(const QMimeData*,QTextDocument*)\0"
    "APosition,ARemoved,AAdded\0"
    "contentsChanged(int,int,int)\0"
    "onUpdateSendToolBarMaxWidth()\0"
    "onSendActionTriggered(bool)\0AId\0"
    "onShortcutUpdated(QString)\0AId,AWidget\0"
    "onShortcutActivated(QString,QWidget*)\0"
    "ANode\0onOptionsChanged(OptionsNode)\0"
    "AData\0onEditorCreateDataRequest(QMimeData*)\0"
    "onEditorCanInsertDataRequest(const QMimeData*,bool&)\0"
    "onEditorInsertDataRequest(const QMimeData*,QTextDocument*)\0"
    "onEditorContentsChanged(int,int,int)\0"
    "APosition\0onEditorCustomContextMenuRequested(QPoint)\0"
};

const QMetaObject EditWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EditWidget,
      qt_meta_data_EditWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditWidget))
        return static_cast<void*>(const_cast< EditWidget*>(this));
    if (!strcmp(_clname, "IEditWidget"))
        return static_cast< IEditWidget*>(const_cast< EditWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IEditWidget/1.2"))
        return static_cast< IEditWidget*>(const_cast< EditWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int EditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: keyEventReceived((*reinterpret_cast< QKeyEvent*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: messageAboutToBeSend(); break;
        case 2: messageReady(); break;
        case 3: editorCleared(); break;
        case 4: streamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 5: contactJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 6: autoResizeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: minimumLinesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: sendShortcutChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: richTextEnableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: editContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< Menu*(*)>(_a[2]))); break;
        case 11: createDataRequest((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 12: canInsertDataRequest((*reinterpret_cast< const QMimeData*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: insertDataRequest((*reinterpret_cast< const QMimeData*(*)>(_a[1])),(*reinterpret_cast< QTextDocument*(*)>(_a[2]))); break;
        case 14: contentsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: onUpdateSendToolBarMaxWidth(); break;
        case 16: onSendActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: onShortcutUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 19: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        case 20: onEditorCreateDataRequest((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 21: onEditorCanInsertDataRequest((*reinterpret_cast< const QMimeData*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: onEditorInsertDataRequest((*reinterpret_cast< const QMimeData*(*)>(_a[1])),(*reinterpret_cast< QTextDocument*(*)>(_a[2]))); break;
        case 23: onEditorContentsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 24: onEditorCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void EditWidget::keyEventReceived(QKeyEvent * _t1, bool & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EditWidget::messageAboutToBeSend()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void EditWidget::messageReady()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void EditWidget::editorCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void EditWidget::streamJidChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void EditWidget::contactJidChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void EditWidget::autoResizeChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void EditWidget::minimumLinesChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void EditWidget::sendShortcutChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void EditWidget::richTextEnableChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void EditWidget::editContextMenu(const QPoint & _t1, Menu * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void EditWidget::createDataRequest(QMimeData * _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< EditWidget *>(this), &staticMetaObject, 11, _a);
}

// SIGNAL 12
void EditWidget::canInsertDataRequest(const QMimeData * _t1, bool & _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< EditWidget *>(this), &staticMetaObject, 12, _a);
}

// SIGNAL 13
void EditWidget::insertDataRequest(const QMimeData * _t1, QTextDocument * _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< EditWidget *>(this), &staticMetaObject, 13, _a);
}

// SIGNAL 14
void EditWidget::contentsChanged(int _t1, int _t2, int _t3)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< EditWidget *>(this), &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
