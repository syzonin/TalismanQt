/********************************************************************************
** Form generated from reading UI file 'AdventureCardEdit.ui'
**
** Created: Sat Dec 1 12:47:36 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVENTURECARDEDIT_H
#define UI_ADVENTURECARDEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdventureCardEdit
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *layout;
    QGridLayout *gridLayout;
    QLabel *lblCard;
    QLabel *lblTitle;
    QLabel *lblType;
    QLabel *lblText;
    QLabel *lblEncounterNumber;
    QLabel *lblSubType;
    QLabel *lblAttackPoints;
    QComboBox *cboCard;
    QLineEdit *txtTitle;
    QLineEdit *txtType;
    QTextEdit *txtText;
    QLineEdit *txtEncounterNumber;
    QLineEdit *txtSubType;
    QLineEdit *txtAttackPoints;
    QPushButton *btnSave;
    QPushButton *btnReload;

    void setupUi(QWidget *AdventureCardEdit)
    {
        if (AdventureCardEdit->objectName().isEmpty())
            AdventureCardEdit->setObjectName(QString::fromUtf8("AdventureCardEdit"));
        AdventureCardEdit->resize(800, 400);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AdventureCardEdit->sizePolicy().hasHeightForWidth());
        AdventureCardEdit->setSizePolicy(sizePolicy);
        horizontalLayoutWidget = new QWidget(AdventureCardEdit);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 781, 381));
        layout = new QHBoxLayout(horizontalLayoutWidget);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblCard = new QLabel(horizontalLayoutWidget);
        lblCard->setObjectName(QString::fromUtf8("lblCard"));

        gridLayout->addWidget(lblCard, 0, 0, 1, 1);

        lblTitle = new QLabel(horizontalLayoutWidget);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));

        gridLayout->addWidget(lblTitle, 1, 0, 1, 1);

        lblType = new QLabel(horizontalLayoutWidget);
        lblType->setObjectName(QString::fromUtf8("lblType"));

        gridLayout->addWidget(lblType, 2, 0, 1, 1);

        lblText = new QLabel(horizontalLayoutWidget);
        lblText->setObjectName(QString::fromUtf8("lblText"));

        gridLayout->addWidget(lblText, 3, 0, 1, 1);

        lblEncounterNumber = new QLabel(horizontalLayoutWidget);
        lblEncounterNumber->setObjectName(QString::fromUtf8("lblEncounterNumber"));

        gridLayout->addWidget(lblEncounterNumber, 4, 0, 1, 1);

        lblSubType = new QLabel(horizontalLayoutWidget);
        lblSubType->setObjectName(QString::fromUtf8("lblSubType"));

        gridLayout->addWidget(lblSubType, 5, 0, 1, 1);

        lblAttackPoints = new QLabel(horizontalLayoutWidget);
        lblAttackPoints->setObjectName(QString::fromUtf8("lblAttackPoints"));

        gridLayout->addWidget(lblAttackPoints, 6, 0, 1, 1);

        cboCard = new QComboBox(horizontalLayoutWidget);
        cboCard->setObjectName(QString::fromUtf8("cboCard"));

        gridLayout->addWidget(cboCard, 0, 1, 1, 1);

        txtTitle = new QLineEdit(horizontalLayoutWidget);
        txtTitle->setObjectName(QString::fromUtf8("txtTitle"));

        gridLayout->addWidget(txtTitle, 1, 1, 1, 1);

        txtType = new QLineEdit(horizontalLayoutWidget);
        txtType->setObjectName(QString::fromUtf8("txtType"));

        gridLayout->addWidget(txtType, 2, 1, 1, 1);

        txtText = new QTextEdit(horizontalLayoutWidget);
        txtText->setObjectName(QString::fromUtf8("txtText"));

        gridLayout->addWidget(txtText, 3, 1, 1, 1);

        txtEncounterNumber = new QLineEdit(horizontalLayoutWidget);
        txtEncounterNumber->setObjectName(QString::fromUtf8("txtEncounterNumber"));

        gridLayout->addWidget(txtEncounterNumber, 4, 1, 1, 1);

        txtSubType = new QLineEdit(horizontalLayoutWidget);
        txtSubType->setObjectName(QString::fromUtf8("txtSubType"));

        gridLayout->addWidget(txtSubType, 5, 1, 1, 1);

        txtAttackPoints = new QLineEdit(horizontalLayoutWidget);
        txtAttackPoints->setObjectName(QString::fromUtf8("txtAttackPoints"));

        gridLayout->addWidget(txtAttackPoints, 6, 1, 1, 1);

        btnSave = new QPushButton(horizontalLayoutWidget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        gridLayout->addWidget(btnSave, 7, 0, 1, 1);

        btnReload = new QPushButton(horizontalLayoutWidget);
        btnReload->setObjectName(QString::fromUtf8("btnReload"));

        gridLayout->addWidget(btnReload, 8, 0, 1, 1);


        layout->addLayout(gridLayout);


        retranslateUi(AdventureCardEdit);

        QMetaObject::connectSlotsByName(AdventureCardEdit);
    } // setupUi

    void retranslateUi(QWidget *AdventureCardEdit)
    {
        AdventureCardEdit->setWindowTitle(QApplication::translate("AdventureCardEdit", "AdventureCardEdit", 0, QApplication::UnicodeUTF8));
        lblCard->setText(QApplication::translate("AdventureCardEdit", "Card", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QApplication::translate("AdventureCardEdit", "Title", 0, QApplication::UnicodeUTF8));
        lblType->setText(QApplication::translate("AdventureCardEdit", "Type", 0, QApplication::UnicodeUTF8));
        lblText->setText(QApplication::translate("AdventureCardEdit", "Text", 0, QApplication::UnicodeUTF8));
        lblEncounterNumber->setText(QApplication::translate("AdventureCardEdit", "Encounter Number", 0, QApplication::UnicodeUTF8));
        lblSubType->setText(QApplication::translate("AdventureCardEdit", "Sub Type", 0, QApplication::UnicodeUTF8));
        lblAttackPoints->setText(QApplication::translate("AdventureCardEdit", "Attack Points", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("AdventureCardEdit", "Save", 0, QApplication::UnicodeUTF8));
        btnReload->setText(QApplication::translate("AdventureCardEdit", "Reload", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AdventureCardEdit: public Ui_AdventureCardEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVENTURECARDEDIT_H
