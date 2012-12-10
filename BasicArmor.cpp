/* 
 * File:   Axe.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 3:31 PM
 */

#include "BasicArmor.h"

BasicArmor::BasicArmor() : Armor("Basic Armor", "No Text", 0) {
}

BasicArmor::BasicArmor(string title, string text, int encounterNumber) : Armor(title, text, encounterNumber){
}

string BasicArmor::win(Character* c, Enemy* e){
    return "";
}

string BasicArmor::lose(Character* c, Enemy* e){
    
    int x = rand() % 100 + 1;
    if (x <= 50){
        c->setLifePoints(c->getLifePoints() + 1);
        return "Basic Armor successfully prevented the loss of a Life Point.";
    }
    return "Basic Armor failed to prevent the loss of a Life Point.";
    
}

string BasicArmor :: preBattle(Character* c, Enemy* e){

    return "Basic Armor equipped.\nIf offers a 50% chance to prevent the loss of life in the event of defeat.";
}

string BasicArmor :: postBattle(Character* c, Enemy* e){

    return "Basic Armor has been placed back into Inventory.";
}
