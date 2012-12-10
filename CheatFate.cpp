/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "CheatFate.h"

CheatFate::CheatFate() : Spell("Cheat Fate", "No Text", 0) {
}

CheatFate::CheatFate(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}

string CheatFate::win(Character* c, Enemy* e){
    return "";
}

string CheatFate::lose(Character* c, Enemy* e){
    return "";    
}

string CheatFate::preBattle(Character* c, Enemy* e){
    
    c->setFateTokens(c->getFateTokens() + 1);
    return "Cheat Fate spell cast.\n1 Fate Token is awarded.";
}

string CheatFate::postBattle(Character* c, Enemy* e){
    return "Cheat Fate spell has been used up.";
}
