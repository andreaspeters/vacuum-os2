/****************************************************************************
** Meta object code from reading C++ file 'viewwidget.h'
**
** Created: Sat Jan 26 02:07:26 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "viewwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   12,   11,   11, 0x05,
      42,   12,   11,   11, 0x05,
      82,   65,   11,   11, 0x05,
     154,  139,   11,   11, 0x05,
     229,  202,   11,   11, 0x05,
     286,  281,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     326,  303,   11,   11, 0x09,
     398,  385,   11,   11, 0x09,
     436,  426,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ViewWidget[] = {
    "ViewWidget\0\0ABefore\0streamJidChanged(Jid)\0"
    "contactJidChanged(Jid)\0ABefore,AOptions\0"
    "messageStyleChanged(IMessageStyle*,IMessageStyleOptions)\0"
    "AHtml,AOptions\0"
    "contentAppended(QString,IMessageContentOptions)\0"
    "APosition,ASelection,AMenu\0"
    "viewContextMenu(QPoint,QTextDocumentFragment,Menu*)\0"
    "AUrl\0urlClicked(QUrl)\0AWidget,AHtml,AOptions\0"
    "onContentAppended(QWidget*,QString,IMessageContentOptions)\0"
    "AWidget,AUrl\0onUrlClicked(QWidget*,QUrl)\0"
    "APosition\0onCustomContextMenuRequested(QPoint)\0"
};

const QMetaObject ViewWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ViewWidget,
      qt_meta_data_ViewWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewWidget))
        return static_cast<void*>(const_cast< ViewWidget*>(this));
    if (!strcmp(_clname, "IViewWidget"))
        return static_cast< IViewWidget*>(const_cast< ViewWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IViewWidget/1.1"))
        return static_cast< IViewWidget*>(const_cast< ViewWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: streamJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 1: contactJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 2: messageStyleChanged((*reinterpret_cast< IMessageStyle*(*)>(_a[1])),(*reinterpret_cast< const IMessageStyleOptions(*)>(_a[2]))); break;
        case 3: contentAppended((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IMessageContentOptions(*)>(_a[2]))); break;
        case 4: viewContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QTextDocumentFragment(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 5: urlClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: onContentAppended((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const IMessageContentOptions(*)>(_a[3]))); break;
        case 7: onUrlClicked((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 8: onCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ViewWidget::streamJidChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ViewWidget::contactJidChanged(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ViewWidget::messageStyleChanged(IMessageStyle * _t1, const IMessageStyleOptions & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ViewWidget::contentAppended(const QString & _t1, const IMessageContentOptions & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ViewWidget::viewContextMenu(const QPoint & _t1, const QTextDocumentFragment & _t2, Menu * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ViewWidget::urlClicked(const QUrl & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ViewWidget *>(this), &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
