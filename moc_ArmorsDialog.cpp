/****************************************************************************
** Meta object code from reading C++ file 'ArmorsDialog.h'
**
** Created: Sun Dec 9 20:33:58 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ArmorsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArmorsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArmorDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x0a,
      44,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ArmorDialog[] = {
    "ArmorDialog\0\0index\0currentIndexChanged(int)\0"
    "btnEquipClicked()\0"
};

const QMetaObject ArmorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ArmorDialog,
      qt_meta_data_ArmorDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArmorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArmorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArmorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArmorDialog))
        return static_cast<void*>(const_cast< ArmorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ArmorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: btnEquipClicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
