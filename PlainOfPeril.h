/* 
 * File:   PlainOfPeril.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:58 PM
 */

#ifndef PLAINOFPERIL_H
#define	PLAINOFPERIL_H
#include "MapSquare.h"

class PlainOfPeril : public MapSquare {
public:
    PlainOfPeril(int,int,int,string,string,string);
    void execute(AdventureCardDeck*, SpellDeck*, PurchaseDeck*, Character*, QTextEdit*);
private:

};

#endif	/* PLAINOFPERIL_H */

