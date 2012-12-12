/* 
 * File:   PlainOfPeril.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "PlainOfPeril.h"
///
///Constructor.
///
PlainOfPeril::PlainOfPeril(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void PlainOfPeril::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character*, QTextEdit*){

    cout << "hi" <<endl;
}