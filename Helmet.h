/* 
 * File:   Helmet.h
 * Author: Jay
 *
 * Created on December 2, 2012, 5:55 PM
 */

#ifndef HELMET_H
#define	HELMET_H

#include "Armor.h"

class Helmet : Armor{
//Armor Specifications: Has a 15% chance for character to not lose a life after losing a battle
public:
    Helmet();
    Helmet(string, string,int);

private:
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e);
};

#endif	/* HELMET_H */
