/* 
 * File:   WarlocksCave.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "WarlocksCave.h"

WarlocksCave::WarlocksCave(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void WarlocksCave::execute(){

    cout << "hi" <<endl;
}