/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Weakness.h"

///
///Default Constructor
///
Weakness::Weakness() : Spell("Weakness", "No Text", 0) {
}
///
///Parameterized Constructor
///
Weakness::Weakness(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}
///
///Method called to perform Spell-specific actions when the player wins
///
string Weakness::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Spell-specific actions when the player loses
///
string Weakness::lose(Character* c, Enemy* e){
    return "";    
}
///
///Method called to perform Spell-specific actions before a battle
///
string Weakness::preBattle(Character* c, Enemy* e){
    
    e->setAttackPoints(e->getAttackPoints() - 3);
    if(e->getAttackPoints() < 0)
        e->setAttackPoints(0); 
    return "Weakness spell cast.\nEnemy's Attack reduced by 3.";
}
///
///Method called to perform Spell-specific actions after a battle
///
string Weakness::postBattle(Character* c, Enemy* e){
    return "Weakness Spell has been used up";
}
