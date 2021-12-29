/****************************************************************************
** Meta object code from reading C++ file 'consolewidget.h'
**
** Created: Sat Jan 26 02:21:57 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "consolewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consolewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConsoleWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x09,
      39,   14,   14,   14, 0x09,
      66,   14,   14,   14, 0x09,
      85,   14,   14,   14, 0x09,
     107,   14,   14,   14, 0x09,
     139,  132,   14,   14, 0x09,
     170,  161,   14,   14, 0x09,
     200,   14,   14,   14, 0x09,
     228,   14,   14,   14, 0x09,
     267,   14,   14,   14, 0x09,
     287,   14,   14,   14, 0x09,
     313,   14,   14,   14, 0x09,
     349,  343,   14,   14, 0x09,
     394,  382,   14,   14, 0x09,
     444,  424,   14,   14, 0x09,
     481,  382,   14,   14, 0x09,
     531,  513,   14,   14, 0x09,
     573,   14,   14,   14, 0x09,
     591,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ConsoleWidget[] = {
    "ConsoleWidget\0\0onAddConditionClicked()\0"
    "onRemoveConditionClicked()\0"
    "onSendXMLClicked()\0onAddContextClicked()\0"
    "onRemoveContextClicked()\0AIndex\0"
    "onContextChanged(int)\0AChecked\0"
    "onWordWrapButtonToggled(bool)\0"
    "onTextHilightTimerTimeout()\0"
    "onTextVisiblePositionBoundaryChanged()\0"
    "onTextSearchStart()\0onTextSearchNextClicked()\0"
    "onTextSearchPreviousClicked()\0AText\0"
    "onTextSearchTextChanged(QString)\0"
    "AXmppStream\0onStreamCreated(IXmppStream*)\0"
    "AXmppStream,ABefore\0"
    "onStreamJidChanged(IXmppStream*,Jid)\0"
    "onStreamDestroyed(IXmppStream*)\0"
    "AHandleId,AHandle\0"
    "onStanzaHandleInserted(int,IStanzaHandle)\0"
    "onOptionsOpened()\0onOptionsClosed()\0"
};

const QMetaObject ConsoleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ConsoleWidget,
      qt_meta_data_ConsoleWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConsoleWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleWidget))
        return static_cast<void*>(const_cast< ConsoleWidget*>(this));
    if (!strcmp(_clname, "IXmppStanzaHadler"))
        return static_cast< IXmppStanzaHadler*>(const_cast< ConsoleWidget*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IXmppStanzaHadler/1.0"))
        return static_cast< IXmppStanzaHadler*>(const_cast< ConsoleWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onAddConditionClicked(); break;
        case 1: onRemoveConditionClicked(); break;
        case 2: onSendXMLClicked(); break;
        case 3: onAddContextClicked(); break;
        case 4: onRemoveContextClicked(); break;
        case 5: onContextChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: onWordWrapButtonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: onTextHilightTimerTimeout(); break;
        case 8: onTextVisiblePositionBoundaryChanged(); break;
        case 9: onTextSearchStart(); break;
        case 10: onTextSearchNextClicked(); break;
        case 11: onTextSearchPreviousClicked(); break;
        case 12: onTextSearchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: onStreamCreated((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 14: onStreamJidChanged((*reinterpret_cast< IXmppStream*(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 15: onStreamDestroyed((*reinterpret_cast< IXmppStream*(*)>(_a[1]))); break;
        case 16: onStanzaHandleInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const IStanzaHandle(*)>(_a[2]))); break;
        case 17: onOptionsOpened(); break;
        case 18: onOptionsClosed(); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
