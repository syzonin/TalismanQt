/* 
 * File:   Shield.h
 * Author: Jay
 *
 * Created on December 2, 2012, 6:00 PM
 */

#ifndef SHIELD_H
#define	SHIELD_H

#include "Armor.h"

class Shield : Armor{
//Armor Specifications: Has a 50% chance for character to not lose a life after losing a battle
public:
    Shield();
    Shield(string, string,int);

private:
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e);
};


#endif	/* SHIELD_H */
