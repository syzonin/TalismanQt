/* 
 * File:   VampiresTower.h
 * Author: Si
 *
 * Created on December 1, 2012, 10:01 PM
 */

#ifndef VAMPIRESTOWER_H
#define	VAMPIRESTOWER_H
#include "MapSquare.h"

class VampiresTower : public MapSquare {
public:
    VampiresTower(int,int,int,string,string,string);
    void execute(AdventureCardDeck*, SpellDeck*, PurchaseDeck*, Character*, QTextEdit*);
private:

};

#endif	/* VAMPIRESTOWER_H */

