/* 
 * File:   Castle.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Castle.h"

Castle::Castle(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void Castle::execute(AdventureCardDeck* d){
    
    cout << "something goes here" << endl;
}