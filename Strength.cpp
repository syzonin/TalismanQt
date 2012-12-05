/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Strength.h"

Strength::Strength() : Spell("Strength", "No Text", 0) {
}

Strength::Strength(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}

void Strength::win(Character* c, Enemy* e){
    
}

void Strength::lose(Character* c, Enemy* e){    
    
}

void Strength::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + 1);
}

void Strength::postBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() - 1);
}
