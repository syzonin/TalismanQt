
/* Class Implementation: Armor
 * All Class details described in the header file.
 * Individual Methods described at the head of each method below.
 */

#include "Armor.h"

Armor :: Armor() : AdventureCard("none", "Armor", "No Text", 0){
//Base Constructor
}

Armor :: Armor(string title, string text, int encounterNumber) : AdventureCard(title, "Armor", text, encounterNumber){
//Parameterized Constructor (used for adding Armor)    
}

Armor :: Armor(Armor *a) : AdventureCard(a->getTitle(), "Armor", a->getText(), a->getEncounterNumber()){
//Copy Constructor (used for adding Armor) 
}

void Armor :: win(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique armor    
}

void Armor :: lose(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique armor  
}

void Armor :: preBattle(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique armor    
}

void Armor :: postBattle(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique armor    
}


