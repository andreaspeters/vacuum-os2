/****************************************************************************
** Meta object code from reading C++ file 'simplemessagestyle.h'
**
** Created: Sat Jan 26 02:12:35 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "simplemessagestyle.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simplemessagestyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimpleMessageStyle[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   20,   19,   19, 0x05,
      50,   20,   19,   19, 0x05,
      98,   74,   19,   19, 0x05,
     172,  149,   19,   19, 0x05,
     242,  229,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     273,  268,   19,   19, 0x09,
     293,   19,   19,   19, 0x09,
     330,  315,   19,   19, 0x09,
     382,  374,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SimpleMessageStyle[] = {
    "SimpleMessageStyle\0\0AWidget\0"
    "widgetAdded(QWidget*)\0widgetRemoved(QWidget*)\0"
    "AWidget,AOptions,AClean\0"
    "optionsChanged(QWidget*,IMessageStyleOptions,bool)\0"
    "AWidget,AHtml,AOptions\0"
    "contentAppended(QWidget*,QString,IMessageContentOptions)\0"
    "AWidget,AUrl\0urlClicked(QWidget*,QUrl)\0"
    "AUrl\0onLinkClicked(QUrl)\0onScrollAfterResize()\0"
    "AStyle,AWidget\0"
    "onStyleWidgetAdded(IMessageStyle*,QWidget*)\0"
    "AObject\0onStyleWidgetDestroyed(QObject*)\0"
};

const QMetaObject SimpleMessageStyle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimpleMessageStyle,
      qt_meta_data_SimpleMessageStyle, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimpleMessageStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimpleMessageStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimpleMessageStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleMessageStyle))
        return static_cast<void*>(const_cast< SimpleMessageStyle*>(this));
    if (!strcmp(_clname, "IMessageStyle"))
        return static_cast< IMessageStyle*>(const_cast< SimpleMessageStyle*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageStyle/1.1"))
        return static_cast< IMessageStyle*>(const_cast< SimpleMessageStyle*>(this));
    return QObject::qt_metacast(_clname);
}

int SimpleMessageStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: widgetAdded((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: widgetRemoved((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: optionsChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const IMessageStyleOptions(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: contentAppended((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const IMessageContentOptions(*)>(_a[3]))); break;
        case 4: urlClicked((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 5: onLinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: onScrollAfterResize(); break;
        case 7: onStyleWidgetAdded((*reinterpret_cast< IMessageStyle*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 8: onStyleWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SimpleMessageStyle::widgetAdded(QWidget * _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< SimpleMessageStyle *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SimpleMessageStyle::widgetRemoved(QWidget * _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< SimpleMessageStyle *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SimpleMessageStyle::optionsChanged(QWidget * _t1, const IMessageStyleOptions & _t2, bool _t3)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< SimpleMessageStyle *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SimpleMessageStyle::contentAppended(QWidget * _t1, const QString & _t2, const IMessageContentOptions & _t3)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< SimpleMessageStyle *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SimpleMessageStyle::urlClicked(QWidget * _t1, const QUrl & _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< SimpleMessageStyle *>(this), &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
