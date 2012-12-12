/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "Helmet.h"

///
///Default Constructor
///
Helmet::Helmet() : Armor("Helmet", "No Text", 0) {
}
///
///Parameterized Constructor
///
Helmet::Helmet(string title, string text, int encounterNumber) : Armor(title, text, encounterNumber){
}
///
///Method called to perform Armor-specific actions when the player wins
///
string Helmet::win(Character* c, Enemy* e){
    return "";
}
///
///Method called to perform Armor-specific actions when the player loses
///
string Helmet::lose(Character* c, Enemy* e){
    
    int x = rand() % 100 + 1;
    if (x <= 15){
        c->setLifePoints(c->getLifePoints() + 1);
        return "Helmet successfully prevented the loss of a Life Point.";
    }
    return "Helmet failed to prevent the loss of a Life Point.";
    
}
///
///Method called to perform Armor-specific actions before a battle
///
string Helmet :: preBattle(Character* c, Enemy* e){

    return "Helmet equipped.\nIf offers a 15% chance to prevent the loss of life in the event of defeat.";
}
///
///Method called to perform Armor-specific actions after a battle
///
string Helmet :: postBattle(Character* c, Enemy* e){

    return "Helmet has been placed back into Inventory.";
}