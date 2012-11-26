/********************************************************************************
** Form generated from reading UI file 'TheBigWindow.ui'
**
** Created: Thu Nov 15 22:43:30 2012
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheBigWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *bigSquare;
    QPushButton *btnRollDie;
    QPushButton *btnLeft;
    QPushButton *btnRight;
    QPushButton *btnYes;
    QLabel *cross;
    QPushButton *btnNo;
    QLabel *crownReached;
    QLabel *instructions;
    QTextBrowser *instructionBox;
    QLabel *iLabel;
    QLabel *movesLeft;

    void setupUi(QWidget *TheBigWindow)
    {
        if (TheBigWindow->objectName().isEmpty())
            TheBigWindow->setObjectName(QString::fromUtf8("TheBigWindow"));
        TheBigWindow->resize(1119, 809);
        horizontalLayoutWidget = new QWidget(TheBigWindow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 811, 591));
        bigSquare = new QHBoxLayout(horizontalLayoutWidget);
        bigSquare->setObjectName(QString::fromUtf8("bigSquare"));
        bigSquare->setContentsMargins(0, 0, 0, 0);
        btnRollDie = new QPushButton(TheBigWindow);
        btnRollDie->setObjectName(QString::fromUtf8("btnRollDie"));
        btnRollDie->setGeometry(QRect(910, 10, 75, 23));
        btnLeft = new QPushButton(TheBigWindow);
        btnLeft->setObjectName(QString::fromUtf8("btnLeft"));
        btnLeft->setGeometry(QRect(890, 40, 91, 23));
        btnRight = new QPushButton(TheBigWindow);
        btnRight->setObjectName(QString::fromUtf8("btnRight"));
        btnRight->setGeometry(QRect(980, 40, 61, 23));
        btnYes = new QPushButton(TheBigWindow);
        btnYes->setObjectName(QString::fromUtf8("btnYes"));
        btnYes->setGeometry(QRect(920, 80, 41, 21));
        cross = new QLabel(TheBigWindow);
        cross->setObjectName(QString::fromUtf8("cross"));
        cross->setGeometry(QRect(910, 60, 121, 20));
        btnNo = new QPushButton(TheBigWindow);
        btnNo->setObjectName(QString::fromUtf8("btnNo"));
        btnNo->setGeometry(QRect(960, 80, 41, 21));
        crownReached = new QLabel(TheBigWindow);
        crownReached->setObjectName(QString::fromUtf8("crownReached"));
        crownReached->setGeometry(QRect(910, 30, 101, 61));
        instructions = new QLabel(TheBigWindow);
        instructions->setObjectName(QString::fromUtf8("instructions"));
        instructions->setGeometry(QRect(910, 40, 131, 51));
        instructionBox = new QTextBrowser(TheBigWindow);
        instructionBox->setObjectName(QString::fromUtf8("instructionBox"));
        instructionBox->setGeometry(QRect(20, 620, 801, 131));
        iLabel = new QLabel(TheBigWindow);
        iLabel->setObjectName(QString::fromUtf8("iLabel"));
        iLabel->setGeometry(QRect(20, 600, 171, 16));
        movesLeft = new QLabel(TheBigWindow);
        movesLeft->setObjectName(QString::fromUtf8("movesLeft"));
        movesLeft->setGeometry(QRect(890, 20, 111, 20));

        retranslateUi(TheBigWindow);

        QMetaObject::connectSlotsByName(TheBigWindow);
    } // setupUi

    void retranslateUi(QWidget *TheBigWindow)
    {
        TheBigWindow->setWindowTitle(QApplication::translate("TheBigWindow", "Talisman", 0, QApplication::UnicodeUTF8));
        btnRollDie->setText(QApplication::translate("TheBigWindow", "Roll Die", 0, QApplication::UnicodeUTF8));
        btnLeft->setText(QApplication::translate("TheBigWindow", "counterclockwise", 0, QApplication::UnicodeUTF8));
        btnRight->setText(QApplication::translate("TheBigWindow", "clockwise", 0, QApplication::UnicodeUTF8));
        btnYes->setText(QApplication::translate("TheBigWindow", "Yes", 0, QApplication::UnicodeUTF8));
        cross->setText(QApplication::translate("TheBigWindow", "Do you want to cross?", 0, QApplication::UnicodeUTF8));
        btnNo->setText(QApplication::translate("TheBigWindow", "No", 0, QApplication::UnicodeUTF8));
        crownReached->setText(QApplication::translate("TheBigWindow", "You have reached the \n"
" crown of command!", 0, QApplication::UnicodeUTF8));
        instructions->setText(QApplication::translate("TheBigWindow", "Choose a character \n"
" by clicking the card: ", 0, QApplication::UnicodeUTF8));
        iLabel->setText(QApplication::translate("TheBigWindow", "Current Square Instructions:", 0, QApplication::UnicodeUTF8));
        movesLeft->setText(QApplication::translate("TheBigWindow", "move 2 more squares", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TheBigWindow: public Ui_TheBigWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEBIGWINDOW_H
