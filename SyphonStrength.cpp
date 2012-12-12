/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "SyphonStrength.h"

///
///Default Constructor
///
SyphonStrength::SyphonStrength() : Spell("Syphon Strength", "No Text", 0) {
}
///
///Parameterized Constructor
///
SyphonStrength::SyphonStrength(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}
///
///Method called to perform Spell-specific actions when the player wins
///
string SyphonStrength::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Spell-specific actions when the player loses
///
string SyphonStrength::lose(Character* c, Enemy* e){
    return "";    
}
///
///Method called to perform Spell-specific actions before a battle
///
string SyphonStrength::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + 1);
    c->setCraft(c->getCraft() + 1);
    e->setAttackPoints(e->getAttackPoints() - 1);
    return "Syphon Strength spell cast.\nStrength and Craft increased by 1 and Enemy's Attack decreased by 1.";
}
///
///Method called to perform Spell-specific actions after a battle
///
string SyphonStrength::postBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() - 1);
    c->setCraft(c->getCraft() - 1);
    return "Syphon Strength spell has been used up";
}
