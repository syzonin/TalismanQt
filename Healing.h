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
    
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e); 
    void preBattle(Character* c, Enemy* e);
    void postBattle(Character* c, Enemy* e);

};

#endif	/* HEALING_H */

