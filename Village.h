/* 
 * File:   Village.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:34 PM
 */

#ifndef VILLAGE_H
#define	VILLAGE_H
#include "MapSquare.h"

class Village  : public MapSquare {
public:
    Village(int,int,int,string,string,string);
    void execute(AdventureCardDeck*);
private:

};

#endif	/* VILLAGE_H */

