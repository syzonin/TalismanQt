
/* Class Implementation: Spell
 */

#include "Spell.h"

Spell :: Spell() : AdventureCard("none", "Spell", "No Text", 0){
//Base Constructor
}

Spell :: Spell(string title, string text, int encounterNumber) : AdventureCard(title, "Spell", text, encounterNumber){
//Parameterized Constructor (used for adding Spell)    
}

Spell :: Spell(Spell *s) : AdventureCard(s->getTitle(), "Spell", s->getText(), s->getEncounterNumber()){
//Copy Constructor (used for adding Spell) 
}

string Spell :: preBattle(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique Spell  
    return "";
}

string Spell :: postBattle(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique Spell  
    return "";
}

string Spell :: win(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique Spell 
    return "";
}

string Spell :: lose(Character* c, Enemy* e){
//template method -> intended to be overridden by each unique Spell 
    return "";
}
