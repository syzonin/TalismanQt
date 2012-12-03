/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "Shield.h"

Shield::Shield() : Armor("Shield", "No Text", 0) {
}

Shield::Shield(string title, string text, int encounterNumber) : Armor(title, text, encounterNumber){
}

void Shield::win(Character* c, Enemy* e){
    
}

void Shield::lose(Character* c, Enemy* e){
    
    int x = rand() % 100 + 1;
    if (x <= 25)
        c->setLifePoints(c->getLifePoints() - 1);
    
}

