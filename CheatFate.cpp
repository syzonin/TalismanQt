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

void CheatFate::win(Character* c, Enemy* e){
    
}

void CheatFate::lose(Character* c, Enemy* e){
    
    
}

void CheatFate::preBattle(Character* c, Enemy* e){
    
    c->setFateTokens(c->getFateTokens() + 1);
}

void CheatFate::postBattle(Character* c, Enemy* e){
    
}
