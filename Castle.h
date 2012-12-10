/* 
 * File:   Castle.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:47 PM
 */

#ifndef CASTLE_H
#define	CASTLE_H
#include "MapSquare.h"

class Castle : public MapSquare {
public:
    Castle(int,int,int,string,string,string);
    void execute(AdventureCardDeck*, SpellDeck*, PurchaseDeck*, Character*, QTextEdit*);
private:

};

#endif	/* CASTLE_H */

