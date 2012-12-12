/* 
 * File:   PortalOfPower.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "PortalOfPower.h"
///
///Constructor.
///
PortalOfPower::PortalOfPower(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void PortalOfPower::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){

    txtLog->append("\nThis is the entrance to the Inner Region. Know that you will need the Talisman to challenge the Guardian of the Crown.\nIf you do not possess the Talisman, turn back for your own sake.");
    txtLog->append("Landing on this space: Draw 1 Card.\nEnemies encountered on this space are empowered (Strength/Craft + 2)");
    AdventureCard* a = d->drawCard();
    static_cast<Enemy*>(a)->setAttackPoints(static_cast<Enemy*>(a)->getAttackPoints() + 2);
    addCard(*a);
}