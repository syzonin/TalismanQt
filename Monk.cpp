/* 
 * File:   Monk.cpp
 * Author: Si
 * 
 * Created on November 11, 2012, 3:02 PM
 */

#include "Monk.h"

///
///Default constructor.
///
Monk::Monk(int strength, int craft, int fate, int life, string title, string text, int xCord, int yCord) : 
        Character(strength,craft,fate,life,title,text,xCord,yCord) {
    setAlignment(1);
}
///
///Destructor.
///
Monk::~Monk() {}
///
///Returns the number of armors allowed to be used in battle
///
int Monk::allowedArmors() { return 0; }
///
///Returns the number of weapons allowed to be used in battle
///
int Monk::allowedWeapons() { return 0; }
///
///Roll one die to attack an enemy based on its type (battle or psychic combat).
///
int Monk::attackRoll(const Enemy& e, int roll) {
    int totalAttack = craft + craftCounters;
    //If enemy's subtype is strength, add strength to attack
    if (e.getAttackType() != "Craft") totalAttack += strength + strengthCounters; 
    //Return attack points
    return totalAttack + roll;
}
///
///Roll two dice to attack an enemy based on its type (battle or psychic combat).
///
int Monk::attackRoll(const Enemy& e, int roll1, int roll2) {
    return Monk::attackRoll(e, roll1);
}
///
///Roll the die to override the attack roll.
///
int Monk::fateRoll(const Enemy& e, int roll) {
    return Character::fateRoll(e, roll);
}
