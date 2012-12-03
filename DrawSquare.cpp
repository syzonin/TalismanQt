/* 
 * File:   DrawSquare.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "DrawSquare.h"

DrawSquare::DrawSquare(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void DrawSquare::execute(){

    cout << "hi" <<endl;
}