/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Craft.h"

Craft::Craft() : Spell("Craft", "No Text", 0) {
}

Craft::Craft(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}

void Craft::win(Character* c, Enemy* e){
    
}

void Craft::lose(Character* c, Enemy* e){
    
    
}

void Craft::preBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft() + 1);
}

void Craft::postBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft() - 1);
}
