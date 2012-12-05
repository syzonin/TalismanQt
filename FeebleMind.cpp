/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "FeebleMind.h"

FeebleMind::FeebleMind() : Spell("Feeble Mind", "No Text", 0) {
}

FeebleMind::FeebleMind(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}

void FeebleMind::win(Character* c, Enemy* e){
    
}

void FeebleMind::lose(Character* c, Enemy* e){
    
    
}

void FeebleMind::preBattle(Character* c, Enemy* e){
    
    e->setAttackPoints(e->getAttackPoints() - 2);
    if(e->getAttackPoints() < 0)
        e->setAttackPoints(0);
}

void FeebleMind::postBattle(Character* c, Enemy* e){
    
}
