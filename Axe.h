/* 
 * File:   Axe.h
 * Author: Jay
 *
 * Created on December 2, 2012, 3:31 PM
 */

#ifndef AXE_H
#define	AXE_H

#include "Weapon.h"

class Axe : public Weapon{
//Weapon Specifics: Adds =1 to Strength .. no special post/pre battle abilities
public:
    Axe();
    Axe(int, int, string, string,int);

    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e);
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);
};

#endif	/* AXE_H */

