/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "BasicArmor.h"

BasicArmor::BasicArmor() : Armor("Basic Armor", "No Text", 0) {
}

BasicArmor::BasicArmor(string title, string text, int encounterNumber) : Armor(title, text, encounterNumber){
}

void BasicArmor::win(Character* c, Enemy* e){
    
}

void BasicArmor::lose(Character* c, Enemy* e){
    
    int x = rand() % 100 + 1;
    if (x <= 50)
        c->setLifePoints(c->getLifePoints() - 1);
    
}
