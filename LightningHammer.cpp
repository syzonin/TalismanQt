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

string LightningHammer::win(Character* c, Enemy* e){
    return "";
}

string LightningHammer::lose(Character* c, Enemy* e){
    return "";
}

string LightningHammer::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    return "Lightning Hammer equipped.\nStrength increased by 2";
}

string LightningHammer::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength);
    return "Lightning hammer placed back into Inventory.";
}


