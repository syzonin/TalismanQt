/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "Spellsword.h"

///
///Default Constructor
///
Spellsword::Spellsword() : Weapon(0, 1, "Spellsword", "No Text", 0) {
}
///
///Parameterized Constructor
///
Spellsword::Spellsword(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}
///
///Method called to perform Weapon-specific actions when the player wins
///
string Spellsword::win(Character* c, Enemy* e){
    //c->addSpell();  TODO: MUST ADD A RANDOM SPELL UPON WINNING
    return "";
}
///
///Method called to perform Weapon-specific actions when the player loses
///
string Spellsword::lose(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions before a battle
///
string Spellsword::preBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft());
    return "Spellsword equipped.\nCraft increased by 1.";
}
///
///Method called to perform Weapon-specific actions after a battle
///
string Spellsword::postBattle(Character* c, Enemy* e){

    c->setCraft(c->getCraft());
    return "Spellsword placed back into Inventory.";
}
