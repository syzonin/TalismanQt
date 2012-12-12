/* 
 * File:   CursedGlade.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "CursedGlade.h"

CursedGlade::CursedGlade(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void CursedGlade::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){

    AdventureCard* a = d->drawCard();
    static_cast<Enemy*>(a)->setAttackPoints(static_cast<Enemy*>(a)->getAttackPoints() + 2);
    addCard(*a);
}