
/* Class: Weapon
 * Purpose: Holds all attributes associated with an in-game weapon.
 * 
 * Main Functional Attributes:
 * - strength, craft: amount of bonus attributes given by the Weapon object
 * 
 * Main Functional Methods:
 * - Accessors only. No Mutators are really needed for this.
 */

#ifndef WEAPON_H
#define	WEAPON_H

#include "AdventureCard.h"
#include "Character.h"
#include "Enemy.h"
#include <string>
using namespace std;

class Weapon : AdventureCard{
public:
    Weapon();
    Weapon(int s, int c, string title, string text, int encounterNumber);
    Weapon(Weapon *w);
    
    int getStrength();
    int getCraft();
    
    virtual void win(Character* c, Enemy* e);
    virtual void lose(Character* c, Enemy* e);
    virtual void preBattle(Character* c, Enemy* e);
    virtual void postBattle(Character* c, Enemy* e);

protected:
    int strength;
    int craft;
};

#endif

