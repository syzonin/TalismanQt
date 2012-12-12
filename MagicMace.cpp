/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "MagicMace.h"

///
///Default Constructor
///
MagicMace::MagicMace() : Weapon(0, 2, "Magic Mace", "No Text", 0) {
}
///
///Parameterized Constructor
///
MagicMace::MagicMace(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}
///
///Method called to perform Weapon-specific actions when the player wins
///
string MagicMace::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions when the player loses
///
string MagicMace::lose(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions before a battle
///
string MagicMace::preBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft() + craft);
    return "Magic Mace equipped.\nCraft increased by 2.";
}
///
///Method called to perform Weapon-specific actions after a battle
///
string MagicMace::postBattle(Character* c, Enemy* e){

    c->setCraft(c->getCraft() - craft);
    return "Magic Mace placed back into Inventory.";
}
