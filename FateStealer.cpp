/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "FateStealer.h"

FateStealer::FateStealer() : Weapon(1, 0, "Fate Stealer", "No Text", 0) {
}

FateStealer::FateStealer(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}

string FateStealer::win(Character* c, Enemy* e){

    c->setFateTokens(c->getFateTokens() + 1);
    return "Fate Stealer leeches 1 Fate Token.";
}

string FateStealer::lose(Character* c, Enemy* e){
    return "";
}

string FateStealer::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    return "Fate Stealer equipped.\nStrength increased by 1.";
}

string FateStealer::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength);   
    return "Fate Stealer placed back into Inventory.";
}


