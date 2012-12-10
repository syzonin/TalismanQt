/* 
 * File:   PsionicWand.h
 * Author: Jay
 *
 * Created on December 2, 2012, 5:38 PM
 */

#ifndef PSIONICWAND_H
#define	PSIONICWAND_H

#include "Weapon.h"

class PsionicWand : public Weapon{
//Weapon Specifics: Has no effect on attributes -> converts Battle into Psychic Battle that uses Craft in place of Strength
public:
    PsionicWand();
    PsionicWand(int, int, string, string,int);

    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e);
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);
};

#endif	/* PSIONICWAND_H */

