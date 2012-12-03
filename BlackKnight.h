/* 
 * File:   BlackKnight.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:50 PM
 */

#ifndef BLACKKNIGHT_H
#define	BLACKKNIGHT_H
#include "MapSquare.h"

class BlackKnight : public MapSquare {
public:
    BlackKnight(int,int,int,string,string,string);
    void execute();
private:

};

#endif	/* BLACKKNIGHT_H */

