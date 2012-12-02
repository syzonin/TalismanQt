/* 
 * File:   Warrior.cpp
 * Author: Alex
 * 
 * Created on September 30, 2012, 11:08 PM
 */

#include "Warrior.h"
///
///Default constructor.
///
Warrior::Warrior(int strength, int craft, int fate, int life, string title, string text, int xCord, int yCord) : 
        Character(strength,craft,fate,life,title,text,xCord,yCord) {

}
///
///Destructor.
///
Warrior::~Warrior() {}
///
///Returns the number of dice to roll when attacking an Enemy
///
int Warrior::allowedAttackRolls(const Enemy& e) { 
    if (e.getSubType() == "Spirit") return 1;
    else return 2;
}
///
///Roll one die to attack an enemy based on its type (battle or psychic combat).
///
int Warrior::attackRoll(const Enemy& e, int roll) {
    return Warrior::attackRoll(e, roll, 0);
}
///
///Roll two dice to attack an enemy based on its type (battle or psychic combat).
///
int Warrior::attackRoll(const Enemy& e, int roll1, int roll2) {
    if (e.getSubType() == "Spirit") {
        return Character::attackRoll(e, roll1);
    } else {
        roll1 = Character::attackRoll(e, roll1);
        roll2 = Character::attackRoll(e, roll2);
        return (roll1 > roll2 ? roll1 : roll2); 
    } 
    return 0;
}
///
///Roll the die to override the attack roll.
///
int Warrior::fateRoll(const Enemy& e, int roll) {
    return Character::fateRoll(e, roll);
}

