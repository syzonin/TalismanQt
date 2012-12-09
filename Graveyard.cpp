/* 
 * File:   Graveyard.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Graveyard.h"

Graveyard::Graveyard(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void Graveyard::execute(AdventureCardDeck* d){

    cout << "hi" <<endl;
}