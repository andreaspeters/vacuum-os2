/****************************************************************************
** Meta object code from reading C++ file 'discoinfowindow.h'
**
** Created: Sat Jan 26 02:17:37 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "discoinfowindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'discoinfowindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DiscoInfoWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   17,   16,   16, 0x09,
      79,   60,   16,   16, 0x09,
     138,   16,   16,   16, 0x09,
     162,  156,   16,   16, 0x09,
     204,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DiscoInfoWindow[] = {
    "DiscoInfoWindow\0\0ADiscoInfo\0"
    "onDiscoInfoReceived(IDiscoInfo)\0"
    "ACurrent,APrevious\0"
    "onCurrentFeatureChanged(QListWidgetItem*,QListWidgetItem*)\0"
    "onUpdateClicked()\0AItem\0"
    "onListItemDoubleClicked(QListWidgetItem*)\0"
    "onShowExtensionForm(bool)\0"
};

const QMetaObject DiscoInfoWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DiscoInfoWindow,
      qt_meta_data_DiscoInfoWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiscoInfoWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiscoInfoWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiscoInfoWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiscoInfoWindow))
        return static_cast<void*>(const_cast< DiscoInfoWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int DiscoInfoWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onDiscoInfoReceived((*reinterpret_cast< const IDiscoInfo(*)>(_a[1]))); break;
        case 1: onCurrentFeatureChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 2: onUpdateClicked(); break;
        case 3: onListItemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: onShowExtensionForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
