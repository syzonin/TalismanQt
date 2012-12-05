/* 
 * File:   LifeTap.h
 * Author: Jay
 *
 * Created on December 5, 2012, 12:19 AM
 */

#ifndef LIFETAP_H
#define	LIFETAP_H

#include "Spell.h"

class LifeTap : public Spell{
    //If the upcoming Battle or Psychic Combat is won, the Player is awarded +1 Life Point.
public:
    LifeTap();
    LifeTap(string, string, int);
    
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e); 
    void preBattle(Character* c, Enemy* e);
    void postBattle(Character* c, Enemy* e);

};

#endif	/* LIFETAP_H */

