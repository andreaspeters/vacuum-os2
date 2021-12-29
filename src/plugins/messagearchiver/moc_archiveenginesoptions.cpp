/****************************************************************************
** Meta object code from reading C++ file 'archiveenginesoptions.h'
**
** Created: Sat Jan 26 02:20:07 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "archiveenginesoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'archiveenginesoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EngineWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      25,   13,   13,   13, 0x05,
      38,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   13,   13,   13, 0x0a,
      59,   13,   13,   13, 0x0a,
      67,   13,   13,   13, 0x09,
      91,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_EngineWidget[] = {
    "EngineWidget\0\0modified()\0childApply()\0"
    "childReset()\0apply()\0reset()\0"
    "onEnableButtonClicked()\0"
    "onDisableButtonClicked()\0"
};

const QMetaObject EngineWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_EngineWidget,
      qt_meta_data_EngineWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EngineWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EngineWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EngineWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EngineWidget))
        return static_cast<void*>(const_cast< EngineWidget*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< EngineWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< EngineWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int EngineWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: modified(); break;
        case 1: childApply(); break;
        case 2: childReset(); break;
        case 3: apply(); break;
        case 4: reset(); break;
        case 5: onEnableButtonClicked(); break;
        case 6: onDisableButtonClicked(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void EngineWidget::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void EngineWidget::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void EngineWidget::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_ArchiveEnginesOptions[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      34,   22,   22,   22, 0x05,
      47,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   22,   22,   22, 0x0a,
      68,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ArchiveEnginesOptions[] = {
    "ArchiveEnginesOptions\0\0modified()\0"
    "childApply()\0childReset()\0apply()\0"
    "reset()\0"
};

const QMetaObject ArchiveEnginesOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ArchiveEnginesOptions,
      qt_meta_data_ArchiveEnginesOptions, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArchiveEnginesOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArchiveEnginesOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArchiveEnginesOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArchiveEnginesOptions))
        return static_cast<void*>(const_cast< ArchiveEnginesOptions*>(this));
    if (!strcmp(_clname, "IOptionsWidget"))
        return static_cast< IOptionsWidget*>(const_cast< ArchiveEnginesOptions*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IOptionsWidget/1.0"))
        return static_cast< IOptionsWidget*>(const_cast< ArchiveEnginesOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int ArchiveEnginesOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: modified(); break;
        case 1: childApply(); break;
        case 2: childReset(); break;
        case 3: apply(); break;
        case 4: reset(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ArchiveEnginesOptions::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ArchiveEnginesOptions::childApply()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ArchiveEnginesOptions::childReset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
