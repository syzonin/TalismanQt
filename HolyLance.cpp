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

void HolyLance::win(Character* c, Enemy* e){
    
}

void HolyLance::lose(Character* c, Enemy* e){
    
}

void HolyLance::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + strength);
}

void HolyLance::postBattle(Character* c, Enemy* e){

    c->setStrength(c->getStrength() - strength);    
}


