/* 
 * File:   WarlocksCave.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:46 PM
 */

#ifndef WARLOCKSCAVE_H
#define	WARLOCKSCAVE_H
#include "MapSquare.h"

class WarlocksCave : public MapSquare {
public:
    WarlocksCave(int,int,int,string,string,string);
    void execute(AdventureCardDeck*);
private:

};

#endif	/* WARLOCKSCAVE_H */

