/* 
 * File:   Chapel.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Chapel.h"
///
///Constructor.
///
Chapel::Chapel(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void Chapel::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){
    
    switch(c->getAlignment()){
        case -1:
            if(c->getLifePoints() > 1){
                txtLog->append("\nThis holy place rejects your Evil heart, weakening your body and draining your very soul. Lose 1 Life");
                c->setLifePoints(c->getLifePoints() - 1);
            }
            else{
                txtLog->append("\nThis holy place rejects you and your Evil heart. You cautiously avoid the Chapel and continue your journey.");
            }
            break;
        case 1:
            txtLog->append("\nThe Chapel welcome your Pure heart, healing your body and soothing the mind. Gain up to your default Life Points");
            if(c->getLifePoints() < c->getLife())
                c->setLifePoints(c->getLife());
            break;
        default:
            txtLog->append("\nThe Chapel sees that you come in peace and offers to heal your wounds at the cost of 1 Gold");
            if(c->getLifePoints() < c->getLife() && c->getGold() > 0){
                txtLog->append("You humbly accept the offer. Gain up to your default Life Points");
                c->setLifePoints(c->getLife());
                c->setGold(c->getGold() - 1);
            }
            else if (c->getGold() == 0){
                txtLog->append("You humbly decline, as cannot afford the offer.");
            }
            else{
                txtLog->append("You humbly decline, as you are already at full health");
            }                
    }
}