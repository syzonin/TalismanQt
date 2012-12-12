/* 
 * File:   ValleyOfFire.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "ValleyOfFire.h"

ValleyOfFire::ValleyOfFire(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void ValleyOfFire::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){

    if(c->getTalisman() == -1){
        txtLog->append("\nYou have already gotten the Talisman and defeated the Guardian. You may proceed to the Crown of Command and face your destiny.");
    }
    else if (c->getTalisman() == 1){
        txtLog->append("\nYour perilous journey through the Valley of Fire brings you endless hardship costing you all but your last life.\nAs you approach the endless steps, you see the Talisman in your grasp.\nAs you take it for your own, you are confronted with the last Guardian of the Crown of Command.\nDefeat it to continue onward.");
        c->setLifePoints(1);
        c->setTalisman(-1);
        addCard(*(new Enemy("Guardian of the Crown", "Enemy", "The last Guardian of the Crown of Command.", 1, "Godlike", 14, "Strength")));
    }
    else{
        txtLog->append("\nYou have not yet found the Talisman. You must continue your search across the world before you can challenge the Guardian");
    }
}