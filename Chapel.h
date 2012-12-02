/* 
 * File:   Chapel.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:38 PM
 */

#ifndef CHAPEL_H
#define	CHAPEL_H
#include "MapSquare.h"

class Chapel : public MapSquare {
public:
    Chapel(int,int,int,string,string,string);
    int execute();
private:

};

#endif	/* CHAPEL_H */

