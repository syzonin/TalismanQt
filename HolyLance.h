/* 
 * File:   HolyLance.h
 * Author: Jay
 *
 * Created on December 2, 2012, 4:31 PM
 */

#ifndef HOLYLANCE_H
#define	HOLYLANCE_H

#include "Weapon.h"

class HolyLance : public Weapon{
//Weapon Specifics: Adds +3 to Strength .. no special post/pre battle abilities but should only be equipped onto 
    //a character that is +1 GOOD alignment.
public:
    HolyLance();
    HolyLance(int, int, string, string,int);

    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e);
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);
};

#endif	/* HOLYLANCE_H */

