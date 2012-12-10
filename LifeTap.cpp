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

string LifeTap::win(Character* c, Enemy* e){

    c->setLifePoints(c->getLifePoints() + 1);
    return "Life Tap leeches 1 Life and grants it to the Player.";
}

string LifeTap::lose(Character* c, Enemy* e){
    return "";    
}

string LifeTap::preBattle(Character* c, Enemy* e){
    return "Life Tap spell cast.\nIf the " + e->getTitle() + " is defeated, 1 Life Point will be awarded.";
}

string LifeTap::postBattle(Character* c, Enemy* e){
    return "Life Tap spell has been used up.";
}
