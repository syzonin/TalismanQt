/* 
 * File:   Castle.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Castle.h"
///
///Constructor.
///
Castle::Castle(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void Castle::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){
    
//    You will encounter 1 of the following options:
//    \n1. The Royal Doctor heals you up to your default Life Points.
//    \n2: A Guard offers you combat training. Gain 1 Strength.
//    \n3: The Castle Wizard offers you spell training. Gain 1 Craft.
//    \n4: The Princess falls in love with you and becomes your Follower. (rare);0
    
    int selection = rand() % 100 + 1;
    if (selection <= 40){
        if (c->getLifePoints() >= c->getLife())
            txtLog->append("\nThe Castle Doctor offers to heal you however you are already at beacon of health.");
        else{
            txtLog->append("\nThe Castle Doctor tends to your wounds. Gain up to your default Life Points value");
            c->setLifePoints(c->getLife());
        }
    }
    else if (selection <= 65){
        txtLog->append("\nA Guard offers you combat training and teaches you some new tricks. Gain 1 Strength");
        c->setStrength(c->getStrength() + 1);
    }
    else if (selection <= 90){
        txtLog->append("\nThe Castle Wizard offers you spell training and teaches you a new meditation technique. Gain one Craft");
        c->setCraft(c->getCraft() + 1);
    }
    else{
        Follower* princess = new Follower("Princess", "Follower", "The Castle Princess", 3);
        if (c->hasFollower("Princess"))
            txtLog->append("\nYou and your Princess take a leisurely walk in the Castle flower fields where you first met.");
        else if(c->addFollower(princess))
            txtLog->append("\nYou come across the Princess in the Castle flower fields and she cannot help but succumb to your charm.\nThe Princess is now your active Follower.");
        else
            txtLog->append("\nYou come across the Princess in the Castle flower fields and she cannot help but succumb to your charm.\nShe asks if she may join you on your journey, however you already have 2 Followers and politely decline.");                            
    }
}