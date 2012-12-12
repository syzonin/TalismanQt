/* 
 * File:   Tavern.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Tavern.h" 
///
///Constructor.
///
Tavern::Tavern(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void Tavern::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){
    
    int choice = rand() % 6 + 1;
    Spell* temp;
    switch(choice){
        case 1: txtLog->append("\nYou get blind drunk and collapse in a corner. Waking up a few hours\nlater you find yourself unharmed and your belongings intact.\nYou were lucky this time.");
            break;
        case 2: txtLog->append("\nYou get tipsy and get into a fight with a farmer. Though you swing wildly and without coordination,\nyou manage to knock him out cold. Gain 1 Strength from the battle.");
            c->setStrength(c->getStrength() + 1);    
            break;
        case 3: txtLog->append("\nYou gamble with a peddler on a game of dice but lose the wager.\nLose 1 Gold piece.");
            c->setGold(c->getGold() - 1);
            if (c->getGold() < 0)
                c->setGold(0);
            break;
        case 4: txtLog->append("\nYou gamble with a peddler on a game of dice and win the wager.\nGain 2 Gold pieces.");
            c->setGold(c->getGold() + 2);
            break;
        case 5: 
            temp = s->drawCard();
            if(s != NULL){
                if (c->addObject(temp))
                    txtLog->append(QString::fromStdString("\nA wizard teaches you the Spell: " + temp->getTitle() + "\nIt has been added to your Inventory."));
                else
                    txtLog->append(QString::fromStdString("\nA wizard offers to teach you the Spell: " + temp->getTitle() + " but you already know it."));
            }
            else
                txtLog->append("\nA wizard offers to teach you a Spell, but there are none left in the Spell Deck.");
            break;
        case 6: 
            if (c->addObject((new WeaponFactory())->getClass("Axe")))
                txtLog->append("\nYou casually relax and find an Axe hidden under a shaded table.\nIt has been added to your Inventory.");
            else
                txtLog->append("\nYou casually relax and find an Axe hidden under a shaded table.\nYou already have a perfectly good Axe so you leave it there.");
            break;            
    }
}