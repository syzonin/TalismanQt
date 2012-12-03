/* 
 * File:   BasicArmor.h
 * Author: Jay
 *
 * Created on December 2, 2012, 5:49 PM
 */

#ifndef BASICARMOR_H
#define	BASICARMOR_H

#include "Armor.h"

class BasicArmor : public Armor{
//Armor Specifications: Has a 50% chance for character to not lose a life after losing a battle
public:
    BasicArmor();
    BasicArmor(string, string,int);

private:
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e);
};

#endif	/* BASICARMOR_H */

