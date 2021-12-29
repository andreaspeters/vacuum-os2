/****************************************************************************
** Meta object code from reading C++ file 'searchlineedit.h'
**
** Created: Sat Jan 26 00:39:41 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "searchlineedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchlineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SearchLineEdit[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      30,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   15,   15,   15, 0x08,
      65,   15,   15,   15, 0x08,
      88,   15,   15,   15, 0x08,
     120,  114,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SearchLineEdit[] = {
    "SearchLineEdit\0\0searchStart()\0"
    "searchNext()\0onStartTimerTimeout()\0"
    "onClearButtonClicked()\0onLineEditReturnPressed()\0"
    "AText\0onLineEditTextChanged(QString)\0"
};

const QMetaObject SearchLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_SearchLineEdit,
      qt_meta_data_SearchLineEdit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchLineEdit))
        return static_cast<void*>(const_cast< SearchLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int SearchLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: searchStart(); break;
        case 1: searchNext(); break;
        case 2: onStartTimerTimeout(); break;
        case 3: onClearButtonClicked(); break;
        case 4: onLineEditReturnPressed(); break;
        case 5: onLineEditTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SearchLineEdit::searchStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SearchLineEdit::searchNext()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
