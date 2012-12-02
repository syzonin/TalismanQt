/* 
 * File:   DiceWithDeath.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:58 PM
 */

#ifndef DICEWITHDEATH_H
#define	DICEWITHDEATH_H
#include "MapSquare.h"

class DiceWithDeath : public MapSquare {
public:
    DiceWithDeath(int,int,int,string,string,string);
    int execute();
private:

};

#endif	/* DICEWITHDEATH_H */

