/* 
 * File:   Tavern.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:31 PM
 */

#ifndef TAVERN_H
#define	TAVERN_H
#include "MapSquare.h"

class Tavern : public MapSquare {
public:
    Tavern(int,int,int,string,string,string);
    int execute();
private:

};

#endif	/* TAVERN_H */

