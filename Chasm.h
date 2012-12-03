/* 
 * File:   Chasm.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:55 PM
 */

#ifndef CHASM_H
#define	CHASM_H
#include "MapSquare.h"

class Chasm : public MapSquare {
public:
    Chasm(int,int,int,string,string,string);
    void execute();
private:

};

#endif	/* CHASM_H */

