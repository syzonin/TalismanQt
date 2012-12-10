/*
 * File:   ArmorDialog.cpp
 * Author: Alex
 *
 * Created on December 9, 2012, 8:34 PM
 */

#include "ArmorDialog.h"

ArmorDialog::ArmorDialog(QWidget * parent, Character * c, vector<Armor*> &a) {
    widget.setupUi(this);
    this->setModal(true);
    currentIndex = 0;
    armors = &a; 
    
    list<AdventureCard*> objects = c->getObjects();
    for (list<AdventureCard*>::iterator it = objects.begin(); it != objects.end(); ++it) { 
        if ((*it)->getType() == "Armor") {
            bool isEquipped = false;
            for (unsigned int i = 0; i < a.size(); ++i) { 
                if (a.at(i) == (*it)) isEquipped = true;
            }
            if (!isEquipped) {
                cards.push_back(static_cast<Armor*>(*it));
                widget.cboCard->addItem(QString::fromStdString((*it)->getTitle()));
                widget.layout->addWidget((*it));
                (*it)->hide();
            }
        }
    }
    
    connect(widget.cboCard, SIGNAL(currentIndexChanged(int)), this, SLOT(currentIndexChanged(int)));
    connect(widget.btnEquip, SIGNAL(clicked()), this, SLOT(btnEquipClicked()));
    connect(widget.btnClose, SIGNAL(clicked()), this, SLOT(reject()));
    if (widget.cboCard->count() > 0) currentIndexChanged(0);
}

ArmorDialog::~ArmorDialog() {
}

void ArmorDialog::currentIndexChanged(int index) {
    cards.at(currentIndex)->hide();
    cards.at(index)->show();
    currentIndex = index;
}

void ArmorDialog::btnEquipClicked() {
    if (currentIndex < widget.cboCard->count()) armors->push_back(cards.at(currentIndex));
    this->accept();
}