/****************************************************************************
** Meta object code from reading C++ file 'jabbersearch.h'
**
** Created: Sat Jan 26 02:19:05 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "jabbersearch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jabbersearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JabberSearch[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   14,   13,   13, 0x05,
      74,   62,   13,   13, 0x05,
     121,  110,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     152,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_JabberSearch[] = {
    "JabberSearch\0\0AId,AFields\0"
    "searchFields(QString,ISearchFields)\0"
    "AId,AResult\0searchResult(QString,ISearchResult)\0"
    "AId,AError\0searchError(QString,XmppError)\0"
    "onSearchActionTriggered(bool)\0"
};

const QMetaObject JabberSearch::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JabberSearch,
      qt_meta_data_JabberSearch, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JabberSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JabberSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JabberSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JabberSearch))
        return static_cast<void*>(const_cast< JabberSearch*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< JabberSearch*>(this));
    if (!strcmp(_clname, "IJabberSearch"))
        return static_cast< IJabberSearch*>(const_cast< JabberSearch*>(this));
    if (!strcmp(_clname, "IStanzaRequestOwner"))
        return static_cast< IStanzaRequestOwner*>(const_cast< JabberSearch*>(this));
    if (!strcmp(_clname, "IDiscoFeatureHandler"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< JabberSearch*>(this));
    if (!strcmp(_clname, "IDataLocalizer"))
        return static_cast< IDataLocalizer*>(const_cast< JabberSearch*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< JabberSearch*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IJabberSearch/1.1"))
        return static_cast< IJabberSearch*>(const_cast< JabberSearch*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IStanzaRequestOwner/1.1"))
        return static_cast< IStanzaRequestOwner*>(const_cast< JabberSearch*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDiscoFeatureHandler/1.0"))
        return static_cast< IDiscoFeatureHandler*>(const_cast< JabberSearch*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IDataLocalizer/1.0"))
        return static_cast< IDataLocalizer*>(const_cast< JabberSearch*>(this));
    return QObject::qt_metacast(_clname);
}

int JabberSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: searchFields((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ISearchFields(*)>(_a[2]))); break;
        case 1: searchResult((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const ISearchResult(*)>(_a[2]))); break;
        case 2: searchError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 3: onSearchActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void JabberSearch::searchFields(const QString & _t1, const ISearchFields & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JabberSearch::searchResult(const QString & _t1, const ISearchResult & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JabberSearch::searchError(const QString & _t1, const XmppError & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
