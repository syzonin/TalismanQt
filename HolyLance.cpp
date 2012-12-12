/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "HolyLance.h"

///
///Default Constructor
///
HolyLance::HolyLance() : Weapon(3, 0, "Holy Lance", "No Text", 0) {
}
///
///Parameterized Constructor
///
HolyLance::HolyLance(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}
///
///Method called to perform Weapon-specific actions when the player wins
///
string HolyLance::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions when the player loses
///
string HolyLance::lose(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions before a battle
///
string HolyLance::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    return "Holy Lance equipped.\nStrength increased by 3.";
}
///
///Method called to perform Weapon-specific actions after a battle
///
string HolyLance::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength);
    return "Holy Lanced placed back into Inventory.";
}


