
/* Class Implementation: Weapon (by: Jay)
 * All Class details described in the header file.
 * Individual Methods described at the head of each method below.
 */

#include "Weapon.h"

///
///Default Constructor
///
Weapon :: Weapon() : AdventureCard("none", "Weapon", "No Text", 0){
    strength = 0;
    craft = 0;
}
///
///Parameterized Constructor
///
Weapon :: Weapon(int s, int c, string title, string text, int encounterNumber) : AdventureCard(title, "Weapon", text, encounterNumber){
    strength = s;
    craft = c;
}
///
///Copy Constructor (not overridden)
///
Weapon :: Weapon(Weapon *w) : AdventureCard(w->getTitle(), "Weapon", w->getText(), w->getEncounterNumber()){
    strength = w->getStrength();
    craft = w->getCraft();
}
///
///Returns the weapon-specific Strength
///
int Weapon :: getStrength() {return strength;} //Accessors.
///
///Returns the weapon-specific Craft
///
int Weapon :: getCraft() {return craft;}
///
///Performs Weapon-specific actions for when the player wins a battle
///
string Weapon :: win(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique weapon 
    return "";
}
///
///Performs Weapon-specific actions for when the player loses a battle
///
string Weapon :: lose(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique weapon
    return "";
}
///
///Performs Weapon-specific actions before a battle
///
string Weapon :: preBattle(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique weapon
    return "";
}
///
///Performs Weapon-specific actions after a battle
///
string Weapon :: postBattle(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique weapon
    return "";
}
