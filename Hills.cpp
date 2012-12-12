/* 
 * File:   Castle.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Hills.h"
///
///Constructor.
///
Hills::Hills(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void Hills::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){
    
    if (c->getCross()){
        //battle Sentinel
        addCard(*(new Enemy("Sentinel", "Enemy", "The Sentinel guards to bridge to the Middle Region", 1, "Guardian", 7, "Strength")));
//        c->setCross(false);
    }
    else{
        AdventureCard* a = d->drawCard();
        addCard(*a);        
    }

}
