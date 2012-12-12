/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "Axe.h"

///
///Default Constructor
///
Axe::Axe() : Weapon(1, 0, "Axe", "No Text", 0) {
}
///
///Parameterized Constructor
///
Axe::Axe(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}
///
///Method called to perform Weapon-specific actions when the player wins
///
string Axe::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions when the player loses
///
string Axe::lose(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions before a battle
///
string Axe::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    return "Axe equipped.\nStrength increased by 1.";
}
///
///Method called to perform Weapon-specific actions after a battle
///
string Axe::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength); 
    return "Axe placed back into Inventory.";
}

