/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "LightningHammer.h"

///
///Default Constructor
///
LightningHammer::LightningHammer() : Weapon(2, 0, "Lightning Hammer", "No Text", 0) {
}
///
///Parameterized Constructor
///
LightningHammer::LightningHammer(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}
///
///Method called to perform Weapon-specific actions when the player wins
///
string LightningHammer::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions when the player loses
///
string LightningHammer::lose(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions before a battle
///
string LightningHammer::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    return "Lightning Hammer equipped.\nStrength increased by 2";
}
///
///Method called to perform Weapon-specific actions after a battle
///
string LightningHammer::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength);
    return "Lightning hammer placed back into Inventory.";
}


