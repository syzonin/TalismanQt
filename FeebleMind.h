/* 
 * File:   FeebleMind.h
 * Author: Jay
 *
 * Created on December 5, 2012, 12:15 AM
 */

#ifndef FEEBLEMIND_H
#define	FEEBLEMIND_H

#include "Spell.h"

class FeebleMind : public Spell{
    //Lowers the Enemy's Attack Points by 2 before Psychic Combat or Battle
public:
    FeebleMind();
    FeebleMind(string, string, int);
    
    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e); 
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);

};

#endif	/* FEEBLEMIND_H */

