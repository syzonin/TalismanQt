/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "LightningHammer.h"

LightningHammer::LightningHammer() : Weapon(2, 0, "Lightning Hammer", "No Text", 0) {
}

LightningHammer::LightningHammer(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}

void LightningHammer::win(Character* c, Enemy* e){
    
}

void LightningHammer::lose(Character* c, Enemy* e){
    
}

void LightningHammer::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
}

void LightningHammer::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength);    
}


