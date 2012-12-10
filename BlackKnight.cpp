/* 
 * File:   BlackKnight.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "BlackKnight.h"

BlackKnight::BlackKnight(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void BlackKnight::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){
    
    cout << "something goes here" << endl;
}