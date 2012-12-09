/* 
 * File:   Graveyard.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:38 PM
 */

#ifndef GRAVEYARD_H
#define	GRAVEYARD_H
#include "MapSquare.h"

class Graveyard  : public MapSquare {
public:
    Graveyard(int,int,int,string,string,string);
    void execute(AdventureCardDeck*);
private:

};

#endif	/* GRAVEYARD_H */

