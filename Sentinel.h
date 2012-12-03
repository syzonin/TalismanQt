/* 
 * File:   Sentinel.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:38 PM
 */

#ifndef SENTINEL_H
#define	SENTINEL_H
#include "MapSquare.h"

class Sentinel : public MapSquare {
public:
    Sentinel(int,int,int,string,string,string);
    void execute();
private:

};

#endif	/* SENTINEL_H */

