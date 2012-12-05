/********************************************************************************
** Form generated from reading UI file 'TheBigWindow.ui'
**
** Created: Wed Dec 5 00:20:16 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEBIGWINDOW_H
#define UI_THEBIGWINDOW_H

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

class Ui_TheBigWindow
{
public:
    QGridLayout *windowLayout;
    QHBoxLayout *mainLayout;
    QVBoxLayout *leftLayout;
    QHBoxLayout *bigSquare;
    QLabel *iLabel;
    QTextEdit *txtLog;
    QVBoxLayout *rightLayout;
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
    QPushButton *btnListFollowers;
    QPushButton *btnListObjects;
    QPushButton *btnListTrophies;
    QHBoxLayout *charPanel;
    QVBoxLayout *mainMenu;
    QPushButton *btnEncounter;
    QPushButton *btnExchangeTrophies;
    QPushButton *btnRollDie;
    QPushButton *btnAttack;
    QPushButton *btnExchangeFate;
    QPushButton *btnAddToFollowers;
    QPushButton *btnAddToTrophies;
    QPushButton *btnEndTurn;
    QHBoxLayout *arena;
    QHBoxLayout *movementLayout;
    QPushButton *btnRight;
    QPushButton *btnYes;
    QLabel *lblStatus;
    QPushButton *btnNo;
    QPushButton *btnLeft;
    QHBoxLayout *deckLayout;

    void setupUi(QWidget *TheBigWindow)
    {
        if (TheBigWindow->objectName().isEmpty())
            TheBigWindow->setObjectName(QString::fromUtf8("TheBigWindow"));
        TheBigWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(TheBigWindow->sizePolicy().hasHeightForWidth());
        TheBigWindow->setSizePolicy(sizePolicy);
        TheBigWindow->setSizeIncrement(QSize(1, 1));
        TheBigWindow->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/talisman-icon.gif"), QSize(), QIcon::Normal, QIcon::Off);
        TheBigWindow->setWindowIcon(icon);
        TheBigWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(images/CardTexture.jpg);\n"
"    border: 2px solid black; \n"
"    border-radius: 4px; \n"
"	padding: 4px;\n"
"	margin: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border-color: green; \n"
"	color: green;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	border-color: rgba(0, 0, 0, 50%);\n"
"	color: rgba(0, 0, 0, 50%);\n"
"}\n"
"\n"
"QPushButton, QLabel {\n"
"	font-family: \"Windlass\";\n"
"}\n"
"\n"
"QLabel {\n"
"	background-color: rgba(0,0,0,0%);\n"
"	padding: 4px;\n"
"}"));
        windowLayout = new QGridLayout(TheBigWindow);
        windowLayout->setSpacing(0);
        windowLayout->setContentsMargins(0, 0, 0, 0);
        windowLayout->setObjectName(QString::fromUtf8("windowLayout"));
        windowLayout->setSizeConstraint(QLayout::SetMinimumSize);
        mainLayout = new QHBoxLayout();
        mainLayout->setSpacing(6);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setSizeConstraint(QLayout::SetMinimumSize);
        leftLayout = new QVBoxLayout();
        leftLayout->setContentsMargins(4, 4, 4, 4);
        leftLayout->setObjectName(QString::fromUtf8("leftLayout"));
        leftLayout->setSizeConstraint(QLayout::SetMinimumSize);
        bigSquare = new QHBoxLayout();
        bigSquare->setSpacing(0);
        bigSquare->setObjectName(QString::fromUtf8("bigSquare"));
        bigSquare->setSizeConstraint(QLayout::SetMinimumSize);

        leftLayout->addLayout(bigSquare);

        iLabel = new QLabel(TheBigWindow);
        iLabel->setObjectName(QString::fromUtf8("iLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(iLabel->sizePolicy().hasHeightForWidth());
        iLabel->setSizePolicy(sizePolicy1);

        leftLayout->addWidget(iLabel);

        txtLog = new QTextEdit(TheBigWindow);
        txtLog->setObjectName(QString::fromUtf8("txtLog"));
        sizePolicy1.setHeightForWidth(txtLog->sizePolicy().hasHeightForWidth());
        txtLog->setSizePolicy(sizePolicy1);

        leftLayout->addWidget(txtLog);


        mainLayout->addLayout(leftLayout);

        rightLayout = new QVBoxLayout();
        rightLayout->setSpacing(0);
        rightLayout->setObjectName(QString::fromUtf8("rightLayout"));
        rightLayout->setSizeConstraint(QLayout::SetMinimumSize);
        rightLayout->setContentsMargins(-1, -1, 0, -1);
        charDetails = new QGridLayout();
        charDetails->setSpacing(0);
        charDetails->setObjectName(QString::fromUtf8("charDetails"));
        charDetails->setSizeConstraint(QLayout::SetMinimumSize);
        lblStr = new QLabel(TheBigWindow);
        lblStr->setObjectName(QString::fromUtf8("lblStr"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblStr->sizePolicy().hasHeightForWidth());
        lblStr->setSizePolicy(sizePolicy2);
        lblStr->setLayoutDirection(Qt::LeftToRight);
        lblStr->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblStr, 0, 0, 1, 1);

        lblLife = new QLabel(TheBigWindow);
        lblLife->setObjectName(QString::fromUtf8("lblLife"));
        sizePolicy2.setHeightForWidth(lblLife->sizePolicy().hasHeightForWidth());
        lblLife->setSizePolicy(sizePolicy2);
        lblLife->setLayoutDirection(Qt::LeftToRight);
        lblLife->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblLife, 0, 4, 1, 1);

        lblGold = new QLabel(TheBigWindow);
        lblGold->setObjectName(QString::fromUtf8("lblGold"));
        sizePolicy2.setHeightForWidth(lblGold->sizePolicy().hasHeightForWidth());
        lblGold->setSizePolicy(sizePolicy2);
        lblGold->setLayoutDirection(Qt::LeftToRight);
        lblGold->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblGold, 0, 3, 1, 1);

        lblFate = new QLabel(TheBigWindow);
        lblFate->setObjectName(QString::fromUtf8("lblFate"));
        sizePolicy2.setHeightForWidth(lblFate->sizePolicy().hasHeightForWidth());
        lblFate->setSizePolicy(sizePolicy2);
        lblFate->setLayoutDirection(Qt::LeftToRight);
        lblFate->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblFate, 0, 2, 1, 1);

        lblCft = new QLabel(TheBigWindow);
        lblCft->setObjectName(QString::fromUtf8("lblCft"));
        sizePolicy2.setHeightForWidth(lblCft->sizePolicy().hasHeightForWidth());
        lblCft->setSizePolicy(sizePolicy2);
        lblCft->setLayoutDirection(Qt::LeftToRight);
        lblCft->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblCft, 0, 1, 1, 1);

        lblStrPts = new QLabel(TheBigWindow);
        lblStrPts->setObjectName(QString::fromUtf8("lblStrPts"));
        lblStrPts->setLayoutDirection(Qt::LeftToRight);
        lblStrPts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblStrPts, 1, 0, 1, 1);

        lblCftPts = new QLabel(TheBigWindow);
        lblCftPts->setObjectName(QString::fromUtf8("lblCftPts"));
        sizePolicy2.setHeightForWidth(lblCftPts->sizePolicy().hasHeightForWidth());
        lblCftPts->setSizePolicy(sizePolicy2);
        lblCftPts->setLayoutDirection(Qt::LeftToRight);
        lblCftPts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblCftPts, 1, 1, 1, 1);

        lblFatePts = new QLabel(TheBigWindow);
        lblFatePts->setObjectName(QString::fromUtf8("lblFatePts"));
        sizePolicy2.setHeightForWidth(lblFatePts->sizePolicy().hasHeightForWidth());
        lblFatePts->setSizePolicy(sizePolicy2);
        lblFatePts->setLayoutDirection(Qt::LeftToRight);
        lblFatePts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblFatePts, 1, 2, 1, 1);

        lblGoldPts = new QLabel(TheBigWindow);
        lblGoldPts->setObjectName(QString::fromUtf8("lblGoldPts"));
        sizePolicy2.setHeightForWidth(lblGoldPts->sizePolicy().hasHeightForWidth());
        lblGoldPts->setSizePolicy(sizePolicy2);
        lblGoldPts->setLayoutDirection(Qt::LeftToRight);
        lblGoldPts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblGoldPts, 1, 3, 1, 1);

        lblLifePts = new QLabel(TheBigWindow);
        lblLifePts->setObjectName(QString::fromUtf8("lblLifePts"));
        sizePolicy2.setHeightForWidth(lblLifePts->sizePolicy().hasHeightForWidth());
        lblLifePts->setSizePolicy(sizePolicy2);
        lblLifePts->setLayoutDirection(Qt::LeftToRight);
        lblLifePts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblLifePts, 1, 4, 1, 1);

        btnListFollowers = new QPushButton(TheBigWindow);
        btnListFollowers->setObjectName(QString::fromUtf8("btnListFollowers"));
        sizePolicy2.setHeightForWidth(btnListFollowers->sizePolicy().hasHeightForWidth());
        btnListFollowers->setSizePolicy(sizePolicy2);

        charDetails->addWidget(btnListFollowers, 2, 1, 1, 1);

        btnListObjects = new QPushButton(TheBigWindow);
        btnListObjects->setObjectName(QString::fromUtf8("btnListObjects"));
        sizePolicy2.setHeightForWidth(btnListObjects->sizePolicy().hasHeightForWidth());
        btnListObjects->setSizePolicy(sizePolicy2);

        charDetails->addWidget(btnListObjects, 2, 2, 1, 1);

        btnListTrophies = new QPushButton(TheBigWindow);
        btnListTrophies->setObjectName(QString::fromUtf8("btnListTrophies"));
        sizePolicy2.setHeightForWidth(btnListTrophies->sizePolicy().hasHeightForWidth());
        btnListTrophies->setSizePolicy(sizePolicy2);

        charDetails->addWidget(btnListTrophies, 2, 3, 1, 1);


        rightLayout->addLayout(charDetails);

        charPanel = new QHBoxLayout();
        charPanel->setSpacing(0);
        charPanel->setObjectName(QString::fromUtf8("charPanel"));
        charPanel->setSizeConstraint(QLayout::SetMinimumSize);
        mainMenu = new QVBoxLayout();
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->setSizeConstraint(QLayout::SetMinimumSize);
        btnEncounter = new QPushButton(TheBigWindow);
        btnEncounter->setObjectName(QString::fromUtf8("btnEncounter"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnEncounter->sizePolicy().hasHeightForWidth());
        btnEncounter->setSizePolicy(sizePolicy3);

        mainMenu->addWidget(btnEncounter);

        btnExchangeTrophies = new QPushButton(TheBigWindow);
        btnExchangeTrophies->setObjectName(QString::fromUtf8("btnExchangeTrophies"));
        sizePolicy3.setHeightForWidth(btnExchangeTrophies->sizePolicy().hasHeightForWidth());
        btnExchangeTrophies->setSizePolicy(sizePolicy3);

        mainMenu->addWidget(btnExchangeTrophies);

        btnRollDie = new QPushButton(TheBigWindow);
        btnRollDie->setObjectName(QString::fromUtf8("btnRollDie"));
        sizePolicy3.setHeightForWidth(btnRollDie->sizePolicy().hasHeightForWidth());
        btnRollDie->setSizePolicy(sizePolicy3);

        mainMenu->addWidget(btnRollDie);

        btnAttack = new QPushButton(TheBigWindow);
        btnAttack->setObjectName(QString::fromUtf8("btnAttack"));
        sizePolicy3.setHeightForWidth(btnAttack->sizePolicy().hasHeightForWidth());
        btnAttack->setSizePolicy(sizePolicy3);

        mainMenu->addWidget(btnAttack);

        btnExchangeFate = new QPushButton(TheBigWindow);
        btnExchangeFate->setObjectName(QString::fromUtf8("btnExchangeFate"));
        sizePolicy3.setHeightForWidth(btnExchangeFate->sizePolicy().hasHeightForWidth());
        btnExchangeFate->setSizePolicy(sizePolicy3);

        mainMenu->addWidget(btnExchangeFate);

        btnAddToFollowers = new QPushButton(TheBigWindow);
        btnAddToFollowers->setObjectName(QString::fromUtf8("btnAddToFollowers"));
        sizePolicy3.setHeightForWidth(btnAddToFollowers->sizePolicy().hasHeightForWidth());
        btnAddToFollowers->setSizePolicy(sizePolicy3);

        mainMenu->addWidget(btnAddToFollowers);

        btnAddToTrophies = new QPushButton(TheBigWindow);
        btnAddToTrophies->setObjectName(QString::fromUtf8("btnAddToTrophies"));
        sizePolicy3.setHeightForWidth(btnAddToTrophies->sizePolicy().hasHeightForWidth());
        btnAddToTrophies->setSizePolicy(sizePolicy3);

        mainMenu->addWidget(btnAddToTrophies);

        btnEndTurn = new QPushButton(TheBigWindow);
        btnEndTurn->setObjectName(QString::fromUtf8("btnEndTurn"));
        sizePolicy3.setHeightForWidth(btnEndTurn->sizePolicy().hasHeightForWidth());
        btnEndTurn->setSizePolicy(sizePolicy3);

        mainMenu->addWidget(btnEndTurn);


        charPanel->addLayout(mainMenu);

        arena = new QHBoxLayout();
        arena->setObjectName(QString::fromUtf8("arena"));
        arena->setSizeConstraint(QLayout::SetMinimumSize);

        charPanel->addLayout(arena);


        rightLayout->addLayout(charPanel);

        movementLayout = new QHBoxLayout();
        movementLayout->setSpacing(0);
        movementLayout->setObjectName(QString::fromUtf8("movementLayout"));
        movementLayout->setSizeConstraint(QLayout::SetMinimumSize);
        btnRight = new QPushButton(TheBigWindow);
        btnRight->setObjectName(QString::fromUtf8("btnRight"));
        sizePolicy3.setHeightForWidth(btnRight->sizePolicy().hasHeightForWidth());
        btnRight->setSizePolicy(sizePolicy3);
        btnRight->setBaseSize(QSize(0, 0));

        movementLayout->addWidget(btnRight);

        btnYes = new QPushButton(TheBigWindow);
        btnYes->setObjectName(QString::fromUtf8("btnYes"));
        sizePolicy3.setHeightForWidth(btnYes->sizePolicy().hasHeightForWidth());
        btnYes->setSizePolicy(sizePolicy3);

        movementLayout->addWidget(btnYes);

        lblStatus = new QLabel(TheBigWindow);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy4);
        lblStatus->setBaseSize(QSize(0, 40));
        lblStatus->setAlignment(Qt::AlignCenter);
        lblStatus->setWordWrap(true);

        movementLayout->addWidget(lblStatus);

        btnNo = new QPushButton(TheBigWindow);
        btnNo->setObjectName(QString::fromUtf8("btnNo"));
        sizePolicy3.setHeightForWidth(btnNo->sizePolicy().hasHeightForWidth());
        btnNo->setSizePolicy(sizePolicy3);

        movementLayout->addWidget(btnNo);

        btnLeft = new QPushButton(TheBigWindow);
        btnLeft->setObjectName(QString::fromUtf8("btnLeft"));
        sizePolicy3.setHeightForWidth(btnLeft->sizePolicy().hasHeightForWidth());
        btnLeft->setSizePolicy(sizePolicy3);

        movementLayout->addWidget(btnLeft);


        rightLayout->addLayout(movementLayout);

        deckLayout = new QHBoxLayout();
        deckLayout->setSpacing(0);
        deckLayout->setObjectName(QString::fromUtf8("deckLayout"));
        deckLayout->setSizeConstraint(QLayout::SetMinimumSize);

        rightLayout->addLayout(deckLayout);


        mainLayout->addLayout(rightLayout);


        windowLayout->addLayout(mainLayout, 0, 0, 1, 1);


        retranslateUi(TheBigWindow);

        QMetaObject::connectSlotsByName(TheBigWindow);
    } // setupUi

    void retranslateUi(QWidget *TheBigWindow)
    {
        TheBigWindow->setWindowTitle(QApplication::translate("TheBigWindow", "Talisman", 0, QApplication::UnicodeUTF8));
        iLabel->setText(QApplication::translate("TheBigWindow", "Status log", 0, QApplication::UnicodeUTF8));
        lblStr->setText(QApplication::translate("TheBigWindow", "Strength", 0, QApplication::UnicodeUTF8));
        lblLife->setText(QApplication::translate("TheBigWindow", "Life", 0, QApplication::UnicodeUTF8));
        lblGold->setText(QApplication::translate("TheBigWindow", "Gold", 0, QApplication::UnicodeUTF8));
        lblFate->setText(QApplication::translate("TheBigWindow", "Fate", 0, QApplication::UnicodeUTF8));
        lblCft->setText(QApplication::translate("TheBigWindow", "Craft", 0, QApplication::UnicodeUTF8));
        lblStrPts->setText(QString());
        lblCftPts->setText(QString());
        lblFatePts->setText(QString());
        lblGoldPts->setText(QString());
        lblLifePts->setText(QString());
        btnListFollowers->setText(QApplication::translate("TheBigWindow", "Followers", 0, QApplication::UnicodeUTF8));
        btnListObjects->setText(QApplication::translate("TheBigWindow", "Objects", 0, QApplication::UnicodeUTF8));
        btnListTrophies->setText(QApplication::translate("TheBigWindow", "Trophies", 0, QApplication::UnicodeUTF8));
        btnEncounter->setText(QApplication::translate("TheBigWindow", "Encounter", 0, QApplication::UnicodeUTF8));
        btnExchangeTrophies->setText(QApplication::translate("TheBigWindow", "Exchange Trophies", 0, QApplication::UnicodeUTF8));
        btnRollDie->setText(QApplication::translate("TheBigWindow", "Roll Die", 0, QApplication::UnicodeUTF8));
        btnAttack->setText(QApplication::translate("TheBigWindow", "Attack", 0, QApplication::UnicodeUTF8));
        btnExchangeFate->setText(QApplication::translate("TheBigWindow", "Exchange Fate", 0, QApplication::UnicodeUTF8));
        btnAddToFollowers->setText(QApplication::translate("TheBigWindow", "Add to Followers", 0, QApplication::UnicodeUTF8));
        btnAddToTrophies->setText(QApplication::translate("TheBigWindow", "Add to Trophies", 0, QApplication::UnicodeUTF8));
        btnEndTurn->setText(QApplication::translate("TheBigWindow", "End Turn", 0, QApplication::UnicodeUTF8));
        btnRight->setText(QApplication::translate("TheBigWindow", "Clockwise", 0, QApplication::UnicodeUTF8));
        btnYes->setText(QApplication::translate("TheBigWindow", "Yes", 0, QApplication::UnicodeUTF8));
        lblStatus->setText(QString());
        btnNo->setText(QApplication::translate("TheBigWindow", "No", 0, QApplication::UnicodeUTF8));
        btnLeft->setText(QApplication::translate("TheBigWindow", "Counter-clockwise", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TheBigWindow: public Ui_TheBigWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEBIGWINDOW_H
