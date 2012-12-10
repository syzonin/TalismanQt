/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "HolyLance.h"

HolyLance::HolyLance() : Weapon(3, 0, "Holy Lance", "No Text", 0) {
}

HolyLance::HolyLance(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}

string HolyLance::win(Character* c, Enemy* e){
    return "";
}

string HolyLance::lose(Character* c, Enemy* e){
    return "";
}

string HolyLance::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
    return "Holy Lance equipped.\nStrength increased by 3.";
}

string HolyLance::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength);
    return "Holy Lanced placed back into Inventory.";
}


