/* 
 * File:   SwordOfLight.h
 * Author: Jay
 *
 * Created on December 2, 2012, 5:22 PM
 */

#ifndef SWORDOFLIGHT_H
#define	SWORDOFLIGHT_H

#include "Weapon.h"

class SwordOfLight : public Weapon{
//Weapon Specifics: Adds +2 to Strength, +1 to Craft ... no abilities
public:
    SwordOfLight();
    SwordOfLight(int, int, string, string,int);

private:
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e);
    void preBattle(Character* c, Enemy* e);
    void postBattle(Character* c, Enemy* e);
};

#endif	/* SWORDOFLIGHT_H */

