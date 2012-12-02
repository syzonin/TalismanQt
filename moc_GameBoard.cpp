/****************************************************************************
** Meta object code from reading C++ file 'GameBoard.h'
**
** Created: Sat Dec 1 23:33:47 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "GameBoard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GameBoard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GameBoard[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      37,   10,   10,   10, 0x0a,
      57,   10,   10,   10, 0x0a,
      77,   10,   10,   10, 0x0a,
      96,   10,   10,   10, 0x0a,
     121,   10,   10,   10, 0x0a,
     148,   10,   10,   10, 0x0a,
     174,   10,   10,   10, 0x0a,
     196,   10,   10,   10, 0x0a,
     222,   10,   10,   10, 0x0a,
     247,   10,   10,   10, 0x0a,
     276,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GameBoard[] = {
    "GameBoard\0\0playerDeckDoubleClicked()\0"
    "deckDoubleClicked()\0btnRollDieClicked()\0"
    "btnAttackClicked()\0btnExchangeFateClicked()\0"
    "btnAddToFollowersClicked()\0"
    "btnAddToTrophiesClicked()\0"
    "btnEncounterClicked()\0btnListFollowersClicked()\0"
    "btnListTrophiesClicked()\0"
    "btnExchangeTrophiesClicked()\0"
    "btnEndTurnClicked()\0"
};

const QMetaObject GameBoard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GameBoard,
      qt_meta_data_GameBoard, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GameBoard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GameBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GameBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GameBoard))
        return static_cast<void*>(const_cast< GameBoard*>(this));
    return QWidget::qt_metacast(_clname);
}

int GameBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: playerDeckDoubleClicked(); break;
        case 1: deckDoubleClicked(); break;
        case 2: btnRollDieClicked(); break;
        case 3: btnAttackClicked(); break;
        case 4: btnExchangeFateClicked(); break;
        case 5: btnAddToFollowersClicked(); break;
        case 6: btnAddToTrophiesClicked(); break;
        case 7: btnEncounterClicked(); break;
        case 8: btnListFollowersClicked(); break;
        case 9: btnListTrophiesClicked(); break;
        case 10: btnExchangeTrophiesClicked(); break;
        case 11: btnEndTurnClicked(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
