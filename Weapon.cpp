
/* Class Implementation: Weapon
 * All Class details described in the header file.
 * Individual Methods described at the head of each method below.
 */

#include "Weapon.h"

Weapon :: Weapon(){
//Base constructor (used by the "none" weapon)
    strength = 0;
    craft = 0;
    name = "none";
    inateAbility = "none";
}

Weapon :: Weapon(string n, int s, int c, string str){
//Parameterized Constructor (used for adding weapons)
    strength = s;
    craft = c;
    name = n;
    inateAbility = str;
}

Weapon :: Weapon(Weapon *w){
//Copy Constructor (used for adding weapons and a few other things)
    
    strength = w->getStrength();
    craft = w->getCraft();
    name = w->getName();
    inateAbility = w->getAbility();
}

int Weapon :: getStrength() {return strength;} //Accessors.
int Weapon :: getCraft() {return craft;}
string Weapon :: getName() {return name;}
string Weapon :: getAbility() {return inateAbility;}

