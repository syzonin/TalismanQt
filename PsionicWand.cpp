/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "PsionicWand.h"

PsionicWand::PsionicWand() : Weapon(0, 0, "Psionic Wand", "No Text", 0) {
}

PsionicWand::PsionicWand(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}

string PsionicWand::win(Character* c, Enemy* e){
    return "";
}

string PsionicWand::lose(Character* c, Enemy* e){
    return "";
}

string PsionicWand::preBattle(Character* c, Enemy* e){
    
    if (e->getSubType() != "Spirit"){
        int x = c->getStrength();
        c->setStrength(c->getCraft());
        c->setCraft(x);
        return "Psionic Wand equipped.\nEngaging Psychic Combat instead of Battle.";
    }
    return "";
}

string PsionicWand::postBattle(Character* c, Enemy* e){

    if (e->getSubType() != "Spirit"){
        int x = c->getStrength();
        c->setStrength(c->getCraft());
        c->setCraft(x);
    }
    return "Psionic Wand placed back into Inventory";
    
}
