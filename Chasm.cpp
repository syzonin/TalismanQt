/* 
 * File:   Chasm.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Chasm.h"

Chasm::Chasm(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void Chasm::execute(){
    
    cout << "something goes here" << endl;
}