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
    
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e); 
    void preBattle(Character* c, Enemy* e);
    void postBattle(Character* c, Enemy* e);

};

#endif	/* FEEBLEMIND_H */

