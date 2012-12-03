/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "Helmet.h"

Helmet::Helmet() : Armor("Helmet", "No Text", 0) {
}

Helmet::Helmet(string title, string text, int encounterNumber) : Armor(title, text, encounterNumber){
}

void Helmet::win(Character* c, Enemy* e){
    
}

void Helmet::lose(Character* c, Enemy* e){
    
    int x = rand() % 100 + 1;
    if (x <= 15)
        c->setLifePoints(c->getLifePoints() - 1);
    
}

