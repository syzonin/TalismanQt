/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "CheatFate.h"

///
///Default Constructor
///
CheatFate::CheatFate() : Spell("Cheat Fate", "No Text", 0) {
}
///
///Parameterized Constructor
///
CheatFate::CheatFate(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}
///
///Method called to perform Spell-specific actions when the player wins
///
string CheatFate::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Spell-specific actions when the player loses
///
string CheatFate::lose(Character* c, Enemy* e){
    return "";    
}
///
///Method called to perform Spell-specific actions before a battle
///
string CheatFate::preBattle(Character* c, Enemy* e){
    
    c->setFateTokens(c->getFateTokens() + 1);
    return "Cheat Fate spell cast.\n1 Fate Token is awarded.";
}
///
///Method called to perform Spell-specific actions after a battle
///
string CheatFate::postBattle(Character* c, Enemy* e){
    return "Cheat Fate spell has been used up.";
}
