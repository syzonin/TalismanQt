/* 
 * File:   Runes.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:46 PM
 */

#ifndef RUINS_H
#define	RUINS_H
#include "MapSquare.h"

class Ruins : public MapSquare {
public:
    Ruins(int,int,int,string,string,string);
    void execute(AdventureCardDeck*, SpellDeck*, PurchaseDeck*, Character*, QTextEdit*);
private:

};

#endif	/* RUINS_H */

