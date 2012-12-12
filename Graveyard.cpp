/* 
 * File:   Graveyard.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Graveyard.h"
///
///Constructor.
///
Graveyard::Graveyard(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void Graveyard::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){

    int num = rand() % 100 + 1;
    AdventureCard* x;
    Follower* skeleton = new Follower("Skeleton", "Follower", "An undead warrior", 3);    
    switch (c->getAlignment()){
        case -1:
            if (num <= 50 && !c->hasFollower("Skeleton")){
                if (c->addFollower(skeleton))
                    txtLog->append("Your evil heart feels right at home in this place of eternal sleep.\nYou see a skeletal fighter raise from the ground before you.\nIt offers to serve you in life and death and so becomes your follower");
                else
                    txtLog->append("Your evil heart feels right at home in this place of eternal sleep.\nYou see a skeletal fighter raise from the ground before you.\nIt offers to serve you in life and death, however you have no need of further servants.");                
            }
            else{
                txtLog->append("Your evil heart feels right at home in this place of eternal sleep.\nYou take this time to pray and empower your mind. Gain 2 Craft");
                c->setCraft(c->getCraft() + 2);
            }
            break;
        case 1:
            txtLog->append("Your pure heart is not welcomed by the spirits of the dead.\nYou are attacked by a random enemy that is empowered by the angered spirits (Strength or Craft +2)");
            x = d->drawCard();
            static_cast<Enemy*>(x)->setAttackPoints(static_cast<Enemy*>(x)->getAttackPoints() + 2);
            addCard(*x);
            break;
        case 0:
            if (num <= 50 && !c->hasFollower("Skeleton")){
                if (c->addFollower(skeleton)){
                    txtLog->append("You see a skeletal fighter raise from the ground before you.\nIt offers to serve you in life and death.\nYou accept it's aid at the cost of your soul. You are now Evil aligned");;
                    c->setAlignment(-1);
                }
                else
                    txtLog->append("You see a skeletal fighter raise from the ground before you.\nIt offers to serve you in life and death, however you have no need of further servants.");               
            }
            else{
                txtLog->append("You see a skeletal fighter raise from the ground before you.\nIt offers to serve you in life and death.\nYou reject it's aid and turn it away. You are now Good aligned. Gain 1 Life Point");
                c->setAlignment(1);
                c->setLifePoints(c->getLifePoints() + 1);
            }
            break;
    }    
}