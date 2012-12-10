/* 
 * File:   Generosity.h
 * Author: Jay
 *
 * Created on December 5, 2012, 12:17 AM
 */

#ifndef GENEROSITY_H
#define	GENEROSITY_H

#include "Spell.h"

class Generosity : public Spell{
    //If the following Battle or Psychic Combat is won, the Player is awarded 3 Gold.
public:
    Generosity();
    Generosity(string, string, int);
    
    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e); 
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);

};

#endif	/* GENEROSITY_H */

