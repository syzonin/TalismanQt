/* 
 * File:   PlainOfPeril.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:58 PM
 */

#ifndef PLAINOFPERIL_H
#define	PLAINOFPERIL_H
#include "MapSquare.h"

class PlainOfPeril : public MapSquare {
public:
    PlainOfPeril(int,int,int,string,string,string);
    int execute();
private:

};

#endif	/* PLAINOFPERIL_H */

