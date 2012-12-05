/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Weakness.h"

Weakness::Weakness() : Spell("Weakness", "No Text", 0) {
}

Weakness::Weakness(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}

void Weakness::win(Character* c, Enemy* e){
    
}

void Weakness::lose(Character* c, Enemy* e){
    
    
}

void Weakness::preBattle(Character* c, Enemy* e){
    
    e->setAttackPoints(e->getAttackPoints() - 3);
    if(e->getAttackPoints() < 0)
        e->setAttackPoints(0);    
}

void Weakness::postBattle(Character* c, Enemy* e){
    
}
