/*
 * File:   SpellDialog.cpp
 * Author: Alex
 *
 * Created on December 9, 2012, 1:49 PM
 */

#include "SpellDialog.h"
///
///Constructor that takes as parameter the parent widget, a pointer to character
/// and a reference to a vector of active spells
///
SpellDialog::SpellDialog(QWidget * parent, Character * c, vector<Spell*> &v) {
    widget.setupUi(this);
    this->setModal(true);
    currentIndex = 0;
    spells = &v; 
    
    list<AdventureCard*> objects = c->getObjects();
    for (list<AdventureCard*>::iterator it = objects.begin(); it != objects.end(); ++it) { 
        if ((*it)->getType() == "Spell") {
            bool isCast = false;
            for (unsigned int i = 0; i < v.size(); ++i) { 
                if (v.at(i) == (*it)) isCast = true;
            }
            if (!isCast) {
                cards.push_back(static_cast<Spell*>(*it));
                widget.cboCard->addItem(QString::fromStdString((*it)->getTitle()));
                widget.layout->addWidget((*it));
                (*it)->hide();
            }
        }
    }
    
    connect(widget.cboCard, SIGNAL(currentIndexChanged(int)), this, SLOT(currentIndexChanged(int)));
    connect(widget.btnCast, SIGNAL(clicked()), this, SLOT(btnCastClicked()));
    connect(widget.btnClose, SIGNAL(clicked()), this, SLOT(reject()));
    if (widget.cboCard->count() > 0) currentIndexChanged(0);
}
///
///Destructor
///
SpellDialog::~SpellDialog() {
}
///
///Slot for custom index changed event
///
void SpellDialog::currentIndexChanged(int index) {
    cards.at(currentIndex)->hide();
    cards.at(index)->show();
    currentIndex = index;
}
///
///Slot for button cast click event
///
void SpellDialog::btnCastClicked() {
    if (currentIndex < widget.cboCard->count()) spells->push_back(cards.at(currentIndex));
    this->accept();
}