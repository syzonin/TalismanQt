/* 
 * File:   WerewolfDen.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "WerewolfDen.h"

WerewolfDen::WerewolfDen(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void WerewolfDen::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){

    int num = rand() % 6 + 6;
    addCard(*(new Enemy("Werewolf", "Enemy", "An unusually powerful Werefwolf.", 1, "Wolf", num, "Strength")));
}