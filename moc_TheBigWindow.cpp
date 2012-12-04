/****************************************************************************
** Meta object code from reading C++ file 'TheBigWindow.h'
**
** Created: Mon Dec 3 21:46:29 2012
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
       7,   14, // methods
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

       0        // eod
};

static const char qt_meta_stringdata_TheBigWindow[] = {
    "TheBigWindow\0\0btnRollDieClicked()\0"
    "btnCounterClockwise()\0btnClockwise()\0"
    "btnYesClicked()\0btnNoClicked()\0"
    "playerDeckDoubleClicked()\0"
    "adventureDeckDoubleClicked()\0"
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
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
