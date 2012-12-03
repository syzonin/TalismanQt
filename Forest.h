/* 
 * File:   Forest.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:33 PM
 */

#ifndef FOREST_H
#define	FOREST_H
#include "MapSquare.h"

class Forest  : public MapSquare {
public:
    Forest(int,int,int,string,string,string);
    void execute();
private:

};

#endif	/* FOREST_H */

