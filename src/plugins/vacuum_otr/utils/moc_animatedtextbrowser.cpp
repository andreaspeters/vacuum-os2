/****************************************************************************
** Meta object code from reading C++ file 'animatedtextbrowser.h'
**
** Created: Sat Jan 26 00:39:36 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "animatedtextbrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animatedtextbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AnimatedTextBrowser[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      60,   54,   20,   20, 0x05,
      81,   54,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     103,   20,   20,   20, 0x09,
     129,   20,   20,   20, 0x09,
     154,   20,   20,   20, 0x09,
     182,   20,   20,   20, 0x09,
     219,  211,   20,   20, 0x09,
     272,  246,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AnimatedTextBrowser[] = {
    "AnimatedTextBrowser\0\0"
    "visiblePositionBoundaryChanged()\0AName\0"
    "resourceLoaded(QUrl)\0resourceUpdated(QUrl)\0"
    "onAnimationFrameChanged()\0"
    "onResourceLoadFinished()\0"
    "onUpdateDocumentAnimation()\0"
    "onVerticalScrollBarChanged()\0AObject\0"
    "onMovieDestroyed(QObject*)\0"
    "APosition,ARemoved,AAdded\0"
    "onDocumentContentsChanged(int,int,int)\0"
};

const QMetaObject AnimatedTextBrowser::staticMetaObject = {
    { &QTextBrowser::staticMetaObject, qt_meta_stringdata_AnimatedTextBrowser,
      qt_meta_data_AnimatedTextBrowser, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AnimatedTextBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AnimatedTextBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AnimatedTextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AnimatedTextBrowser))
        return static_cast<void*>(const_cast< AnimatedTextBrowser*>(this));
    return QTextBrowser::qt_metacast(_clname);
}

int AnimatedTextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: visiblePositionBoundaryChanged(); break;
        case 1: resourceLoaded((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: resourceUpdated((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: onAnimationFrameChanged(); break;
        case 4: onResourceLoadFinished(); break;
        case 5: onUpdateDocumentAnimation(); break;
        case 6: onVerticalScrollBarChanged(); break;
        case 7: onMovieDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 8: onDocumentContentsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AnimatedTextBrowser::visiblePositionBoundaryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AnimatedTextBrowser::resourceLoaded(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AnimatedTextBrowser::resourceUpdated(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
