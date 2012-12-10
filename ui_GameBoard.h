/********************************************************************************
** Form generated from reading UI file 'GameBoard.ui'
**
** Created: Sun Dec 9 16:24:18 2012
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
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameBoard
{
public:
    QGridLayout *gridLayout;
    QGridLayout *charDetails;
    QLabel *lblStr;
    QLabel *lblLife;
    QLabel *lblGold;
    QLabel *lblFate;
    QLabel *lblCft;
    QLabel *lblStrPts;
    QLabel *lblCftPts;
    QLabel *lblFatePts;
    QLabel *lblGoldPts;
    QLabel *lblLifePts;
    QPushButton *btnFollowers;
    QPushButton *btnObjects;
    QPushButton *btnTrophies;
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
        GameBoard->resize(312, 439);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameBoard->sizePolicy().hasHeightForWidth());
        GameBoard->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(GameBoard);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        charDetails = new QGridLayout();
        charDetails->setSpacing(0);
        charDetails->setObjectName(QString::fromUtf8("charDetails"));
        charDetails->setSizeConstraint(QLayout::SetMinimumSize);
        lblStr = new QLabel(GameBoard);
        lblStr->setObjectName(QString::fromUtf8("lblStr"));
        lblStr->setLayoutDirection(Qt::LeftToRight);
        lblStr->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblStr, 0, 0, 1, 1);

        lblLife = new QLabel(GameBoard);
        lblLife->setObjectName(QString::fromUtf8("lblLife"));
        lblLife->setLayoutDirection(Qt::LeftToRight);
        lblLife->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblLife, 0, 4, 1, 1);

        lblGold = new QLabel(GameBoard);
        lblGold->setObjectName(QString::fromUtf8("lblGold"));
        lblGold->setLayoutDirection(Qt::LeftToRight);
        lblGold->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblGold, 0, 3, 1, 1);

        lblFate = new QLabel(GameBoard);
        lblFate->setObjectName(QString::fromUtf8("lblFate"));
        lblFate->setLayoutDirection(Qt::LeftToRight);
        lblFate->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblFate, 0, 2, 1, 1);

        lblCft = new QLabel(GameBoard);
        lblCft->setObjectName(QString::fromUtf8("lblCft"));
        lblCft->setLayoutDirection(Qt::LeftToRight);
        lblCft->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblCft, 0, 1, 1, 1);

        lblStrPts = new QLabel(GameBoard);
        lblStrPts->setObjectName(QString::fromUtf8("lblStrPts"));
        lblStrPts->setLayoutDirection(Qt::LeftToRight);
        lblStrPts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblStrPts, 1, 0, 1, 1);

        lblCftPts = new QLabel(GameBoard);
        lblCftPts->setObjectName(QString::fromUtf8("lblCftPts"));
        lblCftPts->setLayoutDirection(Qt::LeftToRight);
        lblCftPts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblCftPts, 1, 1, 1, 1);

        lblFatePts = new QLabel(GameBoard);
        lblFatePts->setObjectName(QString::fromUtf8("lblFatePts"));
        lblFatePts->setLayoutDirection(Qt::LeftToRight);
        lblFatePts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblFatePts, 1, 2, 1, 1);

        lblGoldPts = new QLabel(GameBoard);
        lblGoldPts->setObjectName(QString::fromUtf8("lblGoldPts"));
        lblGoldPts->setLayoutDirection(Qt::LeftToRight);
        lblGoldPts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblGoldPts, 1, 3, 1, 1);

        lblLifePts = new QLabel(GameBoard);
        lblLifePts->setObjectName(QString::fromUtf8("lblLifePts"));
        lblLifePts->setLayoutDirection(Qt::LeftToRight);
        lblLifePts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblLifePts, 1, 4, 1, 1);

        btnFollowers = new QPushButton(GameBoard);
        btnFollowers->setObjectName(QString::fromUtf8("btnFollowers"));

        charDetails->addWidget(btnFollowers, 2, 1, 1, 1);

        btnObjects = new QPushButton(GameBoard);
        btnObjects->setObjectName(QString::fromUtf8("btnObjects"));

        charDetails->addWidget(btnObjects, 2, 2, 1, 1);

        btnTrophies = new QPushButton(GameBoard);
        btnTrophies->setObjectName(QString::fromUtf8("btnTrophies"));

        charDetails->addWidget(btnTrophies, 2, 3, 1, 1);


        gridLayout->addLayout(charDetails, 0, 0, 1, 1);

        layout = new QVBoxLayout();
        layout->setSpacing(9);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setSizeConstraint(QLayout::SetMinimumSize);
        hLayout = new QHBoxLayout();
        hLayout->setObjectName(QString::fromUtf8("hLayout"));
        mainMenu = new QVBoxLayout();
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->setSizeConstraint(QLayout::SetMinimumSize);
        btnEncounter = new QPushButton(GameBoard);
        btnEncounter->setObjectName(QString::fromUtf8("btnEncounter"));

        mainMenu->addWidget(btnEncounter);

        btnListFollowers = new QPushButton(GameBoard);
        btnListFollowers->setObjectName(QString::fromUtf8("btnListFollowers"));

        mainMenu->addWidget(btnListFollowers);

        btnListTrophies = new QPushButton(GameBoard);
        btnListTrophies->setObjectName(QString::fromUtf8("btnListTrophies"));

        mainMenu->addWidget(btnListTrophies);

        btnExchangeTrophies = new QPushButton(GameBoard);
        btnExchangeTrophies->setObjectName(QString::fromUtf8("btnExchangeTrophies"));

        mainMenu->addWidget(btnExchangeTrophies);

        btnRollDie = new QPushButton(GameBoard);
        btnRollDie->setObjectName(QString::fromUtf8("btnRollDie"));

        mainMenu->addWidget(btnRollDie);

        btnAttack = new QPushButton(GameBoard);
        btnAttack->setObjectName(QString::fromUtf8("btnAttack"));

        mainMenu->addWidget(btnAttack);

        btnExchangeFate = new QPushButton(GameBoard);
        btnExchangeFate->setObjectName(QString::fromUtf8("btnExchangeFate"));

        mainMenu->addWidget(btnExchangeFate);

        btnAddToFollowers = new QPushButton(GameBoard);
        btnAddToFollowers->setObjectName(QString::fromUtf8("btnAddToFollowers"));

        mainMenu->addWidget(btnAddToFollowers);

        btnAddToTrophies = new QPushButton(GameBoard);
        btnAddToTrophies->setObjectName(QString::fromUtf8("btnAddToTrophies"));

        mainMenu->addWidget(btnAddToTrophies);

        btnEndTurn = new QPushButton(GameBoard);
        btnEndTurn->setObjectName(QString::fromUtf8("btnEndTurn"));

        mainMenu->addWidget(btnEndTurn);

        diceLayout = new QHBoxLayout();
        diceLayout->setObjectName(QString::fromUtf8("diceLayout"));
        diceLayout->setSizeConstraint(QLayout::SetMinimumSize);

        mainMenu->addLayout(diceLayout);


        hLayout->addLayout(mainMenu);

        arena = new QGridLayout();
        arena->setObjectName(QString::fromUtf8("arena"));
        arena->setSizeConstraint(QLayout::SetMinimumSize);

        hLayout->addLayout(arena);


        layout->addLayout(hLayout);

        txtLog = new QTextEdit(GameBoard);
        txtLog->setObjectName(QString::fromUtf8("txtLog"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtLog->sizePolicy().hasHeightForWidth());
        txtLog->setSizePolicy(sizePolicy1);
        txtLog->setFrameShape(QFrame::StyledPanel);
        txtLog->setReadOnly(true);

        layout->addWidget(txtLog);


        gridLayout->addLayout(layout, 1, 0, 1, 1);


        retranslateUi(GameBoard);

        QMetaObject::connectSlotsByName(GameBoard);
    } // setupUi

    void retranslateUi(QWidget *GameBoard)
    {
        GameBoard->setWindowTitle(QApplication::translate("GameBoard", "GameBoard", 0, QApplication::UnicodeUTF8));
        lblStr->setText(QApplication::translate("GameBoard", "Strength", 0, QApplication::UnicodeUTF8));
        lblLife->setText(QApplication::translate("GameBoard", "Life", 0, QApplication::UnicodeUTF8));
        lblGold->setText(QApplication::translate("GameBoard", "Gold", 0, QApplication::UnicodeUTF8));
        lblFate->setText(QApplication::translate("GameBoard", "Fate", 0, QApplication::UnicodeUTF8));
        lblCft->setText(QApplication::translate("GameBoard", "Craft", 0, QApplication::UnicodeUTF8));
        lblStrPts->setText(QString());
        lblCftPts->setText(QString());
        lblFatePts->setText(QString());
        lblGoldPts->setText(QString());
        lblLifePts->setText(QString());
        btnFollowers->setText(QApplication::translate("GameBoard", "Followers", 0, QApplication::UnicodeUTF8));
        btnObjects->setText(QApplication::translate("GameBoard", "Objects", 0, QApplication::UnicodeUTF8));
        btnTrophies->setText(QApplication::translate("GameBoard", "Trophies", 0, QApplication::UnicodeUTF8));
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
