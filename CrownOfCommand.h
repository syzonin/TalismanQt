/* 
 * File:   CrownOfCommand.h
 * Author: Si
 *
 * Created on December 1, 2012, 10:01 PM
 */

#ifndef CROWNOFCOMMAND_H
#define	CROWNOFCOMMAND_H
#include "MapSquare.h"

class CrownOfCommand : public MapSquare {
public:
    CrownOfCommand(int,int,int,string,string,string);
    void execute(AdventureCardDeck*, SpellDeck*, PurchaseDeck*, Character*, QTextEdit*);
private:

};

#endif	/* CROWNOFCOMMAND_H */

