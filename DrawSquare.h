/* 
 * File:   DrawSquare.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:28 PM
 */

#ifndef DRAWSQUARE_H
#define	DRAWSQUARE_H
#include "MapSquare.h"

class DrawSquare  : public MapSquare {
public:
    DrawSquare(int,int,int,string,string,string);
    int execute();
private:

};

#endif	/* DRAWSQUARE_H */

