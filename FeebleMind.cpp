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

string FeebleMind::win(Character* c, Enemy* e){
    return "";
}

string FeebleMind::lose(Character* c, Enemy* e){
    return "";    
}

string FeebleMind::preBattle(Character* c, Enemy* e){
    
    e->setAttackPoints(e->getAttackPoints() - 2);
    if(e->getAttackPoints() < 0)
        e->setAttackPoints(0);
    return "Feeble Mind spell cast.\nEnemy's Attack is reduced by 2.";
}

string FeebleMind::postBattle(Character* c, Enemy* e){
    return "Feeble Mind spell has been used up.";
}
