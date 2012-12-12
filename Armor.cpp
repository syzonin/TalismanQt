
/* Class Implementation: Armor (By: Jay)
 * All Class details described in the header file.
 * Individual Methods described at the head of each method below.
 */

#include "Armor.h"

///
///Default Constructor
///
Armor :: Armor() : AdventureCard("none", "Armor", "No Text", 0){
}
///
///Parameterized Constructor
///
Armor :: Armor(string title, string text, int encounterNumber) : AdventureCard(title, "Armor", text, encounterNumber){    
}
///
///Copy Constructor (not overridden)
///
Armor :: Armor(Armor *a) : AdventureCard(a->getTitle(), "Armor", a->getText(), a->getEncounterNumber()){ 
}
///
///Performs Armor-specific actions for when the player wins a battle
///
string Armor :: win(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique armor
    return "";
}
///
///Performs Armor-specific actions for when the player loses a battle
///
string Armor :: lose(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique armor 
    return "";
}
///
///Performs Armor-specific actions before a battle
///
string Armor :: preBattle(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique armor
    return "";
}
///
///Performs Armor-specific actions after a battle
///
string Armor :: postBattle(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique armor
    return "";
}