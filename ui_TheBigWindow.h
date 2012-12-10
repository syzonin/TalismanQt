/********************************************************************************
** Form generated from reading UI file 'TheBigWindow.ui'
**
** Created: Sun Dec 9 19:37:28 2012
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
    QWidget *layoutWidget;
    QVBoxLayout *boardPanel;
    QHBoxLayout *bigSquare;
    QTextEdit *txtLog;
    QWidget *layoutWidget1;
    QGridLayout *charDetailsPanel;
    QLabel *lblLife;
    QLabel *lblGold;
    QLabel *lblStrPts;
    QLabel *lblCftPts;
    QLabel *lblFatePts;
    QLabel *lblGoldPts;
    QLabel *lblLifePts;
    QPushButton *btnListFollowers;
    QPushButton *btnListObjects;
    QPushButton *btnListTrophies;
    QLabel *lblFate;
    QLabel *lblCft;
    QLabel *lblStr;
    QWidget *layoutWidget2;
    QHBoxLayout *movementPanel;
    QPushButton *btnRollDie;
    QPushButton *btnRight;
    QPushButton *btnYes;
    QLabel *lblStatus;
    QPushButton *btnNo;
    QPushButton *btnLeft;
    QWidget *layoutWidget3;
    QHBoxLayout *charCardPanel;
    QWidget *layoutWidget4;
    QVBoxLayout *encounterPanel;
    QPushButton *btnEncounter;
    QPushButton *btnExchangeTrophies;
    QPushButton *btnCastSpell;
    QPushButton *btnEquipArmor;
    QPushButton *btnEquipWeapon;
    QPushButton *btnRollEncounterDie;
    QPushButton *btnAttack;
    QPushButton *btnExchangeFate;
    QPushButton *btnAddToFollowers;
    QPushButton *btnAddToTrophies;
    QPushButton *btnAddToObjects;
    QPushButton *btnEndTurn;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *mapSquarePanel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *adventureCardPanel;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *dicePanel;

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
        layoutWidget = new QWidget(TheBigWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(590, 10, 274, 581));
        boardPanel = new QVBoxLayout(layoutWidget);
        boardPanel->setSpacing(8);
        boardPanel->setContentsMargins(8, 8, 8, 8);
        boardPanel->setObjectName(QString::fromUtf8("boardPanel"));
        boardPanel->setSizeConstraint(QLayout::SetMinimumSize);
        boardPanel->setContentsMargins(0, 0, 0, 0);
        bigSquare = new QHBoxLayout();
        bigSquare->setSpacing(0);
        bigSquare->setObjectName(QString::fromUtf8("bigSquare"));
        bigSquare->setSizeConstraint(QLayout::SetMinimumSize);

        boardPanel->addLayout(bigSquare);

        txtLog = new QTextEdit(layoutWidget);
        txtLog->setObjectName(QString::fromUtf8("txtLog"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtLog->sizePolicy().hasHeightForWidth());
        txtLog->setSizePolicy(sizePolicy1);
        txtLog->setFrameShape(QFrame::StyledPanel);
        txtLog->setReadOnly(true);

        boardPanel->addWidget(txtLog);

        layoutWidget1 = new QWidget(TheBigWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 569, 77));
        charDetailsPanel = new QGridLayout(layoutWidget1);
        charDetailsPanel->setSpacing(0);
        charDetailsPanel->setObjectName(QString::fromUtf8("charDetailsPanel"));
        charDetailsPanel->setSizeConstraint(QLayout::SetMinimumSize);
        charDetailsPanel->setContentsMargins(0, 0, 0, 0);
        lblLife = new QLabel(layoutWidget1);
        lblLife->setObjectName(QString::fromUtf8("lblLife"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblLife->sizePolicy().hasHeightForWidth());
        lblLife->setSizePolicy(sizePolicy2);
        lblLife->setLayoutDirection(Qt::LeftToRight);
        lblLife->setAlignment(Qt::AlignCenter);

        charDetailsPanel->addWidget(lblLife, 0, 4, 1, 1);

        lblGold = new QLabel(layoutWidget1);
        lblGold->setObjectName(QString::fromUtf8("lblGold"));
        sizePolicy2.setHeightForWidth(lblGold->sizePolicy().hasHeightForWidth());
        lblGold->setSizePolicy(sizePolicy2);
        lblGold->setLayoutDirection(Qt::LeftToRight);
        lblGold->setAlignment(Qt::AlignCenter);

        charDetailsPanel->addWidget(lblGold, 0, 3, 1, 1);

        lblStrPts = new QLabel(layoutWidget1);
        lblStrPts->setObjectName(QString::fromUtf8("lblStrPts"));
        sizePolicy2.setHeightForWidth(lblStrPts->sizePolicy().hasHeightForWidth());
        lblStrPts->setSizePolicy(sizePolicy2);
        lblStrPts->setLayoutDirection(Qt::LeftToRight);
        lblStrPts->setAlignment(Qt::AlignCenter);

        charDetailsPanel->addWidget(lblStrPts, 1, 0, 1, 1);

        lblCftPts = new QLabel(layoutWidget1);
        lblCftPts->setObjectName(QString::fromUtf8("lblCftPts"));
        sizePolicy2.setHeightForWidth(lblCftPts->sizePolicy().hasHeightForWidth());
        lblCftPts->setSizePolicy(sizePolicy2);
        lblCftPts->setLayoutDirection(Qt::LeftToRight);
        lblCftPts->setAlignment(Qt::AlignCenter);

        charDetailsPanel->addWidget(lblCftPts, 1, 1, 1, 1);

        lblFatePts = new QLabel(layoutWidget1);
        lblFatePts->setObjectName(QString::fromUtf8("lblFatePts"));
        sizePolicy2.setHeightForWidth(lblFatePts->sizePolicy().hasHeightForWidth());
        lblFatePts->setSizePolicy(sizePolicy2);
        lblFatePts->setLayoutDirection(Qt::LeftToRight);
        lblFatePts->setAlignment(Qt::AlignCenter);

        charDetailsPanel->addWidget(lblFatePts, 1, 2, 1, 1);

        lblGoldPts = new QLabel(layoutWidget1);
        lblGoldPts->setObjectName(QString::fromUtf8("lblGoldPts"));
        sizePolicy2.setHeightForWidth(lblGoldPts->sizePolicy().hasHeightForWidth());
        lblGoldPts->setSizePolicy(sizePolicy2);
        lblGoldPts->setLayoutDirection(Qt::LeftToRight);
        lblGoldPts->setAlignment(Qt::AlignCenter);

        charDetailsPanel->addWidget(lblGoldPts, 1, 3, 1, 1);

        lblLifePts = new QLabel(layoutWidget1);
        lblLifePts->setObjectName(QString::fromUtf8("lblLifePts"));
        sizePolicy2.setHeightForWidth(lblLifePts->sizePolicy().hasHeightForWidth());
        lblLifePts->setSizePolicy(sizePolicy2);
        lblLifePts->setLayoutDirection(Qt::LeftToRight);
        lblLifePts->setAlignment(Qt::AlignCenter);

        charDetailsPanel->addWidget(lblLifePts, 1, 4, 1, 1);

        btnListFollowers = new QPushButton(layoutWidget1);
        btnListFollowers->setObjectName(QString::fromUtf8("btnListFollowers"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnListFollowers->sizePolicy().hasHeightForWidth());
        btnListFollowers->setSizePolicy(sizePolicy3);

        charDetailsPanel->addWidget(btnListFollowers, 2, 1, 1, 1);

        btnListObjects = new QPushButton(layoutWidget1);
        btnListObjects->setObjectName(QString::fromUtf8("btnListObjects"));
        sizePolicy3.setHeightForWidth(btnListObjects->sizePolicy().hasHeightForWidth());
        btnListObjects->setSizePolicy(sizePolicy3);

        charDetailsPanel->addWidget(btnListObjects, 2, 2, 1, 1);

        btnListTrophies = new QPushButton(layoutWidget1);
        btnListTrophies->setObjectName(QString::fromUtf8("btnListTrophies"));
        sizePolicy3.setHeightForWidth(btnListTrophies->sizePolicy().hasHeightForWidth());
        btnListTrophies->setSizePolicy(sizePolicy3);

        charDetailsPanel->addWidget(btnListTrophies, 2, 3, 1, 1);

        lblFate = new QLabel(layoutWidget1);
        lblFate->setObjectName(QString::fromUtf8("lblFate"));
        sizePolicy2.setHeightForWidth(lblFate->sizePolicy().hasHeightForWidth());
        lblFate->setSizePolicy(sizePolicy2);
        lblFate->setLayoutDirection(Qt::LeftToRight);
        lblFate->setAlignment(Qt::AlignCenter);

        charDetailsPanel->addWidget(lblFate, 0, 2, 1, 1);

        lblCft = new QLabel(layoutWidget1);
        lblCft->setObjectName(QString::fromUtf8("lblCft"));
        sizePolicy2.setHeightForWidth(lblCft->sizePolicy().hasHeightForWidth());
        lblCft->setSizePolicy(sizePolicy2);
        lblCft->setLayoutDirection(Qt::LeftToRight);
        lblCft->setAlignment(Qt::AlignCenter);

        charDetailsPanel->addWidget(lblCft, 0, 1, 1, 1);

        lblStr = new QLabel(layoutWidget1);
        lblStr->setObjectName(QString::fromUtf8("lblStr"));
        sizePolicy2.setHeightForWidth(lblStr->sizePolicy().hasHeightForWidth());
        lblStr->setSizePolicy(sizePolicy2);
        lblStr->setLayoutDirection(Qt::LeftToRight);
        lblStr->setAlignment(Qt::AlignCenter);

        charDetailsPanel->addWidget(lblStr, 0, 0, 1, 1);

        layoutWidget2 = new QWidget(TheBigWindow);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 420, 341, 51));
        movementPanel = new QHBoxLayout(layoutWidget2);
        movementPanel->setSpacing(0);
        movementPanel->setObjectName(QString::fromUtf8("movementPanel"));
        movementPanel->setSizeConstraint(QLayout::SetFixedSize);
        movementPanel->setContentsMargins(0, 0, 0, 0);
        btnRollDie = new QPushButton(layoutWidget2);
        btnRollDie->setObjectName(QString::fromUtf8("btnRollDie"));
        sizePolicy3.setHeightForWidth(btnRollDie->sizePolicy().hasHeightForWidth());
        btnRollDie->setSizePolicy(sizePolicy3);

        movementPanel->addWidget(btnRollDie);

        btnRight = new QPushButton(layoutWidget2);
        btnRight->setObjectName(QString::fromUtf8("btnRight"));
        sizePolicy3.setHeightForWidth(btnRight->sizePolicy().hasHeightForWidth());
        btnRight->setSizePolicy(sizePolicy3);
        btnRight->setBaseSize(QSize(0, 0));

        movementPanel->addWidget(btnRight);

        btnYes = new QPushButton(layoutWidget2);
        btnYes->setObjectName(QString::fromUtf8("btnYes"));
        sizePolicy3.setHeightForWidth(btnYes->sizePolicy().hasHeightForWidth());
        btnYes->setSizePolicy(sizePolicy3);

        movementPanel->addWidget(btnYes);

        lblStatus = new QLabel(layoutWidget2);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy4);
        lblStatus->setBaseSize(QSize(0, 40));
        lblStatus->setAlignment(Qt::AlignCenter);
        lblStatus->setWordWrap(true);

        movementPanel->addWidget(lblStatus);

        btnNo = new QPushButton(layoutWidget2);
        btnNo->setObjectName(QString::fromUtf8("btnNo"));
        sizePolicy3.setHeightForWidth(btnNo->sizePolicy().hasHeightForWidth());
        btnNo->setSizePolicy(sizePolicy3);

        movementPanel->addWidget(btnNo);

        btnLeft = new QPushButton(layoutWidget2);
        btnLeft->setObjectName(QString::fromUtf8("btnLeft"));
        sizePolicy3.setHeightForWidth(btnLeft->sizePolicy().hasHeightForWidth());
        btnLeft->setSizePolicy(sizePolicy3);

        movementPanel->addWidget(btnLeft);

        layoutWidget3 = new QWidget(TheBigWindow);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(150, 100, 211, 231));
        charCardPanel = new QHBoxLayout(layoutWidget3);
        charCardPanel->setSpacing(0);
        charCardPanel->setObjectName(QString::fromUtf8("charCardPanel"));
        charCardPanel->setSizeConstraint(QLayout::SetFixedSize);
        charCardPanel->setContentsMargins(0, 0, 0, 0);
        layoutWidget4 = new QWidget(TheBigWindow);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 100, 131, 398));
        encounterPanel = new QVBoxLayout(layoutWidget4);
        encounterPanel->setSpacing(0);
        encounterPanel->setObjectName(QString::fromUtf8("encounterPanel"));
        encounterPanel->setSizeConstraint(QLayout::SetFixedSize);
        encounterPanel->setContentsMargins(0, 0, 0, 0);
        btnEncounter = new QPushButton(layoutWidget4);
        btnEncounter->setObjectName(QString::fromUtf8("btnEncounter"));
        sizePolicy3.setHeightForWidth(btnEncounter->sizePolicy().hasHeightForWidth());
        btnEncounter->setSizePolicy(sizePolicy3);

        encounterPanel->addWidget(btnEncounter);

        btnExchangeTrophies = new QPushButton(layoutWidget4);
        btnExchangeTrophies->setObjectName(QString::fromUtf8("btnExchangeTrophies"));
        sizePolicy3.setHeightForWidth(btnExchangeTrophies->sizePolicy().hasHeightForWidth());
        btnExchangeTrophies->setSizePolicy(sizePolicy3);

        encounterPanel->addWidget(btnExchangeTrophies);

        btnCastSpell = new QPushButton(layoutWidget4);
        btnCastSpell->setObjectName(QString::fromUtf8("btnCastSpell"));
        sizePolicy3.setHeightForWidth(btnCastSpell->sizePolicy().hasHeightForWidth());
        btnCastSpell->setSizePolicy(sizePolicy3);

        encounterPanel->addWidget(btnCastSpell);

        btnEquipArmor = new QPushButton(layoutWidget4);
        btnEquipArmor->setObjectName(QString::fromUtf8("btnEquipArmor"));
        sizePolicy3.setHeightForWidth(btnEquipArmor->sizePolicy().hasHeightForWidth());
        btnEquipArmor->setSizePolicy(sizePolicy3);

        encounterPanel->addWidget(btnEquipArmor);

        btnEquipWeapon = new QPushButton(layoutWidget4);
        btnEquipWeapon->setObjectName(QString::fromUtf8("btnEquipWeapon"));
        sizePolicy3.setHeightForWidth(btnEquipWeapon->sizePolicy().hasHeightForWidth());
        btnEquipWeapon->setSizePolicy(sizePolicy3);

        encounterPanel->addWidget(btnEquipWeapon);

        btnRollEncounterDie = new QPushButton(layoutWidget4);
        btnRollEncounterDie->setObjectName(QString::fromUtf8("btnRollEncounterDie"));
        sizePolicy3.setHeightForWidth(btnRollEncounterDie->sizePolicy().hasHeightForWidth());
        btnRollEncounterDie->setSizePolicy(sizePolicy3);

        encounterPanel->addWidget(btnRollEncounterDie);

        btnAttack = new QPushButton(layoutWidget4);
        btnAttack->setObjectName(QString::fromUtf8("btnAttack"));
        sizePolicy3.setHeightForWidth(btnAttack->sizePolicy().hasHeightForWidth());
        btnAttack->setSizePolicy(sizePolicy3);

        encounterPanel->addWidget(btnAttack);

        btnExchangeFate = new QPushButton(layoutWidget4);
        btnExchangeFate->setObjectName(QString::fromUtf8("btnExchangeFate"));
        sizePolicy3.setHeightForWidth(btnExchangeFate->sizePolicy().hasHeightForWidth());
        btnExchangeFate->setSizePolicy(sizePolicy3);

        encounterPanel->addWidget(btnExchangeFate);

        btnAddToFollowers = new QPushButton(layoutWidget4);
        btnAddToFollowers->setObjectName(QString::fromUtf8("btnAddToFollowers"));
        sizePolicy3.setHeightForWidth(btnAddToFollowers->sizePolicy().hasHeightForWidth());
        btnAddToFollowers->setSizePolicy(sizePolicy3);

        encounterPanel->addWidget(btnAddToFollowers);

        btnAddToTrophies = new QPushButton(layoutWidget4);
        btnAddToTrophies->setObjectName(QString::fromUtf8("btnAddToTrophies"));
        sizePolicy3.setHeightForWidth(btnAddToTrophies->sizePolicy().hasHeightForWidth());
        btnAddToTrophies->setSizePolicy(sizePolicy3);

        encounterPanel->addWidget(btnAddToTrophies);

        btnAddToObjects = new QPushButton(layoutWidget4);
        btnAddToObjects->setObjectName(QString::fromUtf8("btnAddToObjects"));
        sizePolicy3.setHeightForWidth(btnAddToObjects->sizePolicy().hasHeightForWidth());
        btnAddToObjects->setSizePolicy(sizePolicy3);

        encounterPanel->addWidget(btnAddToObjects);

        btnEndTurn = new QPushButton(layoutWidget4);
        btnEndTurn->setObjectName(QString::fromUtf8("btnEndTurn"));
        sizePolicy3.setHeightForWidth(btnEndTurn->sizePolicy().hasHeightForWidth());
        btnEndTurn->setSizePolicy(sizePolicy3);

        encounterPanel->addWidget(btnEndTurn);

        horizontalLayoutWidget = new QWidget(TheBigWindow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 480, 571, 111));
        mapSquarePanel = new QHBoxLayout(horizontalLayoutWidget);
        mapSquarePanel->setObjectName(QString::fromUtf8("mapSquarePanel"));
        mapSquarePanel->setSizeConstraint(QLayout::SetFixedSize);
        mapSquarePanel->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget = new QWidget(TheBigWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(370, 100, 211, 371));
        adventureCardPanel = new QVBoxLayout(verticalLayoutWidget);
        adventureCardPanel->setSpacing(0);
        adventureCardPanel->setObjectName(QString::fromUtf8("adventureCardPanel"));
        adventureCardPanel->setSizeConstraint(QLayout::SetMinimumSize);
        adventureCardPanel->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(TheBigWindow);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 360, 341, 41));
        dicePanel = new QHBoxLayout(horizontalLayoutWidget_2);
        dicePanel->setSpacing(16);
        dicePanel->setObjectName(QString::fromUtf8("dicePanel"));
        dicePanel->setContentsMargins(0, 0, 0, 0);

        retranslateUi(TheBigWindow);

        QMetaObject::connectSlotsByName(TheBigWindow);
    } // setupUi

    void retranslateUi(QWidget *TheBigWindow)
    {
        TheBigWindow->setWindowTitle(QApplication::translate("TheBigWindow", "Talisman", 0, QApplication::UnicodeUTF8));
        lblLife->setText(QApplication::translate("TheBigWindow", "Life", 0, QApplication::UnicodeUTF8));
        lblGold->setText(QApplication::translate("TheBigWindow", "Gold", 0, QApplication::UnicodeUTF8));
        lblStrPts->setText(QString());
        lblCftPts->setText(QString());
        lblFatePts->setText(QString());
        lblGoldPts->setText(QString());
        lblLifePts->setText(QString());
        btnListFollowers->setText(QApplication::translate("TheBigWindow", "Followers", 0, QApplication::UnicodeUTF8));
        btnListObjects->setText(QApplication::translate("TheBigWindow", "Objects", 0, QApplication::UnicodeUTF8));
        btnListTrophies->setText(QApplication::translate("TheBigWindow", "Trophies", 0, QApplication::UnicodeUTF8));
        lblFate->setText(QApplication::translate("TheBigWindow", "Fate", 0, QApplication::UnicodeUTF8));
        lblCft->setText(QApplication::translate("TheBigWindow", "Craft", 0, QApplication::UnicodeUTF8));
        lblStr->setText(QApplication::translate("TheBigWindow", "Strength", 0, QApplication::UnicodeUTF8));
        btnRollDie->setText(QApplication::translate("TheBigWindow", "Roll Die", 0, QApplication::UnicodeUTF8));
        btnRight->setText(QApplication::translate("TheBigWindow", "Clockwise", 0, QApplication::UnicodeUTF8));
        btnYes->setText(QApplication::translate("TheBigWindow", "Yes", 0, QApplication::UnicodeUTF8));
        lblStatus->setText(QString());
        btnNo->setText(QApplication::translate("TheBigWindow", "No", 0, QApplication::UnicodeUTF8));
        btnLeft->setText(QApplication::translate("TheBigWindow", "Counter-clockwise", 0, QApplication::UnicodeUTF8));
        btnEncounter->setText(QApplication::translate("TheBigWindow", "Encounter", 0, QApplication::UnicodeUTF8));
        btnExchangeTrophies->setText(QApplication::translate("TheBigWindow", "Exchange Trophies", 0, QApplication::UnicodeUTF8));
        btnCastSpell->setText(QApplication::translate("TheBigWindow", "Cast Spell", 0, QApplication::UnicodeUTF8));
        btnEquipArmor->setText(QApplication::translate("TheBigWindow", "Equip Armor", 0, QApplication::UnicodeUTF8));
        btnEquipWeapon->setText(QApplication::translate("TheBigWindow", "Equip Weapon", 0, QApplication::UnicodeUTF8));
        btnRollEncounterDie->setText(QApplication::translate("TheBigWindow", "Roll Die", 0, QApplication::UnicodeUTF8));
        btnAttack->setText(QApplication::translate("TheBigWindow", "Attack", 0, QApplication::UnicodeUTF8));
        btnExchangeFate->setText(QApplication::translate("TheBigWindow", "Exchange Fate", 0, QApplication::UnicodeUTF8));
        btnAddToFollowers->setText(QApplication::translate("TheBigWindow", "Add to Followers", 0, QApplication::UnicodeUTF8));
        btnAddToTrophies->setText(QApplication::translate("TheBigWindow", "Add to Objects", 0, QApplication::UnicodeUTF8));
        btnAddToObjects->setText(QApplication::translate("TheBigWindow", "Add to Trophies", 0, QApplication::UnicodeUTF8));
        btnEndTurn->setText(QApplication::translate("TheBigWindow", "End Turn", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TheBigWindow: public Ui_TheBigWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEBIGWINDOW_H
