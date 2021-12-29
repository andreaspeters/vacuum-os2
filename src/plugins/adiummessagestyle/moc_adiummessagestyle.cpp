/****************************************************************************
** Meta object code from reading C++ file 'adiummessagestyle.h'
**
** Created: Sat Jan 26 02:08:29 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "adiummessagestyle.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adiummessagestyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AdiumMessageStyle[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   19,   18,   18, 0x05,
      49,   19,   18,   18, 0x05,
      97,   73,   18,   18, 0x05,
     171,  148,   18,   18, 0x05,
     241,  228,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     272,  267,   18,   18, 0x09,
     292,   18,   18,   18, 0x09,
     314,   18,   18,   18, 0x09,
     359,  344,   18,   18, 0x09,
     407,  403,   18,   18, 0x09,
     447,  439,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AdiumMessageStyle[] = {
    "AdiumMessageStyle\0\0AWidget\0"
    "widgetAdded(QWidget*)\0widgetRemoved(QWidget*)\0"
    "AWidget,AOptions,AClean\0"
    "optionsChanged(QWidget*,IMessageStyleOptions,bool)\0"
    "AWidget,AHtml,AOptions\0"
    "contentAppended(QWidget*,QString,IMessageContentOptions)\0"
    "AWidget,AUrl\0urlClicked(QWidget*,QUrl)\0"
    "AUrl\0onLinkClicked(QUrl)\0onScrollAfterResize()\0"
    "onEvaluateNextPendingScript()\0"
    "AStyle,AWidget\0"
    "onStyleWidgetAdded(IMessageStyle*,QWidget*)\0"
    "AOk\0onStyleWidgetLoadFinished(bool)\0"
    "AObject\0onStyleWidgetDestroyed(QObject*)\0"
};

const QMetaObject AdiumMessageStyle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AdiumMessageStyle,
      qt_meta_data_AdiumMessageStyle, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AdiumMessageStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AdiumMessageStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AdiumMessageStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdiumMessageStyle))
        return static_cast<void*>(const_cast< AdiumMessageStyle*>(this));
    if (!strcmp(_clname, "IMessageStyle"))
        return static_cast< IMessageStyle*>(const_cast< AdiumMessageStyle*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageStyle/1.1"))
        return static_cast< IMessageStyle*>(const_cast< AdiumMessageStyle*>(this));
    return QObject::qt_metacast(_clname);
}

int AdiumMessageStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 7: onEvaluateNextPendingScript(); break;
        case 8: onStyleWidgetAdded((*reinterpret_cast< IMessageStyle*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 9: onStyleWidgetLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: onStyleWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void AdiumMessageStyle::widgetAdded(QWidget * _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< AdiumMessageStyle *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AdiumMessageStyle::widgetRemoved(QWidget * _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< AdiumMessageStyle *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AdiumMessageStyle::optionsChanged(QWidget * _t1, const IMessageStyleOptions & _t2, bool _t3)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< AdiumMessageStyle *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AdiumMessageStyle::contentAppended(QWidget * _t1, const QString & _t2, const IMessageContentOptions & _t3)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< AdiumMessageStyle *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AdiumMessageStyle::urlClicked(QWidget * _t1, const QUrl & _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< AdiumMessageStyle *>(this), &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
