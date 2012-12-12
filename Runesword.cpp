/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "Runesword.h"

///
///Default Constructor
///
Runesword::Runesword() : Weapon(1, 0, "Runesword", "No Text", 0) {
}
///
///Parameterized Constructor
///
Runesword::Runesword(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}
///
///Method called to perform Weapon-specific actions when the player wins
///
string Runesword::win(Character* c, Enemy* e){
    
    c->setLifePoints(c->getLifePoints() + 1);
    return "Runesword leeches 1 Life.";
}
///
///Method called to perform Weapon-specific actions when the player loses
///
string Runesword::lose(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions before a battle
///
string Runesword::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    return "Runesword equipped.\nStrength increased by 1.";
}
///
///Method called to perform Weapon-specific actions after a battle
///
string Runesword::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength);
    return "Runesword placed back into Inventory.";
}
