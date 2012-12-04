/********************************************************************************
** Form generated from reading UI file 'TheBigWindow.ui'
**
** Created: Mon Dec 3 21:45:12 2012
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
    QPushButton *btnRollDie;
    QLabel *lblStatus;
    QHBoxLayout *directionLayout;
    QPushButton *btnRight;
    QPushButton *btnLeft;
    QHBoxLayout *confirmationLayout;
    QPushButton *btnYes;
    QPushButton *btnNo;
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
        windowLayout = new QGridLayout(TheBigWindow);
        windowLayout->setSpacing(0);
        windowLayout->setContentsMargins(8, 8, 8, 8);
        windowLayout->setObjectName(QString::fromUtf8("windowLayout"));
        windowLayout->setSizeConstraint(QLayout::SetMinimumSize);
        mainLayout = new QHBoxLayout();
        mainLayout->setSpacing(4);
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
        btnRollDie = new QPushButton(TheBigWindow);
        btnRollDie->setObjectName(QString::fromUtf8("btnRollDie"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnRollDie->sizePolicy().hasHeightForWidth());
        btnRollDie->setSizePolicy(sizePolicy1);

        rightLayout->addWidget(btnRollDie);

        lblStatus = new QLabel(TheBigWindow);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy2);
        lblStatus->setBaseSize(QSize(0, 40));
        lblStatus->setAlignment(Qt::AlignCenter);
        lblStatus->setWordWrap(true);

        rightLayout->addWidget(lblStatus);

        directionLayout = new QHBoxLayout();
        directionLayout->setObjectName(QString::fromUtf8("directionLayout"));
        directionLayout->setSizeConstraint(QLayout::SetMinimumSize);
        btnRight = new QPushButton(TheBigWindow);
        btnRight->setObjectName(QString::fromUtf8("btnRight"));
        sizePolicy1.setHeightForWidth(btnRight->sizePolicy().hasHeightForWidth());
        btnRight->setSizePolicy(sizePolicy1);
        btnRight->setBaseSize(QSize(0, 0));

        directionLayout->addWidget(btnRight);

        btnLeft = new QPushButton(TheBigWindow);
        btnLeft->setObjectName(QString::fromUtf8("btnLeft"));
        sizePolicy1.setHeightForWidth(btnLeft->sizePolicy().hasHeightForWidth());
        btnLeft->setSizePolicy(sizePolicy1);

        directionLayout->addWidget(btnLeft);


        rightLayout->addLayout(directionLayout);

        confirmationLayout = new QHBoxLayout();
        confirmationLayout->setObjectName(QString::fromUtf8("confirmationLayout"));
        confirmationLayout->setSizeConstraint(QLayout::SetMinimumSize);
        btnYes = new QPushButton(TheBigWindow);
        btnYes->setObjectName(QString::fromUtf8("btnYes"));
        sizePolicy1.setHeightForWidth(btnYes->sizePolicy().hasHeightForWidth());
        btnYes->setSizePolicy(sizePolicy1);

        confirmationLayout->addWidget(btnYes);

        btnNo = new QPushButton(TheBigWindow);
        btnNo->setObjectName(QString::fromUtf8("btnNo"));
        sizePolicy1.setHeightForWidth(btnNo->sizePolicy().hasHeightForWidth());
        btnNo->setSizePolicy(sizePolicy1);

        confirmationLayout->addWidget(btnNo);


        rightLayout->addLayout(confirmationLayout);

        deckLayout = new QHBoxLayout();
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
        iLabel->setText(QApplication::translate("TheBigWindow", "Current Square Instructions:", 0, QApplication::UnicodeUTF8));
        btnRollDie->setText(QApplication::translate("TheBigWindow", "Roll Die", 0, QApplication::UnicodeUTF8));
        lblStatus->setText(QApplication::translate("TheBigWindow", "Status", 0, QApplication::UnicodeUTF8));
        btnRight->setText(QApplication::translate("TheBigWindow", "Clockwise", 0, QApplication::UnicodeUTF8));
        btnLeft->setText(QApplication::translate("TheBigWindow", "Counter-clockwise", 0, QApplication::UnicodeUTF8));
        btnYes->setText(QApplication::translate("TheBigWindow", "Yes", 0, QApplication::UnicodeUTF8));
        btnNo->setText(QApplication::translate("TheBigWindow", "No", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TheBigWindow: public Ui_TheBigWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEBIGWINDOW_H
