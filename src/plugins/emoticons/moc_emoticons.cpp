/****************************************************************************
** Meta object code from reading C++ file 'emoticons.h'
**
** Created: Sat Jan 26 02:14:50 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "emoticons.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emoticons.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Emoticons[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   11,   10,   10, 0x09,
      67,   59,   10,   10, 0x09,
     123,  102,   10,   10, 0x09,
     155,   59,   10,   10, 0x09,
     191,   10,   10,   10, 0x09,
     215,  209,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Emoticons[] = {
    "Emoticons\0\0AWidget\0"
    "onToolBarWidgetCreated(IToolBarWidget*)\0"
    "AObject\0onToolBarWidgetDestroyed(QObject*)\0"
    "ASubStorage,AIconKey\0"
    "onIconSelected(QString,QString)\0"
    "onSelectIconMenuDestroyed(QObject*)\0"
    "onOptionsOpened()\0ANode\0"
    "onOptionsChanged(OptionsNode)\0"
};

const QMetaObject Emoticons::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Emoticons,
      qt_meta_data_Emoticons, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Emoticons::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Emoticons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Emoticons::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Emoticons))
        return static_cast<void*>(const_cast< Emoticons*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< Emoticons*>(this));
    if (!strcmp(_clname, "IEmoticons"))
        return static_cast< IEmoticons*>(const_cast< Emoticons*>(this));
    if (!strcmp(_clname, "IMessageWriter"))
        return static_cast< IMessageWriter*>(const_cast< Emoticons*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< Emoticons*>(this));
    if (!strcmp(_clname, "IEditContentsHandler"))
        return static_cast< IEditContentsHandler*>(const_cast< Emoticons*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< Emoticons*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IEmoticons/1.0"))
        return static_cast< IEmoticons*>(const_cast< Emoticons*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IMessageWriter/1.1"))
        return static_cast< IMessageWriter*>(const_cast< Emoticons*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< Emoticons*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IEditContentsHandler/1.1"))
        return static_cast< IEditContentsHandler*>(const_cast< Emoticons*>(this));
    return QObject::qt_metacast(_clname);
}

int Emoticons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onToolBarWidgetCreated((*reinterpret_cast< IToolBarWidget*(*)>(_a[1]))); break;
        case 1: onToolBarWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: onIconSelected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: onSelectIconMenuDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: onOptionsOpened(); break;
        case 5: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
