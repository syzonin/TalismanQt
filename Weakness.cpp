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

string Weakness::win(Character* c, Enemy* e){
    return "";
}

string Weakness::lose(Character* c, Enemy* e){
    return "";    
}

string Weakness::preBattle(Character* c, Enemy* e){
    
    e->setAttackPoints(e->getAttackPoints() - 3);
    if(e->getAttackPoints() < 0)
        e->setAttackPoints(0); 
    return "Weakness spell cast.\nEnemy's Attack reduced by 3.";
}

string Weakness::postBattle(Character* c, Enemy* e){
    return "Weakness Spell has been used up";
}
