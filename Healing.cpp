/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Healing.h"

///
///Default Constructor
///
Healing::Healing() : Spell("Healing", "No Text", 0) {
}
///
///Parameterized Constructor
///
Healing::Healing(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}
///
///Method called to perform Spell-specific actions when the player wins
///
string Healing::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Spell-specific actions when the player loses
///
string Healing::lose(Character* c, Enemy* e){
    return "";    
}
///
///Method called to perform Spell-specific actions before a battle
///
string Healing::preBattle(Character* c, Enemy* e){
    
    c->setLifePoints(c->getLifePoints() + 1);
    return "Healing spell cast.\n1 Health Point has been added.";
}
///
///Method called to perform Spell-specific actions after a battle
///
string Healing::postBattle(Character* c, Enemy* e){
    return "Healing Spell has been used up.";
}
