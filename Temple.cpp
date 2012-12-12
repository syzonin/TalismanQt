/* 
 * File:   Temple.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Temple.h"
///
///Constructor.
///
Temple::Temple(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void Temple::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){

//Pray at the Temple and encounter on of the following options:
//\n1. Lose 1 Life
//\n2. Gain 1 Life
//\n3. Gain the Talisman
//\n4. Gain 1 Strength
//\n5. Gain 1 Craft
//\n6. Lose 1 Strength and 1 Craft
//\n7. Gain one random Equipment or Spell
    
    int decision = rand() % 700 + 1;
    if (decision <= 100 && c->getLifePoints() > 1){
        txtLog->append("\nYou pray for life, but receive death. Lose 1 Life Point");
        c->setLifePoints(c->getLifePoints() - 1);
    }
    else if (decision <= 200){
        txtLog->append("\nYou pray for life, and get exactly that. Gain 1 Life Point");
        c->setLifePoints(c->getLifePoints() + 1);
    }
    else if (decision <= 300 && c->getTalisman() != 1){
        txtLog->append("\nYou pray for life, but instead get ... the Talisman!\nFind your way to the Crown of Command to complete the game!");
        c->setTalisman(1);        
    }
    else if (decision <= 400){
        txtLog->append("\nYou pray for life, but instead get power. Gain 1 Strength");
        c->setStrength(c->getStrength() + 1);
    }
    else if (decision <= 500){
        txtLog->append("\nYou pray for life, but instead get wisdom. Gain 1 Craft");
        c->setCraft(c->getCraft() + 1);
    }
    else if (decision <= 600){
        txtLog->append("You pray for life, but instead get weakness and despair. Lose 1 Strength and 1 Craft");
        if (c->getStrength() > 0)
            c->setStrength(c->getStrength() - 1);
        if (c->getCraft() > 0)
            c->setCraft(c->getCraft() - 1);
    }
    else{
        txtLog->append("You pray for life, but instead get stuff. Gain one random equipment item");
        AdventureCard* item;
        switch(rand()%3){
            case 0: case 1:
                item = p->drawCard();
                break;
            case 2:
                item = s->drawCard();
                break;
        }
        txtLog->append(QString::fromStdString("You gain one " + item->getTitle()));
        c->addObject(item);
    }
}