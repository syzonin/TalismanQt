/* 
 * File:   Crypt.h
 * Author: Si
 *
 * Created on December 1, 2012, 9:58 PM
 */

#ifndef CRYPT_H
#define	CRYPT_H
#include "MapSquare.h"

class Crypt : public MapSquare {
public:
    Crypt(int,int,int,string,string,string);
    int execute();
private:

};

#endif	/* CRYPT_H */

