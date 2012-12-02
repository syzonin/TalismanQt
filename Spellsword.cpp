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

void Spellsword::win(Character* c, Enemy* e){
    //c->addSpell();  TO DO MUST ADD A RANDOM SPELL UPON WINNING
}

void Spellsword::lose(Character* c, Enemy* e){
    
}

void Spellsword::preBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft());
}

void Spellsword::postBattle(Character* c, Enemy* e){

    c->setCraft(c->getCraft());    
}
