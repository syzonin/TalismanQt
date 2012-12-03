/****************************************************************************
** Meta object code from reading C++ file 'AdventureCardEdit.h'
**
** Created: Sun Dec 2 18:23:19 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AdventureCardEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdventureCardEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AdventureCardEdit[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   19,   18,   18, 0x0a,
      56,   50,   18,   18, 0x0a,
      74,   50,   18,   18, 0x0a,
      91,   18,   18,   18, 0x0a,
     101,   50,   18,   18, 0x0a,
     129,   50,   18,   18, 0x0a,
     149,   50,   18,   18, 0x0a,
     174,   18,   18,   18, 0x0a,
     188,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AdventureCardEdit[] = {
    "AdventureCardEdit\0\0index\0"
    "currentIndexChanged(int)\0value\0"
    "setTitle(QString)\0setType(QString)\0"
    "setText()\0setEncounterNumber(QString)\0"
    "setSubType(QString)\0setAttackPoints(QString)\0"
    "clickedSave()\0clickedReload()\0"
};

const QMetaObject AdventureCardEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdventureCardEdit,
      qt_meta_data_AdventureCardEdit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AdventureCardEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AdventureCardEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AdventureCardEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdventureCardEdit))
        return static_cast<void*>(const_cast< AdventureCardEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdventureCardEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: setType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: setText(); break;
        case 4: setEncounterNumber((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: setSubType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: setAttackPoints((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: clickedSave(); break;
        case 8: clickedReload(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
