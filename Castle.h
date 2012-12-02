/* 
 * File:   Castle.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:47 PM
 */

#ifndef CASTLE_H
#define	CASTLE_H
#include "MapSquare.h"

class Castle : public MapSquare {
public:
    Castle(int,int,int,string,string,string);
    int execute();
private:

};

#endif	/* CASTLE_H */

