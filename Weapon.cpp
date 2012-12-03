
/* Class Implementation: Weapon
 * All Class details described in the header file.
 * Individual Methods described at the head of each method below.
 */

#include "Weapon.h"

Weapon :: Weapon() : AdventureCard("none", "Weapon", "No Text", 0){
//Base constructor (used by the "none" weapon)
    strength = 0;
    craft = 0;
}

Weapon :: Weapon(int s, int c, string title, string text, int encounterNumber) : AdventureCard(title, "Weapon", text, encounterNumber){
//Parameterized Constructor (used for adding weapons)
    strength = s;
    craft = c;
}

Weapon :: Weapon(Weapon *w) : AdventureCard(w->getTitle(), "Weapon", w->getText(), w->getEncounterNumber()){
//Copy Constructor (used for adding weapons and a few other things)
    strength = w->getStrength();
    craft = w->getCraft();
}

int Weapon :: getStrength() {return strength;} //Accessors.
int Weapon :: getCraft() {return craft;}

void Weapon :: win(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique weapon    
}

void Weapon :: lose(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique weapon  
}

void Weapon :: preBattle(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique weapon    
}

void Weapon :: postBattle(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique weapon    
}
