/* 
 * File:   MirrorShield.h
 * Author: Jay
 *
 * Created on December 2, 2012, 6:02 PM
 */

#ifndef MIRRORSHIELD_H
#define	MIRRORSHIELD_H

#include "Armor.h"

class MirrorShield : Armor{
//Armor Specifications: Has a 50% chance for character to not lose a life after losing a battle
public:
    MirrorShield();
    MirrorShield(string, string,int);

private:
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e);
};


#endif	/* MIRRORSHIELD_H */

