/* 
 * File:   Desert.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:42 PM
 */

#ifndef DESERT_H
#define	DESERT_H
#include "MapSquare.h"

class Desert : public MapSquare {
public:
    Desert(int,int,int,string,string,string);
    void execute(AdventureCardDeck*, SpellDeck*, PurchaseDeck*, Character*, QTextEdit*);
private:

};

#endif	/* DESERT_H */

