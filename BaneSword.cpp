/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "BaneSword.h"

///
///Default Constructor
///
BaneSword::BaneSword() : Weapon(0, 2, "Bane Sword", "No Text", 0) {
}
///
///Parameterized Constructor
///
BaneSword::BaneSword(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}
///
///Method called to perform Weapon-specific actions when the player wins
///
string BaneSword::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions when the player loses
///
string BaneSword::lose(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions before a battle
///
string BaneSword::preBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft() + craft);
    return "Bane Sword equipped.\nCraft increased by 2.";
}
///
///Method called to perform Weapon-specific actions after a battle
///
string BaneSword::postBattle(Character* c, Enemy* e){

    c->setCraft(c->getCraft() - craft); 
    return "Bane Sword placed back into Inventory.";
}
