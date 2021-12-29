/****************************************************************************
** Meta object code from reading C++ file 'usercontextmenu.h'
**
** Created: Sat Jan 26 02:16:33 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "usercontextmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usercontextmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserContextMenu[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x09,
      33,   16,   16,   16, 0x09,
      69,   49,   16,   16, 0x09,
     122,  114,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_UserContextMenu[] = {
    "UserContextMenu\0\0onAboutToShow()\0"
    "onAboutToHide()\0AUser,AShow,AStatus\0"
    "onMultiUserPresence(IMultiUser*,int,QString)\0"
    "ABefore\0onChatWindowContactJidChanged(Jid)\0"
};

const QMetaObject UserContextMenu::staticMetaObject = {
    { &Menu::staticMetaObject, qt_meta_stringdata_UserContextMenu,
      qt_meta_data_UserContextMenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserContextMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserContextMenu))
        return static_cast<void*>(const_cast< UserContextMenu*>(this));
    return Menu::qt_metacast(_clname);
}

int UserContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Menu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onAboutToShow(); break;
        case 1: onAboutToHide(); break;
        case 2: onMultiUserPresence((*reinterpret_cast< IMultiUser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: onChatWindowContactJidChanged((*reinterpret_cast< const Jid(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
