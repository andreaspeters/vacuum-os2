/****************************************************************************
** Meta object code from reading C++ file 'streamparser.h'
**
** Created: Sat Jan 26 01:49:01 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "streamparser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamparser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StreamParser[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x05,
      40,   14,   13,   13, 0x05,
      68,   61,   13,   13, 0x05,
      85,   13,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_StreamParser[] = {
    "StreamParser\0\0AElem\0opened(QDomElement)\0"
    "element(QDomElement)\0AError\0"
    "error(XmppError)\0closed()\0"
};

const QMetaObject StreamParser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StreamParser,
      qt_meta_data_StreamParser, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StreamParser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StreamParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StreamParser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StreamParser))
        return static_cast<void*>(const_cast< StreamParser*>(this));
    return QObject::qt_metacast(_clname);
}

int StreamParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: opened((*reinterpret_cast< QDomElement(*)>(_a[1]))); break;
        case 1: element((*reinterpret_cast< QDomElement(*)>(_a[1]))); break;
        case 2: error((*reinterpret_cast< const XmppError(*)>(_a[1]))); break;
        case 3: closed(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void StreamParser::opened(QDomElement _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StreamParser::element(QDomElement _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StreamParser::error(const XmppError & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StreamParser::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
