/* 
 * File:   City.h
 * Author: Si
 *
 * Created on December 1, 2012, 8:31 PM
 */

#ifndef CITY_H
#define	CITY_H
#include "MapSquare.h"

class City : public MapSquare {
public:
    City(int,int,int,string,string,string);
    void execute();
private:

};

#endif	/* CITY_H */

