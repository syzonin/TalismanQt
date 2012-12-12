/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Restoration.h"

///
///Default Constructor
///
Restoration::Restoration() : Spell("Restoration", "No Text", 0) {
}
///
///Parameterized Constructor
///
Restoration::Restoration(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}
///
///Method called to perform Spell-specific actions when the player wins
///
string Restoration::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Spell-specific actions when the player loses
///
string Restoration::lose(Character* c, Enemy* e){
    return "";    
}
///
///Method called to perform Spell-specific actions before a battle
///
string Restoration::preBattle(Character* c, Enemy* e){
    
    c->setLifePoints(c->getLife());
    return "Restoration spell cast.\nLife Points changed to character's starting value";
}
///
///Method called to perform Spell-specific actions after a battle
///
string Restoration::postBattle(Character* c, Enemy* e){
    return "Restoration spell has been used up.";
}
