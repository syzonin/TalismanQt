
/* Class Implementation: Spell (By: Jay)
 */

#include "Spell.h"

///
///Default Constructor
///
Spell :: Spell() : AdventureCard("none", "Spell", "No Text", 0){}
///
///Parameterized Constructor
///
Spell :: Spell(string title, string text, int encounterNumber) : AdventureCard(title, "Spell", text, encounterNumber){    }
///
///Copy Constructor (not overridden)
///
Spell :: Spell(Spell *s) : AdventureCard(s->getTitle(), "Spell", s->getText(), s->getEncounterNumber()){ }
///
///Performs Spell-specific actions for when the player wins a battle
///
string Spell :: preBattle(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique Spell  
    return "";
}
///
///Performs Spell-specific actions for when the player loses a battle
///
string Spell :: postBattle(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique Spell  
    return "";
}
///
///Performs Spell-specific actions before a battle
///
string Spell :: win(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique Spell 
    return "";
}
///
///Performs Spell-specific actions after a battle
///
string Spell :: lose(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique Spell 
    return "";
}
