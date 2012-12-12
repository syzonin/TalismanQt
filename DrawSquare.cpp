/* 
 * File:   DrawSquare.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "DrawSquare.h"
///
///Constructor.
///
DrawSquare::DrawSquare(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Adds card to square's adventure card vector
///
void DrawSquare::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character*, QTextEdit*){

    AdventureCard* a = d->drawCard();
    addCard(*a);
}