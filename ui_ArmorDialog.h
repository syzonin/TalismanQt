/********************************************************************************
** Form generated from reading UI file 'ArmorDialog.ui'
**
** Created: Sun Dec 9 18:32:36 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARMORDIALOG_H
#define UI_ARMORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArmorDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layout;
    QComboBox *cboCard;
    QPushButton *btnClose;
    QPushButton *btnEquip;

    void setupUi(QDialog *ArmorDialog)
    {
        if (ArmorDialog->objectName().isEmpty())
            ArmorDialog->setObjectName(QString::fromUtf8("ArmorDialog"));
        ArmorDialog->resize(300, 300);
        ArmorDialog->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"background-image: url(images/CardTexture.jpg);\n"
"border: 2px solid black; \n"
"border-radius: 4px; \n"
"padding: 4px;\n"
"margin: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border-color: green; \n"
"color: green;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-color: rgba(0, 0, 0, 50%);\n"
"color: rgba(0, 0, 0, 50%);\n"
"}\n"
"\n"
"QPushButton, QLabel {\n"
"font-family: \"Windlass\";\n"
"}\n"
"\n"
"QLabel {\n"
"background-color: rgba(0,0,0,0%);\n"
"padding: 4px;\n"
"}"));
        verticalLayoutWidget = new QWidget(ArmorDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 281, 241));
        layout = new QVBoxLayout(verticalLayoutWidget);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setContentsMargins(0, 0, 0, 0);
        cboCard = new QComboBox(verticalLayoutWidget);
        cboCard->setObjectName(QString::fromUtf8("cboCard"));

        layout->addWidget(cboCard);

        btnClose = new QPushButton(ArmorDialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(150, 260, 75, 31));
        btnEquip = new QPushButton(ArmorDialog);
        btnEquip->setObjectName(QString::fromUtf8("btnEquip"));
        btnEquip->setGeometry(QRect(70, 260, 75, 31));

        retranslateUi(ArmorDialog);

        QMetaObject::connectSlotsByName(ArmorDialog);
    } // setupUi

    void retranslateUi(QDialog *ArmorDialog)
    {
        ArmorDialog->setWindowTitle(QApplication::translate("ArmorDialog", "ArmorDialog", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("ArmorDialog", "Close", 0, QApplication::UnicodeUTF8));
        btnEquip->setText(QApplication::translate("ArmorDialog", "Equip", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ArmorDialog: public Ui_ArmorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARMORDIALOG_H
