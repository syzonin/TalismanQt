/* 
 * File:   Village.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Village.h"

Village::Village(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void Village::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){

//You will encounter one of the following options:
//\n1. Purchase a random Weapon or Armor for 1 Gold
//\n2. Learn a random Spell for 1 Gold
//\n3. Become Evil
//\n4. Become Good
//\n5. Gain 1 Strength
//\n6. Gain 1 Craft;0
    
    int decision = rand() % 100 + 1;
    decision = 10;
    if (decision <= 15){
        txtLog->append("\nYou take this time to visit the local Conjurer and purchase training the the magic arts");
        AdventureCard* item = s->drawCard();
        txtLog->append(QString::fromStdString("He offers to teach you a " + item->getTitle() + " Spell in exchange for 1 Gold"));
        if (c->getGold() > 0){
            txtLog->append("You accept the offer graciously. 1 Gold spent");
            c->addObject(item);
            c->setGold(c->getGold() - 1);
        }
        else
            txtLog->append("Since you cannot afford the transaction, you respectfully decline");
    }
    else if (decision <= 30){
        txtLog->append("\nYou take this time to visit the local Blacksmith and purchase new wares");
        AdventureCard* item = p->drawCard();
        txtLog->append(QString::fromStdString("He offers you a shiny new " + item->getTitle() + " for only 1 Gold"));
        if (c->getGold() > 0){
            txtLog->append("You accept the offer graciously. 1 Gold spent");
            c->addObject(item);
            c->setGold(c->getGold() - 1);            
        }
        else
            txtLog->append("Since you cannot afford the transaction, you respectfully decline");                
    }
    else if (decision <= 45){
        txtLog->append("\nThe state of the Village, the houses in shambles, the cries of hunger and deprivation, they all cause you to question your beliefs.\nYou decide that the path of Good is no longer fruitful and will pursue the ways of the Evil and wicked from now on");
        c->setAlignment(-1);                
    }
    else if (decision <= 60){
        txtLog->append("\nThe state of the Village, the houses in shambles, the cries of hunger and deprivation, they all cause you to question your beliefs.\nYou decide that you wish to follow the path of Good and help those in need.");
        c->setAlignment(1);
    }
    else if (decision <= 80){
        txtLog->append("\nYou take this time to train your body. Gain 1 Strength");
        c->setStrength(c->getStrength() + 1);
    }
    else{
        txtLog->append("\nYou take this time to train your mind. Gain 1 Craft");
        c->setCraft(c->getCraft()+1);
    }
}