/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "MagicShell.h"

///
///Default Constructor
///
MagicShell::MagicShell() : Spell("Magic Shell", "No Text", 0) {
}
///
///Parameterized Constructor
///
MagicShell::MagicShell(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}
///
///Method called to perform Spell-specific actions when the player wins
///
string MagicShell::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Spell-specific actions when the player loses
///
string MagicShell::lose(Character* c, Enemy* e){
    return "";    
}
///
///Method called to perform Spell-specific actions before a battle
///
string MagicShell::preBattle(Character* c, Enemy* e){

    e->setAttackPoints(e->getAttackPoints() - 1);
    return "Magic Shell spell cast.\nEnemy's Attack reduced by 1.";
}
///
///Method called to perform Spell-specific actions after a battle
///
string MagicShell::postBattle(Character* c, Enemy* e){
    return "Magic Shell spell has been used up.";
}
