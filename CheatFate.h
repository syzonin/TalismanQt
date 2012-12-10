/* 
 * File:   CheatFate.h
 * Author: Jay
 *
 * Created on December 5, 2012, 12:03 AM
 */

#ifndef CHEATFATE_H
#define	CHEATFATE_H

#include "Spell.h"

class CheatFate : public Spell{
    //Spell Specifications: Instantly adds +1 Fate Tokens to the casting character
public:
    CheatFate();
    CheatFate(string, string, int);
    
    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e); 
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);

};


#endif	/* CHEATFATE_H */

