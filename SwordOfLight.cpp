/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "SwordOfLight.h"

///
///Default Constructor
///
SwordOfLight::SwordOfLight() : Weapon(2, 1, "Sword Of Light", "No Text", 0) {
}
///
///Parameterized Constructor
///
SwordOfLight::SwordOfLight(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}
///
///Method called to perform Weapon-specific actions when the player wins
///
string SwordOfLight::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions when the player loses
///
string SwordOfLight::lose(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions before a battle
///
string SwordOfLight::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    c->setCraft(c->getCraft() + craft);
    return "Sword of Light equipped.\nStrength and Craft increased by 1.";
}
///
///Method called to perform Weapon-specific actions after a battle
///
string SwordOfLight::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength); 
    c->setCraft(c->getCraft() + craft);
    return "Sword of Light placed back into Inventory.";
}
