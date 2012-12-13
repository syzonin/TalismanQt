/*
 * File:   WeaponDialog.cpp
 * Author: Alex
 *
 * Created on December 9, 2012, 6:29 PM
 */

#include "WeaponDialog.h"
///
///Constructor that takes as parameter the parent widget, a pointer to character
/// and a reference to a vector of active armors
///
WeaponDialog::WeaponDialog(QWidget * parent, Character * c, vector<Weapon*> &w) {
    widget.setupUi(this);
    this->setModal(true);
    currentIndex = 0;
    weapons = &w; 
    
    list<AdventureCard*> objects = c->getObjects();
    for (list<AdventureCard*>::iterator it = objects.begin(); it != objects.end(); ++it) { 
        if ((*it)->getType() == "Weapon") {
            bool isEquipped = false;
            for (unsigned int i = 0; i < w.size(); ++i) { 
                if (w.at(i) == (*it)) isEquipped = true;
            }
            if (!isEquipped) {
                cards.push_back(static_cast<Weapon*>(*it));
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
///
///Destructor
///
WeaponDialog::~WeaponDialog() {
}
///
///Slot for custom index changed event
///
void WeaponDialog::currentIndexChanged(int index) {
    cards.at(currentIndex)->hide();
    cards.at(index)->show();
    currentIndex = index;
}
///
///Slot for button equip click event
///
void WeaponDialog::btnEquipClicked() {
    if (currentIndex < widget.cboCard->count()) weapons->push_back(cards.at(currentIndex));
    this->accept();
}