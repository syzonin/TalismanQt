/* 
 * File:   Warrior.h
 * Author: Alex
 *
 * Created on September 30, 2012, 11:08 PM
 */

#ifndef WARRIOR_H
#define	WARRIOR_H
#include "Character.h"

class Warrior : public Character {
public:
    //Constructor & destructor
    Warrior(int,int,int,int,string,string,int,int);
    virtual ~Warrior();
    //Other methods
    int allowedAttackRolls(const Enemy&);
    int allowedWeapons();
    int attackRoll(const Enemy&, int);
    int attackRoll(const Enemy&, int, int);
    int fateRoll(const Enemy&, int);    
 
};


#endif	/* WARRIOR_H */

