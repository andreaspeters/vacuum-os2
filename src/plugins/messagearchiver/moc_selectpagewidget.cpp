/****************************************************************************
** Meta object code from reading C++ file 'selectpagewidget.h'
**
** Created: Sat Jan 26 02:20:21 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "selectpagewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectpagewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SelectPageWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   17,   17,   17, 0x0a,
      75,   17,   17,   17, 0x0a,
      95,   18,   17,   17, 0x0a,
     119,   17,   17,   17, 0x09,
     137,   17,   17,   17, 0x09,
     161,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SelectPageWidget[] = {
    "SelectPageWidget\0\0AYear,AMonth\0"
    "currentPageChanged(int,int)\0showNextMonth()\0"
    "showPreviousMonth()\0setCurrentPage(int,int)\0"
    "onStartEditYear()\0onChangeYearBySpinbox()\0"
    "onChangeMonthByAction()\0"
};

const QMetaObject SelectPageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SelectPageWidget,
      qt_meta_data_SelectPageWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SelectPageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SelectPageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SelectPageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SelectPageWidget))
        return static_cast<void*>(const_cast< SelectPageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SelectPageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentPageChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: showNextMonth(); break;
        case 2: showPreviousMonth(); break;
        case 3: setCurrentPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: onStartEditYear(); break;
        case 5: onChangeYearBySpinbox(); break;
        case 6: onChangeMonthByAction(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SelectPageWidget::currentPageChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
