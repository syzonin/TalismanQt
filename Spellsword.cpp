/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "Spellsword.h"

Spellsword::Spellsword() : Weapon(0, 1, "Spellsword", "No Text", 0) {
}

Spellsword::Spellsword(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}

string Spellsword::win(Character* c, Enemy* e){
    //c->addSpell();  TODO: MUST ADD A RANDOM SPELL UPON WINNING
    return "";
}

string Spellsword::lose(Character* c, Enemy* e){
    return "";
}

string Spellsword::preBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft());
    return "Spellsword equipped.\nCraft increased by 1.";
}

string Spellsword::postBattle(Character* c, Enemy* e){

    c->setCraft(c->getCraft());
    return "Spellsword placed back into Inventory.";
}
