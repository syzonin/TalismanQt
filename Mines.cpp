/* 
 * File:   Mines.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Mines.h"
///
///Constructor.
///
Mines::Mines(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void Mines::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){

    int decision = rand() % 100 + 1;
    if (decision <= 15){
        Follower* f;
        int index = 0;
        for (int x = 0; x < 2; x++){
            f = c->getFollower(x);
            index = x;
            if(f != NULL)
                break;
        }
        if (f != NULL){
            txtLog->append(QString::fromStdString("\nIn your tireless journey through the Mines, a tunnel ceiling begins to cave in onto you.\nYour " + f->getTitle() + " follower fearlessly comes to your rescue, pushing you aside and sacrificing their own life instead."));
            c->removeFollower(index);
        }
        else{
            txtLog->append("\nIn your tireless journey through the mines, a tunnel ceiling caves in onto you. With no one there to help, you lose 1 Life");
            c->setLifePoints(c->getLifePoints() - 1);
        }
    }
    else if (decision <= 30){
        txtLog->append("\nIn your tireless journey through the mines, a tunnel ceiling caves in onto you.\nYou quickly drop your belongings and avoid the disaster narrowly escaping death.\nLose all equipment");
        c->clearArmors(); c->clearWeapons();
    }
    else if (decision <= 45){
        txtLog->append("\nIn your tireless journey through the mines, fatigue and stress begin to take their toll in the form of insanity.\nYou temporarily lose yourself, forgetting all that you've learned in the ways of Magic.\nLose all spells");
        c->clearSpells();
    }
    else if (decision <= 60){
        txtLog->append("\nIn your tireless journey through the mines, you feel the gods of Fate turn a blind eye to your misfortune.\nLose all Fate Tokens");
        c->setFateTokens(0);
    }
    else if (decision <= 80){
        txtLog->append("\nThe never ending journey through the twisted Mines causes you to suffer from severe fatigue. Lose 3 Strength");
        for (int x = 0; x < 3; x ++) c->setStrength(c->getStrength() - 1);
    }
    else{
        txtLog->append("\nThe never ending journey through the twisted Mines causes you to lose all sense of reality and self awareness. Lose 3 Craft");
        for (int x = 0; x < 3; x ++) c->setCraft(c->getCraft() - 1);
    }        
}