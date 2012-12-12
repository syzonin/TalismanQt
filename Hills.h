/* 
 * File:   Hills.h
 * Author: Jay
 *
 * Created on December 11, 2012, 10:15 PM
 */

#ifndef HILLS_H
#define	HILLS_H

#include "MapSquare.h"
class Hills : public MapSquare {
public:
    Hills(int,int,int,string,string,string);
    void execute(AdventureCardDeck*, SpellDeck*, PurchaseDeck*, Character*, QTextEdit*);
private:

};

#endif	/* HILLS_H */

