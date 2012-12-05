/* 
 * File:   FateStealer.h
 * Author: Jay
 *
 * Created on December 2, 2012, 4:23 PM
 */

#ifndef FATESTEALER_H
#define	FATESTEALER_H

#include "Weapon.h"

class FateStealer : public Weapon{
//Weapon Specifics: Adds +1 to Strength .. Adds +1 to Fate post-battle (WIN)
public:
    FateStealer();
    FateStealer(int, int, string, string,int);

    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e);
    void preBattle(Character* c, Enemy* e);
    void postBattle(Character* c, Enemy* e);
};

#endif	/* FATESTEALER_H */

