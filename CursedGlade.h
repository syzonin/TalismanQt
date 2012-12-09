/* 
 * File:   CursedGlade.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:50 PM
 */

#ifndef CURSEDGLADE_H
#define	CURSEDGLADE_H
#include "MapSquare.h"

class CursedGlade : public MapSquare {
public:
    CursedGlade(int,int,int,string,string,string);
    void execute(AdventureCardDeck*);
private:

};

#endif	/* CURSEDGLADE_H */

