/*
 * File:   SpellDialog.cpp
 * Author: Alex
 *
 * Created on December 9, 2012, 1:49 PM
 */

#include "SpellDialog.h"

SpellDialog::SpellDialog(QWidget * parent, Character * character, Enemy * enemy) {
    widget.setupUi(this);
    this->setModal(true);
    currentIndex = 0;
    c = character;
    e = enemy;
    
    list<AdventureCard*> objects = c->getObjects();
    for (list<AdventureCard*>::iterator it = objects.begin(); it != objects.end(); ++it) { 
        if ((*it)->getType() == "Spell") {
            cards.push_back(static_cast<Spell*>(*it));
            widget.cboCard->addItem(QString::fromStdString((*it)->getTitle()));
            widget.layout->addWidget((*it));
            (*it)->hide();
        }
    }
    
    connect(widget.cboCard, SIGNAL(currentIndexChanged(int)), this, SLOT(currentIndexChanged(int)));
    connect(widget.btnCast, SIGNAL(clicked()), this, SLOT(btnCastClicked()));
    connect(widget.btnClose, SIGNAL(clicked()), this, SLOT(reject()));
    currentIndexChanged(0);
}

SpellDialog::~SpellDialog() {
}

void SpellDialog::currentIndexChanged(int index) {
    cards.at(currentIndex)->hide();
    cards.at(index)->show();
    currentIndex = index;
}

void SpellDialog::btnCastClicked() {
    cards.at(currentIndex)->preBattle(c,e);
    this->accept();
}