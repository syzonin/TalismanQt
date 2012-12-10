/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "Axe.h"

Axe::Axe() : Weapon(1, 0, "Axe", "No Text", 0) {
}

Axe::Axe(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}

string Axe::win(Character* c, Enemy* e){
    return "";
}

string Axe::lose(Character* c, Enemy* e){
    return "";
}

string Axe::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    return "Axe equipped.\nStrength increased by 1.";
}

string Axe::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength); 
    return "Axe placed back into Inventory.";
}

