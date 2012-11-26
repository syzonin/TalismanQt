/*
 * File:   AdventureCardEdit.cpp
 * Author: Alex
 *
 * Created on October 31, 2012, 8:17 PM
 */

#include "AdventureCardEdit.h"

AdventureCardEdit::AdventureCardEdit() {
    widget.setupUi(this);
    currentIndex = 0;
    //Load cards and add to layout
    load();
    //Add titles to combo box
    for (unsigned int i = 0; i < cards.size(); ++i) {
        widget.cboCard->addItem(QString::fromStdString(cards.at(i)->getTitle()));
    }   
    //Signal-slot connection
    connect(widget.btnSave, SIGNAL(clicked()), this, SLOT(clickedSave()));
    connect(widget.btnReload, SIGNAL(clicked()), this, SLOT(clickedReload()));
    connect(widget.cboCard, SIGNAL(currentIndexChanged(int)), this, SLOT(currentIndexChanged(int)));
    connect(widget.txtTitle, SIGNAL(textChanged(const QString&)), this, SLOT(setTitle(const QString&)));
    connect(widget.txtType, SIGNAL(textChanged(const QString&)), this, SLOT(setType(const QString&)));
    connect(widget.txtText, SIGNAL(textChanged()), this, SLOT(setText()));
    connect(widget.txtEncounterNumber, SIGNAL(textChanged(const QString&)), this, SLOT(setEncounterNumber(const QString&)));
    connect(widget.txtSubType, SIGNAL(textChanged(const QString&)), this, SLOT(setSubType(const QString&)));
    connect(widget.txtAttackPoints, SIGNAL(textChanged(const QString&)), this, SLOT(setAttackPoints(const QString&)));
}

AdventureCardEdit::~AdventureCardEdit() {
    for (int i = cards.size()-1; i >= 0; --i) {
        widget.layout->removeWidget(cards.at(i));
        delete cards.at(i);
    }
}

void AdventureCardEdit::currentIndexChanged(int index) {
    cards.at(currentIndex)->hide();
    cards.at(index)->show();
    currentIndex = index;    
    populateForm(index);
}

void AdventureCardEdit::populateForm(int index) {
    widget.txtTitle->setText(QString::fromStdString(cards.at(index)->getTitle()));
    widget.txtType->setText(QString::fromStdString(cards.at(index)->getType()));
    widget.txtText->setText(QString::fromStdString(cards.at(index)->getText()));
    widget.txtEncounterNumber->setText(QString("%1").arg(cards.at(index)->getEncounterNumber()));
    
    if (cards.at(index)->getType() == "Enemy") {
        Enemy* e = static_cast<Enemy*>(cards.at(index));
        widget.txtSubType->setText(QString::fromStdString(e->getSubType()));
        widget.txtAttackPoints->setText(QString("%1").arg(e->getAttackPoints()));
    }
}

void AdventureCardEdit::setTitle(const QString& value) {
    cards.at(currentIndex)->setTitle(value.toStdString());
}

void AdventureCardEdit::setType(const QString& value) {
    cards.at(currentIndex)->setType(value.toStdString());
}

void AdventureCardEdit::setText() {
    cards.at(currentIndex)->setText(widget.txtText->toPlainText().toStdString());
}

void AdventureCardEdit::setEncounterNumber(const QString& value) {
    cards.at(currentIndex)->setEncounterNumber(value.toInt(new bool(true),10));
}

void AdventureCardEdit::setSubType(const QString& value) {
    if (cards.at(currentIndex)->getType() == "Enemy") {
        Enemy* e = static_cast<Enemy*>(cards.at(currentIndex));
        e->setSubType(value.toStdString());
    }
}

void AdventureCardEdit::setAttackPoints(const QString& value) {
    if (cards.at(currentIndex)->getType() == "Enemy") {
        Enemy* e = static_cast<Enemy*>(cards.at(currentIndex));
        e->setAttackPoints(value.toInt(new bool(true),10));
    }
}

void AdventureCardEdit::clickedSave() {
    string line = "";
    for (unsigned int i = 0; i < cards.size(); ++i) {
        line += cards.at(i)->getTitle() + ";" 
              + cards.at(i)->getType() + ";"
              + cards.at(i)->getText() + ";"
              + QString::number(cards.at(i)->getEncounterNumber(),10).toStdString();
        
        if (cards.at(i)->getType() == "Enemy") {
            Enemy* e = static_cast<Enemy*>(cards.at(i));
            line +=  ";" +  e->getSubType() + ";" + QString::number(e->getAttackPoints(),10).toStdString();
        } 
        
        if (i < cards.size()-1) line += "\n";
    }
    
    AdventureCardModel::update(QString::fromStdString(line));
}

void AdventureCardEdit::clickedReload() {
    load();
}

void AdventureCardEdit::load() {
    vector<QStringList> cardVector = AdventureCardModel::select();
    
    for (int i = cards.size()-1; i >= 0; --i) {
        widget.layout->removeWidget(cards.at(i));
        delete cards.at(i);
    }
    cards.clear();
        
    for (unsigned int i = 0; i < cardVector.size(); ++i) {
        cards.push_back(
                new Enemy(cardVector.at(i).at(0).toStdString(),
                          cardVector.at(i).at(1).toStdString(),
                          cardVector.at(i).at(2).toStdString(),
                          cardVector.at(i).at(3).toInt(new bool(true),10),
                          cardVector.at(i).at(4).toStdString(),
                          cardVector.at(i).at(5).toInt(new bool(true),10)
                )
        );
        
        widget.layout->addWidget(cards.at(i));
        cards.at(i)->hide();
    }
    
     currentIndexChanged(currentIndex);
}