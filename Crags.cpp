/* 
 * File:   Crags.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Crags.h"
///
///Constructor.
///
Crags::Crags(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void Crags::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){
    
    int decision = rand() % 100 + 1;
    if (decision <= 33){
        addCard(*(new Enemy("Powerful\nApparition", "Enemy", "An unusually strong Apparition.", 1, "Spirit", 7, "Craft")));
    }
    else if (decision <= 66){
        addCard(*(new Enemy("Undead Dragon", "Enemy", "An undead Dragon infused with the power of Death istelf", 1, "Undead", 8, "Strength")));
    }
    else
        txtLog->append("\nYou encounter a wandering Barbarian. He knows the lands and offers to show you safe passage");
}
