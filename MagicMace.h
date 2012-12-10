/* 
 * File:   MagicMace.h
 * Author: Jay
 *
 * Created on December 2, 2012, 4:56 PM
 */

#ifndef MAGICMACE_H
#define	MAGICMACE_H

#include "Weapon.h"

class MagicMace : public Weapon{
//Weapon Specifics: Adds +2 to Craft .. no special post/pre battle abilities
public:
    MagicMace();
    MagicMace(int, int, string, string,int);

    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e);
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);
};

#endif	/* MAGICMACE_H */

