/* 
 * File:   ExorcistBlade.h
 * Author: Jay
 *
 * Created on December 2, 2012, 5:43 PM
 */

#ifndef EXORCISTBLADE_H
#define	EXORCISTBLADE_H

#include "Weapon.h"

class ExorcistBlade : public Weapon{
//Weapon Specifics: No change to attributes, allows for fighting Spirits in BATTLE instead of Psycic Combat (uses Strength)
public:
    ExorcistBlade();
    ExorcistBlade(int, int, string, string,int);

private:
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e);
    void preBattle(Character* c, Enemy* e);
    void postBattle(Character* c, Enemy* e);
};

#endif	/* EXORCISTBLADE_H */

