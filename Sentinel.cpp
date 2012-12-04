/* 
 * File:   Sentinel.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Sentinel.h"

Sentinel::Sentinel(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void Sentinel::execute(AdventureCardDeck* d){

    cout << "hi" <<endl;
}