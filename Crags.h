/* 
 * File:   Crags.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:38 PM
 */

#ifndef CRAGS_H
#define	CRAGS_H
#include "MapSquare.h"

class Crags : public MapSquare {
public:
    Crags(int,int,int,string,string,string);
    void execute(AdventureCardDeck*);
private:

};

#endif	/* CRAGS_H */

