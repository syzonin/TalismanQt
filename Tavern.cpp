/* 
 * File:   Tavern.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Tavern.h"

Tavern::Tavern(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void Tavern::execute(){

    cout << "hi" <<endl;
}