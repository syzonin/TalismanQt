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

void PsionicWand::win(Character* c, Enemy* e){
    
}

void PsionicWand::lose(Character* c, Enemy* e){
    
}

void PsionicWand::preBattle(Character* c, Enemy* e){
    
    if (e->getSubType() != "Spirit"){
        int x = c->getStrength();
        c->setStrength(c->getCraft());
        c->setCraft(x);
    }
}

void PsionicWand::postBattle(Character* c, Enemy* e){

    if (e->getSubType() != "Spirit"){
        int x = c->getStrength();
        c->setStrength(c->getCraft());
        c->setCraft(x);
    }
    
}
