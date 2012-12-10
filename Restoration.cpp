/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "Restoration.h"

Restoration::Restoration() : Spell("Restoration", "No Text", 0) {
}

Restoration::Restoration(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}

string Restoration::win(Character* c, Enemy* e){
    return "";
}

string Restoration::lose(Character* c, Enemy* e){
    return "";    
}

string Restoration::preBattle(Character* c, Enemy* e){
    
    c->setLifePoints(c->getLife());
    return "Restoration spell cast.\nLife Points changed to character's starting value";
}

string Restoration::postBattle(Character* c, Enemy* e){
    return "Restoration spell has been used up.";
}
