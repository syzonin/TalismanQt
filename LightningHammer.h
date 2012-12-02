/* 
 * File:   LightningHammer.h
 * Author: Jay
 *
 * Created on December 2, 2012, 4:34 PM
 */

#ifndef LIGHTNINGHAMMER_H
#define	LIGHTNINGHAMMER_H

#include "Weapon.h"

class LightningHammer : Weapon{
//Weapon Specifics: Adds +2 to Strength .. no special post/pre battle abilities
    //THIS IS MODIFIED FROM THE ORIGINAL TALISMAN GAME DETAILS
public:
    LightningHammer();
    LightningHammer(int, int, string, string,int);

private:
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e);
    void preBattle(Character* c, Enemy* e);
    void postBattle(Character* c, Enemy* e);
};

#endif	/* LIGHTNINGHAMMER_H */

