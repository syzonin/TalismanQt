/* 
 * File:   Spellsword.h
 * Author: Jay
 *
 * Created on December 2, 2012, 5:14 PM
 */

#ifndef SPELLSWORD_H
#define	SPELLSWORD_H

#include "Weapon.h"

class Spellsword : public Weapon{
//Weapon Specifics: Adds +1 to Craft and adds one random SPELL in PostBattle - WIN
public:
    Spellsword();
    Spellsword(int, int, string, string,int);

private:
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e);
    void preBattle(Character* c, Enemy* e);
    void postBattle(Character* c, Enemy* e);
};

#endif	/* SPELLSWORD_H */

