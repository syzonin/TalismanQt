/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Restoration.h"

Restoration::Restoration() : Spell("Restoration", "No Text", 0) {
}

Restoration::Restoration(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}

void Restoration::win(Character* c, Enemy* e){
    
}

void Restoration::lose(Character* c, Enemy* e){
    
    
}

void Restoration::preBattle(Character* c, Enemy* e){
    
    c->setLifePoints(c->getLife());
}

void Restoration::postBattle(Character* c, Enemy* e){
    
}
