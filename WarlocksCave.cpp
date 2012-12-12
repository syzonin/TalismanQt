/* 
 * File:   WarlocksCave.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "WarlocksCave.h"

WarlocksCave::WarlocksCave(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void WarlocksCave::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){

    if (c->getTalisman() == 1){
        txtLog->append("\nYou already have a talisman. There is no need for you to confront the Warlock again");
        return;
    }
    
    if (c->getStrength() >= 10){
        txtLog->append("\nThe Warlock recognizes your power and accepts you as a candidate to receive the Talisman.\nAfter handing you the Talisman, he attacks you suddenly to test your power.\n");
        addCard(*(new Enemy("Warlock", "Enemy", "One of the keepers of the Talisman. Defeat him and continue your journey to the Crown of Command.", 1, "Fighter", 10, "Strength")));
    }
    else if (c->getCraft() >= 10){
        txtLog->append("\nThe Warlock recognizes your wisdom and accepts you as a candidate to receive the Talisman.\nAfter handing you the Talisman, he attacks you suddenly to test your power.\n");
        addCard(*(new Enemy("Warlock", "Enemy", "One of the keepers of the Talisman. Defeat him and continue your journey to the Crown of Command.", 1, "Psychic", 10, "Craft")));   
    }
    else{
        txtLog->append("\nThe Warlock sees you as both weak and empty minded.\nCome back when you have honed your Strength and Craft further.");
    }
}