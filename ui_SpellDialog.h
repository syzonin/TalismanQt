/********************************************************************************
** Form generated from reading UI file 'SpellDialog.ui'
**
** Created: Sun Dec 9 16:24:18 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPELLDIALOG_H
#define UI_SPELLDIALOG_H

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

class Ui_SpellDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layout;
    QComboBox *cboCard;
    QPushButton *btnCast;
    QPushButton *btnClose;

    void setupUi(QDialog *SpellDialog)
    {
        if (SpellDialog->objectName().isEmpty())
            SpellDialog->setObjectName(QString::fromUtf8("SpellDialog"));
        SpellDialog->resize(300, 300);
        SpellDialog->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        verticalLayoutWidget = new QWidget(SpellDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 281, 241));
        layout = new QVBoxLayout(verticalLayoutWidget);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setContentsMargins(0, 0, 0, 0);
        cboCard = new QComboBox(verticalLayoutWidget);
        cboCard->setObjectName(QString::fromUtf8("cboCard"));

        layout->addWidget(cboCard);

        btnCast = new QPushButton(SpellDialog);
        btnCast->setObjectName(QString::fromUtf8("btnCast"));
        btnCast->setGeometry(QRect(50, 260, 75, 31));
        btnClose = new QPushButton(SpellDialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(150, 260, 75, 31));

        retranslateUi(SpellDialog);

        QMetaObject::connectSlotsByName(SpellDialog);
    } // setupUi

    void retranslateUi(QDialog *SpellDialog)
    {
        SpellDialog->setWindowTitle(QApplication::translate("SpellDialog", "SpellDialog", 0, QApplication::UnicodeUTF8));
        btnCast->setText(QApplication::translate("SpellDialog", "Cast", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("SpellDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SpellDialog: public Ui_SpellDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPELLDIALOG_H
