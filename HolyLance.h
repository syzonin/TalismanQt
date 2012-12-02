/* 
 * File:   HolyLance.h
 * Author: Jay
 *
 * Created on December 2, 2012, 4:31 PM
 */

#ifndef HOLYLANCE_H
#define	HOLYLANCE_H

#include "Weapon.h"

class HolyLance : Weapon{
//Weapon Specifics: Adds +3 to Strength .. no special post/pre battle abilities but should only be equipped onto 
    //a character that is +1 GOOD alignment.
public:
    HolyLance();
    HolyLance(int, int, string, string,int);

private:
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e);
    void preBattle(Character* c, Enemy* e);
    void postBattle(Character* c, Enemy* e);
};

#endif	/* HOLYLANCE_H */

