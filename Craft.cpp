/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Craft.h"

///
///Default Constructor
///
Craft::Craft() : Spell("Craft", "No Text", 0) {
}
///
///Parameterized Constructor
///
Craft::Craft(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}
///
///Method called to perform Spell-specific actions when the player wins
///
string Craft::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Spell-specific actions when the player loses
///
string Craft::lose(Character* c, Enemy* e){
    return "";    
}
///
///Method called to perform Spell-specific actions before a battle
///
string Craft::preBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft() + 1);
    return "Craft spell cast.\nCraft is increased by 1.";
}
///
///Method called to perform Spell-specific actions after a battle
///
string Craft::postBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft() - 1);
    return "Craft spell has been used up.";
}
