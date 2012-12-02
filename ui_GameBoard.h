/********************************************************************************
** Form generated from reading UI file 'GameBoard.ui'
**
** Created: Sat Dec 1 12:47:36 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEBOARD_H
#define UI_GAMEBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameBoard
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layout;
    QHBoxLayout *hLayout;
    QVBoxLayout *mainMenu;
    QPushButton *btnEncounter;
    QPushButton *btnListFollowers;
    QPushButton *btnListTrophies;
    QPushButton *btnExchangeTrophies;
    QPushButton *btnRollDie;
    QPushButton *btnAttack;
    QPushButton *btnExchangeFate;
    QPushButton *btnAddToFollowers;
    QPushButton *btnAddToTrophies;
    QPushButton *btnEndTurn;
    QHBoxLayout *diceLayout;
    QGridLayout *arena;
    QTextEdit *txtLog;

    void setupUi(QWidget *GameBoard)
    {
        if (GameBoard->objectName().isEmpty())
            GameBoard->setObjectName(QString::fromUtf8("GameBoard"));
        GameBoard->resize(800, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameBoard->sizePolicy().hasHeightForWidth());
        GameBoard->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(GameBoard);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 781, 381));
        layout = new QVBoxLayout(verticalLayoutWidget);
        layout->setSpacing(9);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setContentsMargins(0, 0, 0, 0);
        hLayout = new QHBoxLayout();
        hLayout->setObjectName(QString::fromUtf8("hLayout"));
        mainMenu = new QVBoxLayout();
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        btnEncounter = new QPushButton(verticalLayoutWidget);
        btnEncounter->setObjectName(QString::fromUtf8("btnEncounter"));

        mainMenu->addWidget(btnEncounter);

        btnListFollowers = new QPushButton(verticalLayoutWidget);
        btnListFollowers->setObjectName(QString::fromUtf8("btnListFollowers"));

        mainMenu->addWidget(btnListFollowers);

        btnListTrophies = new QPushButton(verticalLayoutWidget);
        btnListTrophies->setObjectName(QString::fromUtf8("btnListTrophies"));

        mainMenu->addWidget(btnListTrophies);

        btnExchangeTrophies = new QPushButton(verticalLayoutWidget);
        btnExchangeTrophies->setObjectName(QString::fromUtf8("btnExchangeTrophies"));

        mainMenu->addWidget(btnExchangeTrophies);

        btnRollDie = new QPushButton(verticalLayoutWidget);
        btnRollDie->setObjectName(QString::fromUtf8("btnRollDie"));

        mainMenu->addWidget(btnRollDie);

        btnAttack = new QPushButton(verticalLayoutWidget);
        btnAttack->setObjectName(QString::fromUtf8("btnAttack"));

        mainMenu->addWidget(btnAttack);

        btnExchangeFate = new QPushButton(verticalLayoutWidget);
        btnExchangeFate->setObjectName(QString::fromUtf8("btnExchangeFate"));

        mainMenu->addWidget(btnExchangeFate);

        btnAddToFollowers = new QPushButton(verticalLayoutWidget);
        btnAddToFollowers->setObjectName(QString::fromUtf8("btnAddToFollowers"));

        mainMenu->addWidget(btnAddToFollowers);

        btnAddToTrophies = new QPushButton(verticalLayoutWidget);
        btnAddToTrophies->setObjectName(QString::fromUtf8("btnAddToTrophies"));

        mainMenu->addWidget(btnAddToTrophies);

        btnEndTurn = new QPushButton(verticalLayoutWidget);
        btnEndTurn->setObjectName(QString::fromUtf8("btnEndTurn"));

        mainMenu->addWidget(btnEndTurn);

        diceLayout = new QHBoxLayout();
        diceLayout->setObjectName(QString::fromUtf8("diceLayout"));

        mainMenu->addLayout(diceLayout);


        hLayout->addLayout(mainMenu);

        arena = new QGridLayout();
        arena->setObjectName(QString::fromUtf8("arena"));

        hLayout->addLayout(arena);


        layout->addLayout(hLayout);

        txtLog = new QTextEdit(verticalLayoutWidget);
        txtLog->setObjectName(QString::fromUtf8("txtLog"));
        txtLog->setFrameShape(QFrame::StyledPanel);
        txtLog->setReadOnly(true);

        layout->addWidget(txtLog);


        retranslateUi(GameBoard);

        QMetaObject::connectSlotsByName(GameBoard);
    } // setupUi

    void retranslateUi(QWidget *GameBoard)
    {
        GameBoard->setWindowTitle(QApplication::translate("GameBoard", "GameBoard", 0, QApplication::UnicodeUTF8));
        btnEncounter->setText(QApplication::translate("GameBoard", "Encounter", 0, QApplication::UnicodeUTF8));
        btnListFollowers->setText(QApplication::translate("GameBoard", "List Followers", 0, QApplication::UnicodeUTF8));
        btnListTrophies->setText(QApplication::translate("GameBoard", "List Trophies", 0, QApplication::UnicodeUTF8));
        btnExchangeTrophies->setText(QApplication::translate("GameBoard", "Exchange Trophies", 0, QApplication::UnicodeUTF8));
        btnRollDie->setText(QApplication::translate("GameBoard", "Roll Die", 0, QApplication::UnicodeUTF8));
        btnAttack->setText(QApplication::translate("GameBoard", "Attack", 0, QApplication::UnicodeUTF8));
        btnExchangeFate->setText(QApplication::translate("GameBoard", "Exchange Fate", 0, QApplication::UnicodeUTF8));
        btnAddToFollowers->setText(QApplication::translate("GameBoard", "Add To Followers", 0, QApplication::UnicodeUTF8));
        btnAddToTrophies->setText(QApplication::translate("GameBoard", "Add to Trophies", 0, QApplication::UnicodeUTF8));
        btnEndTurn->setText(QApplication::translate("GameBoard", "End Turn", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GameBoard: public Ui_GameBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEBOARD_H
