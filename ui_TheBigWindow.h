/********************************************************************************
** Form generated from reading UI file 'TheBigWindow.ui'
**
** Created: Tue Dec 4 00:32:19 2012
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
#include <QtGui/QTextBrowser>
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
    QTextBrowser *instructionBox;
    QVBoxLayout *rightLayout;
    QLabel *lblStatus;
    QHBoxLayout *movementLayout;
    QPushButton *btnRollDie;
    QPushButton *btnRight;
    QPushButton *btnLeft;
    QPushButton *btnYes;
    QPushButton *btnNo;
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
    QHBoxLayout *deckLayout;
    QHBoxLayout *controlLayout;

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
        mainLayout->setSpacing(0);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setSizeConstraint(QLayout::SetMinimumSize);
        leftLayout = new QVBoxLayout();
        leftLayout->setObjectName(QString::fromUtf8("leftLayout"));
        leftLayout->setSizeConstraint(QLayout::SetMinimumSize);
        bigSquare = new QHBoxLayout();
        bigSquare->setSpacing(0);
        bigSquare->setObjectName(QString::fromUtf8("bigSquare"));
        bigSquare->setSizeConstraint(QLayout::SetMinimumSize);

        leftLayout->addLayout(bigSquare);

        iLabel = new QLabel(TheBigWindow);
        iLabel->setObjectName(QString::fromUtf8("iLabel"));

        leftLayout->addWidget(iLabel);

        instructionBox = new QTextBrowser(TheBigWindow);
        instructionBox->setObjectName(QString::fromUtf8("instructionBox"));

        leftLayout->addWidget(instructionBox);


        mainLayout->addLayout(leftLayout);

        rightLayout = new QVBoxLayout();
        rightLayout->setSpacing(0);
        rightLayout->setObjectName(QString::fromUtf8("rightLayout"));
        rightLayout->setSizeConstraint(QLayout::SetMinimumSize);
        rightLayout->setContentsMargins(-1, -1, 0, -1);
        lblStatus = new QLabel(TheBigWindow);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy1);
        lblStatus->setBaseSize(QSize(0, 40));
        lblStatus->setAlignment(Qt::AlignCenter);
        lblStatus->setWordWrap(true);

        rightLayout->addWidget(lblStatus);

        movementLayout = new QHBoxLayout();
        movementLayout->setSpacing(0);
        movementLayout->setObjectName(QString::fromUtf8("movementLayout"));
        movementLayout->setSizeConstraint(QLayout::SetMinimumSize);
        btnRollDie = new QPushButton(TheBigWindow);
        btnRollDie->setObjectName(QString::fromUtf8("btnRollDie"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnRollDie->sizePolicy().hasHeightForWidth());
        btnRollDie->setSizePolicy(sizePolicy2);

        movementLayout->addWidget(btnRollDie);

        btnRight = new QPushButton(TheBigWindow);
        btnRight->setObjectName(QString::fromUtf8("btnRight"));
        sizePolicy2.setHeightForWidth(btnRight->sizePolicy().hasHeightForWidth());
        btnRight->setSizePolicy(sizePolicy2);
        btnRight->setBaseSize(QSize(0, 0));

        movementLayout->addWidget(btnRight);

        btnLeft = new QPushButton(TheBigWindow);
        btnLeft->setObjectName(QString::fromUtf8("btnLeft"));
        sizePolicy2.setHeightForWidth(btnLeft->sizePolicy().hasHeightForWidth());
        btnLeft->setSizePolicy(sizePolicy2);

        movementLayout->addWidget(btnLeft);

        btnYes = new QPushButton(TheBigWindow);
        btnYes->setObjectName(QString::fromUtf8("btnYes"));
        sizePolicy2.setHeightForWidth(btnYes->sizePolicy().hasHeightForWidth());
        btnYes->setSizePolicy(sizePolicy2);

        movementLayout->addWidget(btnYes);

        btnNo = new QPushButton(TheBigWindow);
        btnNo->setObjectName(QString::fromUtf8("btnNo"));
        sizePolicy2.setHeightForWidth(btnNo->sizePolicy().hasHeightForWidth());
        btnNo->setSizePolicy(sizePolicy2);

        movementLayout->addWidget(btnNo);


        rightLayout->addLayout(movementLayout);

        charDetails = new QGridLayout();
        charDetails->setSpacing(0);
        charDetails->setObjectName(QString::fromUtf8("charDetails"));
        charDetails->setSizeConstraint(QLayout::SetMinimumSize);
        lblStr = new QLabel(TheBigWindow);
        lblStr->setObjectName(QString::fromUtf8("lblStr"));
        lblStr->setLayoutDirection(Qt::LeftToRight);
        lblStr->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblStr, 0, 0, 1, 1);

        lblLife = new QLabel(TheBigWindow);
        lblLife->setObjectName(QString::fromUtf8("lblLife"));
        lblLife->setLayoutDirection(Qt::LeftToRight);
        lblLife->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblLife, 0, 4, 1, 1);

        lblGold = new QLabel(TheBigWindow);
        lblGold->setObjectName(QString::fromUtf8("lblGold"));
        lblGold->setLayoutDirection(Qt::LeftToRight);
        lblGold->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblGold, 0, 3, 1, 1);

        lblFate = new QLabel(TheBigWindow);
        lblFate->setObjectName(QString::fromUtf8("lblFate"));
        lblFate->setLayoutDirection(Qt::LeftToRight);
        lblFate->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblFate, 0, 2, 1, 1);

        lblCft = new QLabel(TheBigWindow);
        lblCft->setObjectName(QString::fromUtf8("lblCft"));
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
        lblCftPts->setLayoutDirection(Qt::LeftToRight);
        lblCftPts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblCftPts, 1, 1, 1, 1);

        lblFatePts = new QLabel(TheBigWindow);
        lblFatePts->setObjectName(QString::fromUtf8("lblFatePts"));
        lblFatePts->setLayoutDirection(Qt::LeftToRight);
        lblFatePts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblFatePts, 1, 2, 1, 1);

        lblGoldPts = new QLabel(TheBigWindow);
        lblGoldPts->setObjectName(QString::fromUtf8("lblGoldPts"));
        lblGoldPts->setLayoutDirection(Qt::LeftToRight);
        lblGoldPts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblGoldPts, 1, 3, 1, 1);

        lblLifePts = new QLabel(TheBigWindow);
        lblLifePts->setObjectName(QString::fromUtf8("lblLifePts"));
        lblLifePts->setLayoutDirection(Qt::LeftToRight);
        lblLifePts->setAlignment(Qt::AlignCenter);

        charDetails->addWidget(lblLifePts, 1, 4, 1, 1);

        btnFollowers = new QPushButton(TheBigWindow);
        btnFollowers->setObjectName(QString::fromUtf8("btnFollowers"));

        charDetails->addWidget(btnFollowers, 2, 1, 1, 1);

        btnObjects = new QPushButton(TheBigWindow);
        btnObjects->setObjectName(QString::fromUtf8("btnObjects"));

        charDetails->addWidget(btnObjects, 2, 2, 1, 1);

        btnTrophies = new QPushButton(TheBigWindow);
        btnTrophies->setObjectName(QString::fromUtf8("btnTrophies"));

        charDetails->addWidget(btnTrophies, 2, 3, 1, 1);


        rightLayout->addLayout(charDetails);

        deckLayout = new QHBoxLayout();
        deckLayout->setSpacing(0);
        deckLayout->setObjectName(QString::fromUtf8("deckLayout"));
        deckLayout->setSizeConstraint(QLayout::SetMinimumSize);

        rightLayout->addLayout(deckLayout);

        controlLayout = new QHBoxLayout();
        controlLayout->setSpacing(0);
        controlLayout->setObjectName(QString::fromUtf8("controlLayout"));
        controlLayout->setSizeConstraint(QLayout::SetMinimumSize);

        rightLayout->addLayout(controlLayout);


        mainLayout->addLayout(rightLayout);


        windowLayout->addLayout(mainLayout, 0, 0, 1, 1);


        retranslateUi(TheBigWindow);

        QMetaObject::connectSlotsByName(TheBigWindow);
    } // setupUi

    void retranslateUi(QWidget *TheBigWindow)
    {
        TheBigWindow->setWindowTitle(QApplication::translate("TheBigWindow", "Talisman", 0, QApplication::UnicodeUTF8));
        iLabel->setText(QApplication::translate("TheBigWindow", "Current Square Instructions:", 0, QApplication::UnicodeUTF8));
        lblStatus->setText(QString());
        btnRollDie->setText(QApplication::translate("TheBigWindow", "Roll Die", 0, QApplication::UnicodeUTF8));
        btnRight->setText(QApplication::translate("TheBigWindow", "Clockwise", 0, QApplication::UnicodeUTF8));
        btnLeft->setText(QApplication::translate("TheBigWindow", "Counter-clockwise", 0, QApplication::UnicodeUTF8));
        btnYes->setText(QApplication::translate("TheBigWindow", "Yes", 0, QApplication::UnicodeUTF8));
        btnNo->setText(QApplication::translate("TheBigWindow", "No", 0, QApplication::UnicodeUTF8));
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
        btnFollowers->setText(QApplication::translate("TheBigWindow", "Followers", 0, QApplication::UnicodeUTF8));
        btnObjects->setText(QApplication::translate("TheBigWindow", "Objects", 0, QApplication::UnicodeUTF8));
        btnTrophies->setText(QApplication::translate("TheBigWindow", "Trophies", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TheBigWindow: public Ui_TheBigWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEBIGWINDOW_H
