/* 
 * File:   Monk.h
 * Author: Si
 *
 * Created on November 11, 2012, 3:02 PM
 */

#ifndef MONK_H
#define	MONK_H
#include "Character.h"

class Monk : public Character  {
public:
    //Constructor & destructor
    Monk(int,int,int,int,string,string,int,int);
    virtual ~Monk();
    //Other methods
    int allowedAttackRolls(const Enemy&);
    int attackRoll(const Enemy&, int);
    int attackRoll(const Enemy&, int, int);
    int fateRoll(const Enemy&, int);
};

#endif	/* MONK_H */

