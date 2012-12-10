/* 
 * File:   Weakness.h
 * Author: Jay
 *
 * Created on December 5, 2012, 12:27 AM
 */

#ifndef WEAKNESS_H
#define	WEAKNESS_H

#include "Spell.h"

class Weakness : public Spell{
    //Lowers the Enemy's Attack Points by 3 before Battle or Psychic Combat.
public:
    Weakness();
    Weakness(string, string, int);
    
    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e); 
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);

};

#endif	/* WEAKNESS_H */

