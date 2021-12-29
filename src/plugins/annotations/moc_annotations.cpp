/****************************************************************************
** Meta object code from reading C++ file 'annotations.h'
**
** Created: Sat Jan 26 02:22:09 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "annotations.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'annotations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Annotations[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   13,   12,   12, 0x05,
      47,   13,   12,   12, 0x05,
      92,   69,   12,   12, 0x05,
     133,  120,   12,   12, 0x05,
     177,  170,   12,   12, 0x25,
     210,   12,   12,   12, 0x25,

 // slots: signature, parameters, type, tag, flags
     230,   12,   12,   12, 0x09,
     262,   13,   12,   12, 0x09,
     314,  290,   12,   12, 0x09,
     358,  290,   12,   12, 0x09,
     434,  403,   12,   12, 0x09,
     476,   13,   12,   12, 0x09,
     526,  504,   12,   12, 0x09,
     593,  581,   12,   12, 0x09,
     655,  631,   12,   12, 0x09,
     716,  631,   12,   12, 0x09,
     805,  779,   12,   12, 0x09,
     869,   12,   12,   12, 0x09,
     908,   12,   12,   12, 0x09,
     940,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Annotations[] = {
    "Annotations\0\0AStreamJid\0annotationsLoaded(Jid)\0"
    "annotationsSaved(Jid)\0AStreamJid,AContactJid\0"
    "annotationModified(Jid,Jid)\0AIndex,ARole\0"
    "rosterDataChanged(IRosterIndex*,int)\0"
    "AIndex\0rosterDataChanged(IRosterIndex*)\0"
    "rosterDataChanged()\0onSaveAnnotationsTimerTimeout()\0"
    "onPrivateStorageOpened(Jid)\0"
    "AId,AStreamJid,AElement\0"
    "onPrivateDataSaved(QString,Jid,QDomElement)\0"
    "onPrivateDataLoaded(QString,Jid,QDomElement)\0"
    "AStreamJid,ATagName,ANamespace\0"
    "onPrivateDataChanged(Jid,QString,QString)\0"
    "onPrivateStorageClosed(Jid)\0"
    "ARoster,AItem,ABefore\0"
    "onRosterItemReceived(IRoster*,IRosterItem,IRosterItem)\0"
    "AId,AWidget\0onShortcutActivated(QString,QWidget*)\0"
    "AIndexes,ALabelId,AMenu\0"
    "onRosterIndexContextMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "onRosterIndexClipboardMenu(QList<IRosterIndex*>,quint32,Menu*)\0"
    "AIndex,ALabelId,AToolTips\0"
    "onRosterIndexToolTips(IRosterIndex*,quint32,QMap<int,QString>&)\0"
    "onCopyToClipboardActionTriggered(bool)\0"
    "onEditNoteActionTriggered(bool)\0"
    "onEditNoteDialogDestroyed()\0"
};

const QMetaObject Annotations::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Annotations,
      qt_meta_data_Annotations, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Annotations::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Annotations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Annotations::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Annotations))
        return static_cast<void*>(const_cast< Annotations*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< Annotations*>(this));
    if (!strcmp(_clname, "IAnnotations"))
        return static_cast< IAnnotations*>(const_cast< Annotations*>(this));
    if (!strcmp(_clname, "IRosterDataHolder"))
        return static_cast< IRosterDataHolder*>(const_cast< Annotations*>(this));
    if (!strcmp(_clname, "Vacuum.Core.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< Annotations*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IAnnotations/1.1"))
        return static_cast< IAnnotations*>(const_cast< Annotations*>(this));
    if (!strcmp(_clname, "Vacuum.Plugin.IRosterDataHolder/1.0"))
        return static_cast< IRosterDataHolder*>(const_cast< Annotations*>(this));
    return QObject::qt_metacast(_clname);
}

int Annotations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: annotationsLoaded((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 1: annotationsSaved((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 2: annotationModified((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2]))); break;
        case 3: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: rosterDataChanged((*reinterpret_cast< IRosterIndex*(*)>(_a[1]))); break;
        case 5: rosterDataChanged(); break;
        case 6: onSaveAnnotationsTimerTimeout(); break;
        case 7: onPrivateStorageOpened((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 8: onPrivateDataSaved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< const QDomElement(*)>(_a[3]))); break;
        case 9: onPrivateDataLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Jid(*)>(_a[2])),(*reinterpret_cast< const QDomElement(*)>(_a[3]))); break;
        case 10: onPrivateDataChanged((*reinterpret_cast< const Jid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: onPrivateStorageClosed((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        case 12: onRosterItemReceived((*reinterpret_cast< IRoster*(*)>(_a[1])),(*reinterpret_cast< const IRosterItem(*)>(_a[2])),(*reinterpret_cast< const IRosterItem(*)>(_a[3]))); break;
        case 13: onShortcutActivated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 14: onRosterIndexContextMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 15: onRosterIndexClipboardMenu((*reinterpret_cast< const QList<IRosterIndex*>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< Menu*(*)>(_a[3]))); break;
        case 16: onRosterIndexToolTips((*reinterpret_cast< IRosterIndex*(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< QMap<int,QString>(*)>(_a[3]))); break;
        case 17: onCopyToClipboardActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: onEditNoteActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: onEditNoteDialogDestroyed(); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void Annotations::annotationsLoaded(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Annotations::annotationsSaved(const Jid & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Annotations::annotationModified(const Jid & _t1, const Jid & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Annotations::rosterDataChanged(IRosterIndex * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
