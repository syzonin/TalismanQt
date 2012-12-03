/* 
 * File:   Pits.h
 * Author: Si
 *
 * Created on December 1, 2012, 10:01 PM
 */

#ifndef PITS_H
#define	PITS_H
#include "MapSquare.h"

class Pits : public MapSquare {
public:
    Pits(int,int,int,string,string,string);
    void execute();
private:

};

#endif	/* PITS_H */

