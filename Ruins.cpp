/* 
 * File:   Runes.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Ruins.h"

Ruins::Ruins(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void Ruins::execute(AdventureCardDeck* d){

    cout << "hi" <<endl;
}