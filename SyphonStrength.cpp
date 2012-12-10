/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "SyphonStrength.h"

SyphonStrength::SyphonStrength() : Spell("Syphon Strength", "No Text", 0) {
}

SyphonStrength::SyphonStrength(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}

string SyphonStrength::win(Character* c, Enemy* e){
    return "";
}

string SyphonStrength::lose(Character* c, Enemy* e){
    return "";    
}

string SyphonStrength::preBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() + 1);
    c->setCraft(c->getCraft() + 1);
    e->setAttackPoints(e->getAttackPoints() - 1);
    return "Syphon Strength spell cast.\nStrength and Craft increased by 1 and Enemy's Attack decreased by 1.";
}

string SyphonStrength::postBattle(Character* c, Enemy* e){
    
    c->setStrength(c->getStrength() - 1);
    c->setCraft(c->getCraft() - 1);
    return "Syphon Strength spell has been used up";
}
