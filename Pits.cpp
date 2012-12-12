/* 
 * File:   Pits.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Pits.h"
///
///Constructor.
///
Pits::Pits(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void Pits::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){

    int num = rand() % 4 + 1;
    txtLog->append(QString::fromStdString("\nYou've encountered " + static_cast<ostringstream*>( &(ostringstream() << num) )->str() + " pit fiends.\nFight them off to continue onward."));
    addCard(*(new Enemy("Pit Fiends", "Enemy", "These fiends live in the Pits. Need I say more?", 1, "Fiends", (num * 3), "Strength")));            
}