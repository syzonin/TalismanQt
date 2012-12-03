/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "SwordOfLight.h"

SwordOfLight::SwordOfLight() : Weapon(2, 1, "Sword Of Light", "No Text", 0) {
}

SwordOfLight::SwordOfLight(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}

void SwordOfLight::win(Character* c, Enemy* e){
    
}

void SwordOfLight::lose(Character* c, Enemy* e){
    
}

void SwordOfLight::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    c->setCraft(c->getCraft() + craft);
}

void SwordOfLight::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength); 
    c->setCraft(c->getCraft() + craft);    
}
