/* 
 * File:   WerewolfDen.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:55 PM
 */

#ifndef WEREWOLFDEN_H
#define	WEREWOLFDEN_H
#include "MapSquare.h"

class WerewolfDen : public MapSquare {
public:
    WerewolfDen(int,int,int,string,string,string);
    void execute(AdventureCardDeck*, SpellDeck*, PurchaseDeck*, Character*, QTextEdit*);
private:

};

#endif	/* WEREWOLFDEN_H */

