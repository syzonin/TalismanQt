/* 
 * File:   Temple.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:42 PM
 */

#ifndef TEMPLE_H
#define	TEMPLE_H
#include "MapSquare.h"

class Temple : public MapSquare {
public:
    Temple(int,int,int,string,string,string);
    void execute(AdventureCardDeck*, SpellDeck*, PurchaseDeck*, Character*, QTextEdit*);
private:

};

#endif	/* TEMPLE_H */

