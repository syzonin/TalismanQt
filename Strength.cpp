/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Strength.h"

///
///Default Constructor
///
Strength::Strength() : Spell("Strength", "No Text", 0) {
}
///
///Parameterized Constructor
///
Strength::Strength(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}
///
///Method called to perform Spell-specific actions when the player wins
///
string Strength::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Spell-specific actions when the player loses
///
string Strength::lose(Character* c, Enemy* e){    
    return "";
}
///
///Method called to perform Spell-specific actions before a battle
///
string Strength::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + 1);
    return "Strength spell cast.\nStrength increased by 1.";
}
///
///Method called to perform Spell-specific actions after a battle
///
string Strength::postBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() - 1);
    return "Strength spell used up.";
}
