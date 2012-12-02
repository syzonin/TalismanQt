/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "Frostbite.h"

Frostbite::Frostbite() : Weapon(1, 1, "Frostbite", "No Text", 0) {
}

Frostbite::Frostbite(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}

void Frostbite::win(Character* c, Enemy* e){
    
}

void Frostbite::lose(Character* c, Enemy* e){
    
}

void Frostbite::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    c->setCraft(c->getCraft() + craft);
}

void Frostbite::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength);
    c->setCraft(c->getCraft() - craft);    
}


