/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "FateStealer.h"

///
///Default Constructor
///
FateStealer::FateStealer() : Weapon(1, 0, "Fate Stealer", "No Text", 0) {
}
///
///Parameterized Constructor
///
FateStealer::FateStealer(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}
///
///Method called to perform Weapon-specific actions when the player wins
///
string FateStealer::win(Character* c, Enemy* e){

    c->setFateTokens(c->getFateTokens() + 1);
    return "Fate Stealer leeches 1 Fate Token.";
}
///
///Method called to perform Weapon-specific actions when the player loses
///
string FateStealer::lose(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions before a battle
///
string FateStealer::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    return "Fate Stealer equipped.\nStrength increased by 1.";
}
///
///Method called to perform Weapon-specific actions after a battle
///
string FateStealer::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength);   
    return "Fate Stealer placed back into Inventory.";
}


