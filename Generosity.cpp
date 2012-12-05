/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Generosity.h"

Generosity::Generosity() : Spell("Generosity", "No Text", 0) {
}

Generosity::Generosity(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}

void Generosity::win(Character* c, Enemy* e){

    c->setGold(c->getGold() + 3);
}

void Generosity::lose(Character* c, Enemy* e){
    
    
}

void Generosity::preBattle(Character* c, Enemy* e){
    
}

void Generosity::postBattle(Character* c, Enemy* e){
    
}
