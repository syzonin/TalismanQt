/********************************************************************************
** Form generated from reading UI file 'MapBoard.ui'
**
** Created: Sun Dec 2 18:40:41 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPBOARD_H
#define UI_MAPBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapBoard
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *board;

    void setupUi(QWidget *MapBoard)
    {
        if (MapBoard->objectName().isEmpty())
            MapBoard->setObjectName(QString::fromUtf8("MapBoard"));
        MapBoard->resize(103, 102);
        gridLayoutWidget = new QWidget(MapBoard);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 81, 81));
        board = new QGridLayout(gridLayoutWidget);
        board->setSpacing(1);
        board->setObjectName(QString::fromUtf8("board"));
        board->setSizeConstraint(QLayout::SetMinimumSize);
        board->setContentsMargins(0, 0, 0, 0);

        retranslateUi(MapBoard);

        QMetaObject::connectSlotsByName(MapBoard);
    } // setupUi

    void retranslateUi(QWidget *MapBoard)
    {
        MapBoard->setWindowTitle(QApplication::translate("MapBoard", "MapBoard", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MapBoard: public Ui_MapBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPBOARD_H
