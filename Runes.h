/* 
 * File:   Runes.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:46 PM
 */

#ifndef RUNES_H
#define	RUNES_H
#include "MapSquare.h"

class Runes : public MapSquare {
public:
    Runes(int,int,int,string,string,string);
    void execute();
private:

};

#endif	/* RUNES_H */

