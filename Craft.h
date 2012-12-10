/* 
 * File:   Craft.h
 * Author: Jay
 *
 * Created on December 5, 2012, 12:12 AM
 */

#ifndef CRAFT_H
#define	CRAFT_H

#include "Spell.h"

class Craft : public Spell{
    //Adds +1 to Craft before a Battle or Psychic Combat (wasted if used before a Battle)
public:
    Craft();
    Craft(string, string, int);
    
    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e); 
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);

};

#endif	/* CRAFT_H */

