/* 
 * File:   DiceWithDeath.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "DiceWithDeath.h"

DiceWithDeath::DiceWithDeath(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void DiceWithDeath::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){

    if (c->getCraft() > 5){
        txtLog->append("Death recognizes you as a formidable opponent and challenges you to Psychic Combat");
        addCard(*(new Enemy("Death", "Enemy", "The bringer of death and guardian of the Underworld", 1, "Inevitability", 9, "Craft")));
    }
    else{
        int loss = rand() % 3 + 2;
        txtLog->append(QString::fromStdString("Your Craft is not strong enough, causing Death to shun you for your incompetence.\nYou quickly feel weak as your life drains away.\nLose " + static_cast<ostringstream*>( &(ostringstream() << loss) )->str() + " Life Points"));
        for(int x = 0; x < loss; x++)
            c->setLifePoints(c->getLifePoints() - 1);
    }    
}