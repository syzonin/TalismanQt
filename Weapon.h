
/* Class: Weapon
 * Purpose: Holds all attributes associated with an in-game weapon.
 * 
 * Main Functional Attributes:
 * - strength, craft: amount of bonus attributes given by the Weapon object
 * - name: the weapon's name
 * - inateAbility: the ability bonus of the Weapon object
 * 
 * Main Functional Methods:
 * - Accessors only. No Mutators are really needed for this.
 */

#ifndef WEAPON_H
#define	WEAPON_H

#include <string>
using namespace std;

class Weapon {
public:
    Weapon();
    Weapon(string n, int s, int c, string str);
    Weapon(Weapon *w);
    
    int getStrength();
    int getCraft();  
    string getName();
    string getAbility();

private:
    int strength;
    int craft;
    string name;
    string inateAbility;
};

#endif

