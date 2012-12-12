/* 
 * File:   Forest.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Forest.h"
///
///Constructor.
///
Forest::Forest(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void Forest::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){

    int num = rand() % 100 + 1;
    Follower* sprite = new Follower("Tree Sprite", "Follower", "A small Tree Sprite from the Forest", 3);
    AdventureCard* item;
    if (num <= 33){
        txtLog->append("\nYou encounter an injured Tree Sprite amongst the trees and shrubbery. You nurse it back to health, and in return it offers to aid you on your quest");
        if (c->addFollower(sprite))
            txtLog->append("You accept its offer. The Tree Sprite is now your Follower");
        else{
            txtLog->append("You appreciate its offer, however you have no room for further Followers. The Sprite hands you 3 Gold Pieces instead");
            c->setGold(c->getGold() + 3);
        }
    }
    else if (num <= 66){
        txtLog->append("\nYou encounter a Wolf afflicted by rabies. It viciously attacks you (Strength + 3)");
        AdventureCard* wolf = new Enemy("Wolf", "Enemy", "A vicious Wolf inflicted with Rabies. Stronger than most other Wolves", 3, "Infected", 5, "Strength");
        addCard(*wolf);
    }
    else{
        txtLog->append("\nDuring your trek through the Forest, you come across a piece of equipment hidden in a bush. It seems to be of decent quality so you claim it as your own");
        item = p->drawCard();
        txtLog->append(QString::fromStdString("Gain one " + item->getTitle() + "in your inventory"));
        c->addObject(item);
    }
}