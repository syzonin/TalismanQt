/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "Runesword.h"

Runesword::Runesword() : Weapon(1, 0, "Runesword", "No Text", 0) {
}

Runesword::Runesword(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}

void Runesword::win(Character* c, Enemy* e){
    
    c->setLifePoints(c->getLifePoints() + 1);
}

void Runesword::lose(Character* c, Enemy* e){
    
}

void Runesword::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
}

void Runesword::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength);    
}
