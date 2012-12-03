/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "MirrorShield.h"

MirrorShield::MirrorShield() : Armor("Mirror Shield Armor", "No Text", 0) {
}

MirrorShield::MirrorShield(string title, string text, int encounterNumber) : Armor(title, text, encounterNumber){
}

void MirrorShield::win(Character* c, Enemy* e){
    
}

void MirrorShield::lose(Character* c, Enemy* e){
    
    int x = rand() % 100 + 1;
    if (x <= 50)
        c->setLifePoints(c->getLifePoints() - 1);
    
}

