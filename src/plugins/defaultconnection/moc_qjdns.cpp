/****************************************************************************
** Meta object code from reading C++ file 'qjdns.h'
**
** Created: Sat Jan 26 02:14:07 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../thirdparty/jdns/qjdns.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjdns.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QJDns[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,    7,    6,    6, 0x05,
      55,   52,    6,    6, 0x05,
      75,   70,    6,    6, 0x05,
      99,    6,    6,    6, 0x05,
     118,    6,    6,    6, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QJDns[] = {
    "QJDns\0\0id,results\0resultsReady(int,QJDns::Response)\0"
    "id\0published(int)\0id,e\0error(int,QJDns::Error)\0"
    "shutdownFinished()\0debugLinesReady()\0"
};

const QMetaObject QJDns::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QJDns,
      qt_meta_data_QJDns, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QJDns::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QJDns::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QJDns::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QJDns))
        return static_cast<void*>(const_cast< QJDns*>(this));
    return QObject::qt_metacast(_clname);
}

int QJDns::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: resultsReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QJDns::Response(*)>(_a[2]))); break;
        case 1: published((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QJDns::Error(*)>(_a[2]))); break;
        case 3: shutdownFinished(); break;
        case 4: debugLinesReady(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QJDns::resultsReady(int _t1, const QJDns::Response & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QJDns::published(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QJDns::error(int _t1, QJDns::Error _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QJDns::shutdownFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QJDns::debugLinesReady()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
