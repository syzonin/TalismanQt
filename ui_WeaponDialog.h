/********************************************************************************
** Form generated from reading UI file 'WeaponDialog.ui'
**
** Created: Sun Dec 9 18:32:36 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEAPONDIALOG_H
#define UI_WEAPONDIALOG_H

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

class Ui_WeaponDialog
{
public:
    QPushButton *btnEquip;
    QPushButton *btnClose;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layout;
    QComboBox *cboCard;

    void setupUi(QDialog *WeaponDialog)
    {
        if (WeaponDialog->objectName().isEmpty())
            WeaponDialog->setObjectName(QString::fromUtf8("WeaponDialog"));
        WeaponDialog->resize(300, 300);
        WeaponDialog->setStyleSheet(QString::fromUtf8("QPushButton { \n"
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
        btnEquip = new QPushButton(WeaponDialog);
        btnEquip->setObjectName(QString::fromUtf8("btnEquip"));
        btnEquip->setGeometry(QRect(70, 260, 75, 31));
        btnClose = new QPushButton(WeaponDialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(150, 260, 75, 31));
        verticalLayoutWidget = new QWidget(WeaponDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 281, 241));
        layout = new QVBoxLayout(verticalLayoutWidget);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setContentsMargins(0, 0, 0, 0);
        cboCard = new QComboBox(verticalLayoutWidget);
        cboCard->setObjectName(QString::fromUtf8("cboCard"));

        layout->addWidget(cboCard);


        retranslateUi(WeaponDialog);

        QMetaObject::connectSlotsByName(WeaponDialog);
    } // setupUi

    void retranslateUi(QDialog *WeaponDialog)
    {
        WeaponDialog->setWindowTitle(QApplication::translate("WeaponDialog", "WeaponDialog", 0, QApplication::UnicodeUTF8));
        btnEquip->setText(QApplication::translate("WeaponDialog", "Equip", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("WeaponDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WeaponDialog: public Ui_WeaponDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEAPONDIALOG_H
