/****************************************************************************
** Meta object code from reading C++ file 'archiveviewwindow.h'
**
** Created: Sat Jan 26 02:20:13 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "archiveviewwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'archiveviewwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArchiveViewWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x09,
      50,   18,   18,   18, 0x09,
      81,   18,   18,   18, 0x09,
     124,  111,   18,   18, 0x09,
     154,   18,   18,   18, 0x09,
     185,   18,   18,   18, 0x09,
     237,  220,   18,   18, 0x09,
     283,   18,   18,   18, 0x09,
     306,   18,   18,   18, 0x09,
     334,   18,   18,   18, 0x09,
     373,   18,   18,   18, 0x09,
     393,   18,   18,   18, 0x09,
     419,   18,   18,   18, 0x09,
     449,   18,   18,   18, 0x09,
     486,   18,   18,   18, 0x09,
     512,   18,   18,   18, 0x09,
     547,  542,   18,   18, 0x09,
     595,  584,   18,   18, 0x09,
     650,  637,   18,   18, 0x09,
     720,  704,   18,   18, 0x09,
     787,  774,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ArchiveViewWindow[] = {
    "ArchiveViewWindow\0\0onHeadersUpdateButtonClicked()\0"
    "onHeadersRequestTimerTimeout()\0"
    "onLoadEarlierMessageClicked()\0"
    "AYear,AMonth\0onCurrentPageChanged(int,int)\0"
    "onCollectionShowTimerTimeout()\0"
    "onCollectionsRequestTimerTimeout()\0"
    "ACurrent,ABefore\0"
    "onCurrentItemChanged(QModelIndex,QModelIndex)\0"
    "onArchiveSearchStart()\0"
    "onTextHilightTimerTimeout()\0"
    "onTextVisiblePositionBoundaryChanged()\0"
    "onTextSearchStart()\0onTextSearchNextClicked()\0"
    "onTextSearchPreviousClicked()\0"
    "onTextSearchCaseSensitivityChanged()\0"
    "onSetContactJidByAction()\0"
    "onRemoveCollectionsByAction()\0APos\0"
    "onHeaderContextMenuRequested(QPoint)\0"
    "AId,AError\0onArchiveRequestFailed(QString,XmppError)\0"
    "AId,AHeaders\0"
    "onArchiveHeadersLoaded(QString,QList<IArchiveHeader>)\0"
    "AId,ACollection\0"
    "onArchiveCollectionLoaded(QString,IArchiveCollection)\0"
    "AId,ARequest\0"
    "onArchiveCollectionsRemoved(QString,IArchiveRequest)\0"
};

const QMetaObject ArchiveViewWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ArchiveViewWindow,
      qt_meta_data_ArchiveViewWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArchiveViewWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArchiveViewWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArchiveViewWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArchiveViewWindow))
        return static_cast<void*>(const_cast< ArchiveViewWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ArchiveViewWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onHeadersUpdateButtonClicked(); break;
        case 1: onHeadersRequestTimerTimeout(); break;
        case 2: onLoadEarlierMessageClicked(); break;
        case 3: onCurrentPageChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: onCollectionShowTimerTimeout(); break;
        case 5: onCollectionsRequestTimerTimeout(); break;
        case 6: onCurrentItemChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 7: onArchiveSearchStart(); break;
        case 8: onTextHilightTimerTimeout(); break;
        case 9: onTextVisiblePositionBoundaryChanged(); break;
        case 10: onTextSearchStart(); break;
        case 11: onTextSearchNextClicked(); break;
        case 12: onTextSearchPreviousClicked(); break;
        case 13: onTextSearchCaseSensitivityChanged(); break;
        case 14: onSetContactJidByAction(); break;
        case 15: onRemoveCollectionsByAction(); break;
        case 16: onHeaderContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 17: onArchiveRequestFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const XmppError(*)>(_a[2]))); break;
        case 18: onArchiveHeadersLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<IArchiveHeader>(*)>(_a[2]))); break;
        case 19: onArchiveCollectionLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveCollection(*)>(_a[2]))); break;
        case 20: onArchiveCollectionsRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const IArchiveRequest(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
