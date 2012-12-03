/* 
 * File:   WerewolfDen.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "WerewolfDen.h"

WerewolfDen::WerewolfDen(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void WerewolfDen::execute(){

    cout << "hi" <<endl;
}