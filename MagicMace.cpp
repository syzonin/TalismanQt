/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "MagicMace.h"

MagicMace::MagicMace() : Weapon(0, 2, "Magic Mace", "No Text", 0) {
}

MagicMace::MagicMace(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}

void MagicMace::win(Character* c, Enemy* e){
    
}

void MagicMace::lose(Character* c, Enemy* e){
    
}

void MagicMace::preBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft() + craft);
}

void MagicMace::postBattle(Character* c, Enemy* e){

    c->setCraft(c->getCraft() - craft);    
}
