/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "MirrorShield.h"

///
///Default Constructor
///
MirrorShield::MirrorShield() : Armor("Mirror Shield Armor", "No Text", 0) {
}
///
///Parameterized Constructor
///
MirrorShield::MirrorShield(string title, string text, int encounterNumber) : Armor(title, text, encounterNumber){
}
///
///Method called to perform Armor-specific actions when the player wins
///
string MirrorShield::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Armor-specific actions when the player loses
///
string MirrorShield::lose(Character* c, Enemy* e){
    
    int x = rand() % 100 + 1;
    if (x <= 50){
        c->setLifePoints(c->getLifePoints() + 1);
        return "Mirror Shield successfully prevented the loss of a Life Point.";
    }
    return "Mirror Shield failed to prevent the loss of a Life Point.";
    
}
///
///Method called to perform Armor-specific actions before a battle
///
string MirrorShield :: preBattle(Character* c, Enemy* e){

    return "Mirror Shield equipped.\nIf offers a 50% chance to prevent the loss of life in the event of defeat.";
}
///
///Method called to perform Armor-specific actions after a battle
///
string MirrorShield :: postBattle(Character* c, Enemy* e){

    return "Mirror Shield has been placed back into Inventory.";
}
