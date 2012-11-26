
/* Class Implementation: Armor
 * All Class details described in the header file.
 * Individual Methods described at the head of each method below.
 */

#include "Armor.h"

Armor :: Armor(){
//Base Constructor
    name = "none";
    inateAbility = "none";
}

Armor :: Armor(string n, string str){
//Parameterized Constructor (used for adding Armor)
    name = n;
    inateAbility = str;
}

Armor :: Armor(Armor *a){
//Copy Constructor (used for adding Armor)    
    name = a->getName();
    inateAbility = a->getAbility();
}

string Armor :: getName() {return name;} //accessors.
string Armor :: getAbility() {return inateAbility;}

