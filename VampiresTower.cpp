/* 
 * File:   VampiresTower.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "VampiresTower.h"

VampiresTower::VampiresTower(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void VampiresTower::execute(){

    cout << "hi" <<endl;
}