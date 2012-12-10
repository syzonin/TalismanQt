/* 
 * File:   City.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "City.h"

City::City(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void City::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character*, QTextEdit*){
    
    cout << "something goes here" << endl;
}