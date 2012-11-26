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
    int attackRoll(const Enemy&, int);
    int attackRoll(const Enemy&, int, int);
    int fateRoll(const Enemy&, int);
    
    void addActiveWeapon(Weapon w, int index);
    void removeActiveWeapon(int index);
    Weapon getActiveWeapon();
    Weapon getSecondWeapon();

    private:
    Weapon *weapons[2];
    
 
};


#endif	/* WARRIOR_H */

