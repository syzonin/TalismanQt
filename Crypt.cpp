/* 
 * File:   Crypt.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "Crypt.h"

Crypt::Crypt(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}

void Crypt::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){
    

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
            txtLog->append(QString::fromStdString("\nWhile you venture through the Crypt, you hear a trap door trigger below you. Your " + f->getTitle() + " follower fearlessly comes to your rescue, pushing you aside and sacrificing their own life instead as they \nfall to their death in the pit below."));
            c->removeFollower(index);
        }
        else{
            txtLog->append("\nWhile you venture through the Crypt, you hear a trap door trigger below you. With no one there to help, you fall to your death and lose 1 Life");
            c->setLifePoints(c->getLifePoints() - 1);
        }
    }
    else if (decision <= 30){
        txtLog->append("\nWhile you venture through the Crypt, you hear a trap door trigger below you.\nYou quickly drop your belongings and avoid the disaster narrowly escaping death, but your belongings fall in your place.\nLose all equipment");
        c->clearArmors(); c->clearWeapons();
    }
    else if (decision <= 45){
        txtLog->append("\nWhile you venture through the Crypt, fatigue and stress begin to take their toll in the form of insanity.\nYou temporarily lose yourself, forgetting all that you've learned in the ways of Magic and Knowledge.\nLose all spells");
        c->clearSpells();
    }
    else if (decision <= 60){
        txtLog->append("\nWhile you venture through the Crypt, you feel the gods of Fate turn a blind eye to your misfortune.\nLose all Fate Tokens");
        c->setFateTokens(0);
    }
    else if (decision <= 80){
        txtLog->append("\nThe never ending journey through the haunted Crypt causes you to suffer from severe fatigue. Lose 3 Strength");
        for (int x = 0; x < 3; x++) c->setStrength(c->getStrength() - 1);
    }
    else{
        txtLog->append("\nThe never ending journey through the haunted Crypt causes you to lose all sense of reality and self awareness. Lose 3 Craft");
        for (int x = 0; x < 3; x++) c->setCraft(c->getCraft() - 1);
    }
}