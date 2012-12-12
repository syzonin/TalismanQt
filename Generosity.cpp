/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Generosity.h"

///
///Default Constructor
///
Generosity::Generosity() : Spell("Generosity", "No Text", 0) {
}
///
///Parameterized Constructor
///
Generosity::Generosity(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}
///
///Method called to perform Spell-specific actions when the player wins
///
string Generosity::win(Character* c, Enemy* e){

    c->setGold(c->getGold() + 3);
    return "Generosity spell has caused the onlookers to award you 3 Gold Pieces.";
}
///
///Method called to perform Spell-specific actions when the player loses
///
string Generosity::lose(Character* c, Enemy* e){
    return "";    
}
///
///Method called to perform Spell-specific actions before a battle
///
string Generosity::preBattle(Character* c, Enemy* e){
    return "Generosity spell cast.\nIf the " + e->getTitle() + " is defeated, you will be awarded extra Gold Pieces.";
}
///
///Method called to perform Spell-specific actions after a battle
///
string Generosity::postBattle(Character* c, Enemy* e){
    return "Generosity spell has been used up.";
}
