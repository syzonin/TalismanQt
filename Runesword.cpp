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

string Runesword::win(Character* c, Enemy* e){
    
    c->setLifePoints(c->getLifePoints() + 1);
    return "Runesword leeches 1 Life.";
}

string Runesword::lose(Character* c, Enemy* e){
    return "";
}

string Runesword::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    return "Runesword equipped.\nStrength increased by 1.";
}

string Runesword::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength);
    return "Runesword placed back into Inventory.";
}
