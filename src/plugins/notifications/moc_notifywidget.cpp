/****************************************************************************
** Meta object code from reading C++ file 'notifywidget.h'
**
** Created: Sat Jan 26 02:21:19 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "notifywidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notifywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NotifyWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      32,   13,   13,   13, 0x05,
      48,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   13,   13,   13, 0x09,
      82,   13,   13,   13, 0x09,
      97,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_NotifyWidget[] = {
    "NotifyWidget\0\0notifyActivated()\0"
    "notifyRemoved()\0windowDestroyed()\0"
    "onAnimateStep()\0adjustHeight()\0"
    "updateElidedText()\0"
};

const QMetaObject NotifyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NotifyWidget,
      qt_meta_data_NotifyWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NotifyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NotifyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NotifyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NotifyWidget))
        return static_cast<void*>(const_cast< NotifyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int NotifyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: notifyActivated(); break;
        case 1: notifyRemoved(); break;
        case 2: windowDestroyed(); break;
        case 3: onAnimateStep(); break;
        case 4: adjustHeight(); break;
        case 5: updateElidedText(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void NotifyWidget::notifyActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void NotifyWidget::notifyRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void NotifyWidget::windowDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
