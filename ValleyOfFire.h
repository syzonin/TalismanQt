/* 
 * File:   ValleyOfFire.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:55 PM
 */

#ifndef VALLEYOFFIRE_H
#define	VALLEYOFFIRE_H
#include "MapSquare.h"

class ValleyOfFire : public MapSquare {
public:
    ValleyOfFire(int,int,int,string,string,string);
    void execute(AdventureCardDeck*, SpellDeck*, PurchaseDeck*, Character*, QTextEdit*);
private:

};

#endif	/* VALLEYOFFIRE_H */

