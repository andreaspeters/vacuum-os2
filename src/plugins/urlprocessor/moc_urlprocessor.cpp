/****************************************************************************
** Meta object code from reading C++ file 'urlprocessor.h'
**
** Created: Sat Jan 26 02:25:07 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "urlprocessor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'urlprocessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UrlProcessor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x09,
      38,   32,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_UrlProcessor[] = {
    "UrlProcessor\0\0onOptionsOpened()\0ANode\0"
    "onOptionsChanged(OptionsNode)\0"
};

const QMetaObject UrlProcessor::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_UrlProcessor,
      qt_meta_data_UrlProcessor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UrlProcessor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UrlProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UrlProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UrlProcessor))
        return static_cast<void*>(const_cast< UrlProcessor*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< UrlProcessor*>(this));
    if (!strcmp(_clname, "IUrlProcessor"))
        return static_cast< IUrlProcessor*>(const_cast< UrlProcessor*>(this));
    if (!strcmp(_clname, "IOptionsHolder"))
        return static_cast< IOptionsHolder*>(const_cast< UrlProcessor*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< UrlProcessor*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IUrlProcessor/1.0"))
        return static_cast< IUrlProcessor*>(const_cast< UrlProcessor*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsHolder/1.0"))
        return static_cast< IOptionsHolder*>(const_cast< UrlProcessor*>(this));
    return QNetworkAccessManager::qt_metacast(_clname);
}

int UrlProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onOptionsOpened(); break;
        case 1: onOptionsChanged((*reinterpret_cast< const OptionsNode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
