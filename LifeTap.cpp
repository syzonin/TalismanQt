/* 
 * Author: Jay
 * 
 * Created on December 5, 2012, 3:31 PM
 */

#include "LifeTap.h"

///
///Default Constructor
///
LifeTap::LifeTap() : Spell("Life Tap", "No Text", 0) {
}
///
///Parameterized Constructor
///
LifeTap::LifeTap(string title, string text, int encounterNumber) : Spell(title, text, encounterNumber){
}
///
///Method called to perform Spell-specific actions when the player wins
///
string LifeTap::win(Character* c, Enemy* e){

    c->setLifePoints(c->getLifePoints() + 1);
    return "Life Tap leeches 1 Life and grants it to the Player.";
}
///
///Method called to perform Spell-specific actions when the player loses
///
string LifeTap::lose(Character* c, Enemy* e){
    return "";    
}
///
///Method called to perform Spell-specific actions before a battle
///
string LifeTap::preBattle(Character* c, Enemy* e){
    return "Life Tap spell cast.\nIf the " + e->getTitle() + " is defeated, 1 Life Point will be awarded.";
}
///
///Method called to perform Spell-specific actions after a battle
///
string LifeTap::postBattle(Character* c, Enemy* e){
    return "Life Tap spell has been used up.";
}
