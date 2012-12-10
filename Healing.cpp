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

string Healing::win(Character* c, Enemy* e){
    return "";
}

string Healing::lose(Character* c, Enemy* e){
    return "";    
}

string Healing::preBattle(Character* c, Enemy* e){
    
    c->setLifePoints(c->getLifePoints() + 1);
    return "Healing spell cast.\n1 Health Point has been added.";
}

string Healing::postBattle(Character* c, Enemy* e){
    return "Healing Spell has been used up.";
}
