/* 
 * File:   Temple.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Temple.h"

Temple::Temple(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void Temple::execute(){

    cout << "hi" <<endl;
}