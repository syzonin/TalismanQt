/* 
 * File:   Restoration.h
 * Author: Jay
 *
 * Created on December 5, 2012, 12:21 AM
 */

#ifndef RESTORATION_H
#define	RESTORATION_H

#include "Spell.h"

class Restoration : public Spell{
    //Refills the Caster's Life Points to its default full amount. (Does nothing if life is already full)
public:
    Restoration();
    Restoration(string, string, int);
    
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e); 
    void preBattle(Character* c, Enemy* e);
    void postBattle(Character* c, Enemy* e);

};

#endif	/* RESTORATION_H */

