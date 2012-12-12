/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "PsionicWand.h"

///
///Default Constructor
///
PsionicWand::PsionicWand() : Weapon(0, 0, "Psionic Wand", "No Text", 0) {
}
///
///Parameterized Constructor
///
PsionicWand::PsionicWand(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}
///
///Method called to perform Weapon-specific actions when the player wins
///
string PsionicWand::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions when the player loses
///
string PsionicWand::lose(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions before a battle
///
string PsionicWand::preBattle(Character* c, Enemy* e){
    
    if (e->getSubType() != "Spirit"){
        int x = c->getStrength();
        c->setStrength(c->getCraft());
        c->setCraft(x);
        return "Psionic Wand equipped.\nEngaging Psychic Combat instead of Battle.";
    }
    return "";
}
///
///Method called to perform Weapon-specific actions after a battle
///
string PsionicWand::postBattle(Character* c, Enemy* e){

    if (e->getSubType() != "Spirit"){
        int x = c->getStrength();
        c->setStrength(c->getCraft());
        c->setCraft(x);
    }
    return "Psionic Wand placed back into Inventory";
    
}
