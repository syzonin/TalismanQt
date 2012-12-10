/* 
 * File:   Runesword.h
 * Author: Jay
 *
 * Created on December 2, 2012, 5:02 PM
 */

#ifndef RUNESWORD_H
#define	RUNESWORD_H

#include "Weapon.h"

class Runesword : public Weapon{
//Weapon Specifics: Adds +1 to Strength .. Adds +1 to LIFE at postBattle (WIN)
public:
    Runesword();
    Runesword(int, int, string, string,int);

    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e);
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);
};

#endif	/* RUNESWORD_H */

