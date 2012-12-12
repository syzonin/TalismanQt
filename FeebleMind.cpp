/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "FeebleMind.h"

///
///Default Constructor
///
FeebleMind::FeebleMind() : Spell("Feeble Mind", "No Text", 0) {
}
///
///Parameterized Constructor
///
FeebleMind::FeebleMind(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}
///
///Method called to perform Spell-specific actions when the player wins
///
string FeebleMind::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Spell-specific actions when the player loses
///
string FeebleMind::lose(Character* c, Enemy* e){
    return "";    
}
///
///Method called to perform Spell-specific actions before a battle
///
string FeebleMind::preBattle(Character* c, Enemy* e){
    
    e->setAttackPoints(e->getAttackPoints() - 2);
    if(e->getAttackPoints() < 0)
        e->setAttackPoints(0);
    return "Feeble Mind spell cast.\nEnemy's Attack is reduced by 2.";
}
///
///Method called to perform Spell-specific actions after a battle
///
string FeebleMind::postBattle(Character* c, Enemy* e){
    return "Feeble Mind spell has been used up.";
}
