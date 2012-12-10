/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Generosity.h"

Generosity::Generosity() : Spell("Generosity", "No Text", 0) {
}

Generosity::Generosity(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}

string Generosity::win(Character* c, Enemy* e){

    c->setGold(c->getGold() + 3);
    return "Generosity spell has caused the onlookers to award you 3 Gold Pieces.";
}

string Generosity::lose(Character* c, Enemy* e){
    return "";    
}

string Generosity::preBattle(Character* c, Enemy* e){
    return "Generosity spell cast.\nIf the " + e->getTitle() + " is defeated, you will be awarded extra Gold Pieces.";
}

string Generosity::postBattle(Character* c, Enemy* e){
    return "Generosity spell has been used up.";
}
