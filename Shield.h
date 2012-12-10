/* 
 * File:   Shield.h
 * Author: Jay
 *
 * Created on December 2, 2012, 6:00 PM
 */

#ifndef SHIELD_H
#define	SHIELD_H

#include "Armor.h"

class Shield : public Armor{
//Armor Specifications: Has a 50% chance for character to not lose a life after losing a battle
public:
    Shield();
    Shield(string, string,int);

    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e);
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);    
};


#endif	/* SHIELD_H */

