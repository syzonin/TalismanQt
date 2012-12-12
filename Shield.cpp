/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "Shield.h"

///
///Default Constructor
///
Shield::Shield() : Armor("Shield", "No Text", 0) {
}
///
///Parameterized Constructor
///
Shield::Shield(string title, string text, int encounterNumber) : Armor(title, text, encounterNumber){
}
///
///Method called to perform Armor-specific actions when the player wins
///
string Shield::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Armor-specific actions when the player loses
///
string Shield::lose(Character* c, Enemy* e){
    
    int x = rand() % 100 + 1;
    if (x <= 25){
        c->setLifePoints(c->getLifePoints() + 1);
        return "Shield successfully prevented the loss of a Life Point.";
    }
    return "Shield failed to prevent the loss of a Life Point.";
    
}
///
///Method called to perform Armor-specific actions before a battle
///
string Shield :: preBattle(Character* c, Enemy* e){

    return "Shield equipped.\nIf offers a 25% chance to prevent the loss of life in the event of defeat.";
}
///
///Method called to perform Armor-specific actions after a battle
///
string Shield :: postBattle(Character* c, Enemy* e){

    return "Shield has been placed back into Inventory.";
}