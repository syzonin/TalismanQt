/* 
 * File:   BaneSword.h
 * Author: Jay
 *
 * Created on December 2, 2012, 3:50 PM
 */

#ifndef BANESWORD_H
#define	BANESWORD_H

#include "Weapon.h"

class BaneSword : public Weapon{
//Weapon Specifics: Adds +2 to Craft, no special ability pre/post battle
public:
    BaneSword();
    BaneSword(int, int, string, string,int);

    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e);
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);
};

#endif	/* BANESWORD_H */

