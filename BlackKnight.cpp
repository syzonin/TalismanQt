/* 
 * File:   BlackKnight.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "BlackKnight.h"
///
///Constructor.
///
BlackKnight::BlackKnight(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void BlackKnight::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){
    
    if(c->getGold() > 0){
        txtLog->append("\nYou encounter the Black Knight who demands 1 Gold for safe passage. You quietly hand over the gold and avoid his wrath.");
        c->setGold(c->getGold() - 1);
    }
    else if (c->getLifePoints() > 1){
        txtLog->append("\nYou encounter the Black Knight who demands 1 Gold for safe passage. You frantically check your pockets and come up empty handed.\nThe Knight quickly severs your head as recompense. Lose 1 Life.");
        c->setLifePoints(c->getLifePoints() - 1);
    }
    else
        txtLog->append("\nYou encounter the Black Knight who demands 1 Gold for safe passage. Though you have no gold to offer, you manage to escape.");
   
}