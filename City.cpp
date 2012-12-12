/* 
 * File:   City.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "City.h"

City::City(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void City::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){
    
    //You will encounter one of the following options:\n1. Lose 1 Strength\n2. Lose 1 Craft\n3. Gain 1 Craft\n4.Gain 1 Strength\n5. Gain 1 Spell\n6: Gain 1 Gold
    
    int decision = rand() % 100 + 1;
    if (decision <= 20){
        txtLog->append("\nOn a scolding hot day you are unable to find a suitable shaded area to rest. Lost 1 Strength");
        c->setStrength(c->getStrength() - 1);
        if (c->getStrength() < 0)
            c->setStrength(0);
    }
    else if (decision <= 40){
        txtLog->append("\nOn an ominous, cloudy day, you begin to question your own sanity. Lose 1 Craft");
        c->setCraft(c->getCraft() - 1);
        if (c->getCraft() < 0)
            c->setCraft(0);
    }
    else if (decision <= 60){
        txtLog->append("\nOn a clear day, the blue skies reassure you of your mission. Gain 1 Craft");
        c->setCraft(c->getCraft() + 1);
    }
    else if (decision <= 80){
        txtLog->append("\nOn a bright, sunny day you enjoy a hearty meal of Stewed Elk. Gain 1 Strength");
        c->setStrength(c->getStrength() + 1);
    }
    else if (decision <= 90){
        txtLog->append("\nOn a magical day, you encounter a Wizard who teaches you a new spell.");
        Spell* sp = s->drawCard();
        c->addObject(sp);
        txtLog->append((QString::fromStdString("You learned " + sp->getTitle())));
    }
    else{
        txtLog->append("\nOn a fortunate day, you find a shiny Gold Piece laying in plain view. You claim it for your own. \nFinders, keepers afterall. Gain 1 Gold");
        c->setGold(c->getGold() + 1);
    }
}