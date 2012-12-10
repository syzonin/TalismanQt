/* 
 * File:   Healing.h
 * Author: Jay
 *
 * Created on December 5, 2012, 12:18 AM
 */

#ifndef HEALING_H
#define	HEALING_H

#include "Spell.h"

class Healing : public Spell{
    //Adds +1 to the Players Life Points.
public:
    Healing();
    Healing(string, string, int);
    
    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e); 
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);

};

#endif	/* HEALING_H */

