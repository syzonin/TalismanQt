/* 
 * File:   VampiresTower.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "VampiresTower.h"
///
///Constructor.
///
VampiresTower::VampiresTower(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void VampiresTower::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){

    int loss = rand() % 4 + 1;
    Follower* f;
    txtLog->append(QString::fromStdString("You suffer blood loss from the Vampire attacks. You lose " + static_cast<ostringstream*>( &(ostringstream() << loss) )->str() + " Life Point(s)"));
    for (int x = 0; x < 2; x++){
        f = c->getFollower(x);
        if (f != NULL){
            txtLog->append(QString::fromStdString("Your " + f->getTitle() + " Follower has sacrificed their life to save yours."));
            loss --;
        }            
    }
    txtLog->append(QString::fromStdString("You lose " + static_cast<ostringstream*>( &(ostringstream() << loss) )->str() + " Life Point(s)"));
    for(int x = 0; x < loss; x++)
        c->setLifePoints(c->getLifePoints() - 1);
}