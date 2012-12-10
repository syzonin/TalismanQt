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

string MagicMace::win(Character* c, Enemy* e){
    return "";
}

string MagicMace::lose(Character* c, Enemy* e){
    return "";
}

string MagicMace::preBattle(Character* c, Enemy* e){
    
    c->setCraft(c->getCraft() + craft);
    return "Magic Mace equipped.\nCraft increased by 2.";
}

string MagicMace::postBattle(Character* c, Enemy* e){

    c->setCraft(c->getCraft() - craft);
    return "Magic Mace placed back into Inventory.";
}
