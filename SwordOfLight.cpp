/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "SwordOfLight.h"

SwordOfLight::SwordOfLight() : Weapon(2, 1, "Sword Of Light", "No Text", 0) {
}

SwordOfLight::SwordOfLight(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}

string SwordOfLight::win(Character* c, Enemy* e){
    return "";
}

string SwordOfLight::lose(Character* c, Enemy* e){
    return "";
}

string SwordOfLight::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    c->setCraft(c->getCraft() + craft);
    return "Sword of Light equipped.\nStrength and Craft increased by 1.";
}

string SwordOfLight::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength); 
    c->setCraft(c->getCraft() + craft);
    return "Sword of Light placed back into Inventory.";
}
