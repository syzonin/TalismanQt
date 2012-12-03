/****************************************************************************
** Meta object code from reading C++ file 'Character.h'
**
** Created: Sun Dec 2 18:23:21 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Character.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Character.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Character[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      28,   10,   10,   10, 0x0a,
      42,   10,   10,   10, 0x0a,
      55,   10,   10,   10, 0x0a,
      68,   10,   10,   10, 0x0a,
      81,   10,   10,   10, 0x0a,
      97,   10,   10,   10, 0x0a,
     116,   10,   10,   10, 0x0a,
     135,   10,   10,   10, 0x0a,
     154,  152,   10,   10, 0x0a,
     174,  172,   10,   10, 0x0a,
     194,  192,   10,   10, 0x0a,
     213,  192,   10,   10, 0x0a,
     235,   10,   10,   10, 0x0a,
     256,   10,   10,   10, 0x0a,
     281,  192,  276,   10, 0x0a,
     302,  300,   10,   10, 0x0a,
     326,  172,   10,   10, 0x0a,
     354,  348,   10,   10, 0x0a,
     386,  378,   10,   10, 0x0a,
     421,   10,  414,   10, 0x0a,
     443,  439,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Character[] = {
    "Character\0\0setStrength(int)\0setCraft(int)\0"
    "setFate(int)\0setGold(int)\0setLife(int)\0"
    "setText(string)\0setLifePoints(int)\0"
    "setFateTokens(int)\0setStart(string)\0"
    ",\0setCoord(int,int)\0a\0setAlignment(int)\0"
    "s\0addAbility(string)\0removeAbility(string)\0"
    "removeActiveWeapon()\0removeActiveArmor()\0"
    "bool\0hasAbility(string)\0w\0"
    "addActiveWeapon(Weapon)\0addActiveArmor(Armor)\0"
    "index\0removeActiveWeapon(int)\0w,index\0"
    "addActiveWeapon(Weapon,int)\0Weapon\0"
    "getSecondWeapon()\0,,,\0move(string,string,int,int)\0"
};

const QMetaObject Character::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Character,
      qt_meta_data_Character, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Character::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Character::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Character::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Character))
        return static_cast<void*>(const_cast< Character*>(this));
    return QWidget::qt_metacast(_clname);
}

int Character::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setStrength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: setCraft((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: setFate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: setGold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: setLife((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: setText((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 6: setLifePoints((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: setFateTokens((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: setStart((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 9: setCoord((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: setAlignment((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: addAbility((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 12: removeAbility((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 13: removeActiveWeapon(); break;
        case 14: removeActiveArmor(); break;
        case 15: { bool _r = hasAbility((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: addActiveWeapon((*reinterpret_cast< Weapon(*)>(_a[1]))); break;
        case 17: addActiveArmor((*reinterpret_cast< Armor(*)>(_a[1]))); break;
        case 18: removeActiveWeapon((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: addActiveWeapon((*reinterpret_cast< Weapon(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: { Weapon _r = getSecondWeapon();
            if (_a[0]) *reinterpret_cast< Weapon*>(_a[0]) = _r; }  break;
        case 21: move((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
