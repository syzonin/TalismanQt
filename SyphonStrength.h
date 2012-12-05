/* 
 * File:   SyphonStrength.h
 * Author: Jay
 *
 * Created on December 5, 2012, 12:26 AM
 */

#ifndef SYPHONSTRENGTH_H
#define	SYPHONSTRENGTH_H

#include "Spell.h"

class SyphonStrength : public Spell{
    //Adds +1 to the Player's Strength and Craft, and Subtracts -1 from the Enemy's Attack Points (before Battle or Psychic Combat).
public:
    SyphonStrength();
    SyphonStrength(string, string, int);
    
    void win(Character* c, Enemy* e);
    void lose(Character* c, Enemy* e); 
    void preBattle(Character* c, Enemy* e);
    void postBattle(Character* c, Enemy* e);

};

#endif	/* SYPHONSTRENGTH_H */

