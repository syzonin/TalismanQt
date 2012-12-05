/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "LifeTap.h"

LifeTap::LifeTap() : Spell("Life Tap", "No Text", 0) {
}

LifeTap::LifeTap(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}

void LifeTap::win(Character* c, Enemy* e){

    c->setLifePoints(c->getLifePoints() + 1);
}

void LifeTap::lose(Character* c, Enemy* e){
    
    
}

void LifeTap::preBattle(Character* c, Enemy* e){
    
}

void LifeTap::postBattle(Character* c, Enemy* e){
    
}
