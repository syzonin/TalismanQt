/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "BaneSword.h"

BaneSword::BaneSword() : Weapon(0, 2, "Bane Sword", "No Text", 0) {
}

BaneSword::BaneSword(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}

string BaneSword::win(Character* c, Enemy* e){
    return "";
}

string BaneSword::lose(Character* c, Enemy* e){
    return "";
}

string BaneSword::preBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft() + craft);
    return "Bane Sword equipped.\nCraft increased by 2.";
}

string BaneSword::postBattle(Character* c, Enemy* e){

    c->setCraft(c->getCraft() - craft); 
    return "Bane Sword placed back into Inventory.";
}
