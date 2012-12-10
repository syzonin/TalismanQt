/****************************************************************************
** Meta object code from reading C++ file 'TheBigWindow.h'
**
** Created: Mon Dec 10 01:21:00 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TheBigWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TheBigWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TheBigWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      34,   13,   13,   13, 0x0a,
      56,   13,   13,   13, 0x0a,
      71,   13,   13,   13, 0x0a,
      87,   13,   13,   13, 0x0a,
     102,   13,   13,   13, 0x0a,
     128,   13,   13,   13, 0x0a,
     157,   13,   13,   13, 0x0a,
     186,   13,   13,   13, 0x0a,
     205,   13,   13,   13, 0x0a,
     227,   13,   13,   13, 0x0a,
     250,   13,   13,   13, 0x0a,
     274,   13,   13,   13, 0x0a,
     299,   13,   13,   13, 0x0a,
     326,   13,   13,   13, 0x0a,
     352,   13,   13,   13, 0x0a,
     377,   13,   13,   13, 0x0a,
     399,   13,   13,   13, 0x0a,
     425,   13,   13,   13, 0x0a,
     449,   13,   13,   13, 0x0a,
     474,   13,   13,   13, 0x0a,
     503,   13,   13,   13, 0x0a,
     520,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TheBigWindow[] = {
    "TheBigWindow\0\0btnRollDieClicked()\0"
    "btnCounterClockwise()\0btnClockwise()\0"
    "btnYesClicked()\0btnNoClicked()\0"
    "playerDeckDoubleClicked()\0"
    "adventureDeckDoubleClicked()\0"
    "btnRollEncounterDieClicked()\0"
    "btnAttackClicked()\0btnCastSpellClicked()\0"
    "btnEquipArmorClicked()\0btnEquipWeaponClicked()\0"
    "btnExchangeFateClicked()\0"
    "btnAddToFollowersClicked()\0"
    "btnAddToTrophiesClicked()\0"
    "btnAddToObjectsClicked()\0btnEncounterClicked()\0"
    "btnListFollowersClicked()\0"
    "btnListObjectsClicked()\0"
    "btnListTrophiesClicked()\0"
    "btnExchangeTrophiesClicked()\0"
    "btnNextClicked()\0updateCharacterStats()\0"
};

const QMetaObject TheBigWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TheBigWindow,
      qt_meta_data_TheBigWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TheBigWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TheBigWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TheBigWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TheBigWindow))
        return static_cast<void*>(const_cast< TheBigWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int TheBigWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: btnRollDieClicked(); break;
        case 1: btnCounterClockwise(); break;
        case 2: btnClockwise(); break;
        case 3: btnYesClicked(); break;
        case 4: btnNoClicked(); break;
        case 5: playerDeckDoubleClicked(); break;
        case 6: adventureDeckDoubleClicked(); break;
        case 7: btnRollEncounterDieClicked(); break;
        case 8: btnAttackClicked(); break;
        case 9: btnCastSpellClicked(); break;
        case 10: btnEquipArmorClicked(); break;
        case 11: btnEquipWeaponClicked(); break;
        case 12: btnExchangeFateClicked(); break;
        case 13: btnAddToFollowersClicked(); break;
        case 14: btnAddToTrophiesClicked(); break;
        case 15: btnAddToObjectsClicked(); break;
        case 16: btnEncounterClicked(); break;
        case 17: btnListFollowersClicked(); break;
        case 18: btnListObjectsClicked(); break;
        case 19: btnListTrophiesClicked(); break;
        case 20: btnExchangeTrophiesClicked(); break;
        case 21: btnNextClicked(); break;
        case 22: updateCharacterStats(); break;
        default: ;
        }
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
