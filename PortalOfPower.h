/* 
 * File:   PortalOfPower.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:49 PM
 */

#ifndef PORTALOFPOWER_H
#define	PORTALOFPOWER_H
#include "MapSquare.h"

class PortalOfPower : public MapSquare {
public:
    PortalOfPower(int,int,int,string,string,string);
    void execute(AdventureCardDeck*, SpellDeck*, PurchaseDeck*, Character*, QTextEdit*);
private:

};

#endif	/* PORTALOFPOWER_H */

