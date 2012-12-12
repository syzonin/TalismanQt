/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "ExorcistBlade.h"

///
///Default Constructor
///
ExorcistBlade::ExorcistBlade() : Weapon(0, 0, "Exorcist Blade", "No Text", 0) {
}
///
///Parameterized Constructor
///
ExorcistBlade::ExorcistBlade(int s, int c, string title, string text, int encounterNumber) : Weapon(s, c, title, text, encounterNumber){
}
///
///Method called to perform Weapon-specific actions when the player wins
///
string ExorcistBlade::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions when the player loses
///
string ExorcistBlade::lose(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Weapon-specific actions before a battle
///
string ExorcistBlade::preBattle(Character* c, Enemy* e){

    if (e->getSubType() == "Spirit"){
        int x = c->getStrength();
        c->setStrength(c->getCraft());
        c->setCraft(x);
        return "Exorcist Blade equipped.\nBattle will be engaged instead of Psychic Combat.";
    }
    return "";
}
///
///Method called to perform Weapon-specific actions after a battle
///
string ExorcistBlade::postBattle(Character* c, Enemy* e){

    if (e->getSubType() == "Spirit"){
        int x = c->getStrength();
        c->setStrength(c->getCraft());
        c->setCraft(x);
    }
    return "Exorcist Blade placed back into Inventory.";
}
