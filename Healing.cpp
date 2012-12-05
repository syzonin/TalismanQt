/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Healing.h"

Healing::Healing() : Spell("Healing", "No Text", 0) {
}

Healing::Healing(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}

void Healing::win(Character* c, Enemy* e){
    
}

void Healing::lose(Character* c, Enemy* e){
    
    
}

void Healing::preBattle(Character* c, Enemy* e){
    
    c->setLifePoints(c->getLifePoints() + 1);
}

void Healing::postBattle(Character* c, Enemy* e){
    
}
