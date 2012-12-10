/* 
 * File:   Strength.h
 * Author: Jay
 *
 * Created on December 5, 2012, 12:25 AM
 */

#ifndef STRENGTH_H
#define	STRENGTH_H

#include "Spell.h"

class Strength : public Spell{
    //Adds +1 to Strength before a Battle or Psychic Combat (wasted if used before a Psychic Combat)
public:
    Strength();
    Strength(string, string, int);
    
    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e); 
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);

};

#endif	/* STRENGTH_H */

