/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "MagicShell.h"

MagicShell::MagicShell() : Spell("Magic Shell", "No Text", 0) {
}

MagicShell::MagicShell(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}

void MagicShell::win(Character* c, Enemy* e){
    
}

void MagicShell::lose(Character* c, Enemy* e){
         
}

void MagicShell::preBattle(Character* c, Enemy* e){

    e->setAttackPoints(e->getAttackPoints() - 1);
}

void MagicShell::postBattle(Character* c, Enemy* e){
    
}
