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

string Craft::win(Character* c, Enemy* e){
    return "";
}

string Craft::lose(Character* c, Enemy* e){
    return "";    
}

string Craft::preBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft() + 1);
    return "Craft spell cast.\nCraft is increased by 1.";
}

string Craft::postBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft() - 1);
    return "Craft spell has been used up.";
}
