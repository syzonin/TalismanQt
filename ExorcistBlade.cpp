/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "ExorcistBlade.h"

ExorcistBlade::ExorcistBlade() : Weapon(0, 0, "Exorcist Blade", "No Text", 0) {
}

ExorcistBlade::ExorcistBlade(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}

void ExorcistBlade::win(Character* c, Enemy* e){
    
}

void ExorcistBlade::lose(Character* c, Enemy* e){
    
}

void ExorcistBlade::preBattle(Character* c, Enemy* e){

    if (e->getSubType() == "Spirit"){
        int x = c->getStrength();
        c->setStrength(c->getCraft());
        c->setCraft(x);
    }    
}

void ExorcistBlade::postBattle(Character* c, Enemy* e){

    if (e->getSubType() == "Spirit"){
        int x = c->getStrength();
        c->setStrength(c->getCraft());
        c->setCraft(x);
    }    
}
