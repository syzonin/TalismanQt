
/* Class: Armor
 * Purpose: Holds all attributes associated with an in-game armor.
 * 
 * Main Functional Attributes:
 * - name: the armor's name
 * - inateAbility: the ability bonus of the Armor object
 * 
 * Main Functional Methods:
 * - Accessors only. No Mutators are really needed for this.
 */

#ifndef ARMOR_H
#define	ARMOR_H

#include <string>
using namespace std;

class Armor {
public:
    Armor();
    Armor(string n, string str);
    Armor(Armor *a);
      
    string getName();
    string getAbility();

private:
    string name;
    string inateAbility;
};

#endif