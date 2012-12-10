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

string MagicShell::win(Character* c, Enemy* e){
    return "";
}

string MagicShell::lose(Character* c, Enemy* e){
    return "";    
}

string MagicShell::preBattle(Character* c, Enemy* e){

    e->setAttackPoints(e->getAttackPoints() - 1);
    return "Magic Shell spell cast.\nEnemy's Attack reduced by 1.";
}

string MagicShell::postBattle(Character* c, Enemy* e){
    return "Magic Shell spell has been used up.";
}
