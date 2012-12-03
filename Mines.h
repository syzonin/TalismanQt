/* 
 * File:   Mines.h
 * Author: Si
 *
 * Created on December 1, 2012, 10:00 PM
 */

#ifndef MINES_H
#define	MINES_H
#include "MapSquare.h"

class Mines : public MapSquare {
public:
    Mines(int,int,int,string,string,string);
    void execute();
private:

};

#endif	/* MINES_H */

