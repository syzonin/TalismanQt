/* 
 * File:   Chasm.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Chasm.h"

Chasm::Chasm(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void Chasm::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){
    
    //Chasm;You have a chance to lose 1 Life Point and each of your Followers might die.;0
    
    if (c->getLifePoints() > 1){
        int num = rand() % 2 + 1;
        if (num == 1)
            txtLog->append("You manage to cross the Chasm unharmed");
        else{
            txtLog->append("You lose 1 Life Point in the Chasm");
            c->setLifePoints(c->getLifePoints() - 1);
        }
    }
    else
        txtLog->append("You manage to cross the Chasm unharmed");
    
    Follower* f;
    for (int x = 0; x < 2; x++){
        f = c->getFollower(x);
        if (f != NULL){
            int num = rand() % 2 + 1;
            if (num == 1)
                txtLog->append(QString::fromStdString("Your " + f->getTitle() + " Follower is unharmed"));
            else{
                txtLog->append(QString::fromStdString("Your " + f->getTitle() + " Follower has been killed"));
                c->removeFollower(x);
            }
        }
    }
}