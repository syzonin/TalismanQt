/* 
 * File:   Frostbite.h
 * Author: Jay
 *
 * Created on December 2, 2012, 4:28 PM
 */

#ifndef FROSTBITE_H
#define	FROSTBITE_H

#include "Weapon.h"

class Frostbite : Weapon{
//Weapon Specifics: Adds +1 to Strength, +1 to Craft ... no special abilities
public:
    Frostbite();
    Frostbite(int, int, string, string,int);

private:
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e);
    void preBattle(Character* c, Enemy* e);
    void postBattle(Character* c, Enemy* e);
};

#endif	/* FROSTBITE_H */

