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
//Warrior::Warrior() : Character(4,2,1,5) {
//    text = "You may roll two dice in battle and use the higher attack roll to determine your attack score.\n"
//                 "You may use two Weapons at the same time.";
//    name = "Warrior";
Monk::Monk(int strength, int craft, int fate, int life, string title, string text, int xCord, int yCord) : 
        Character(strength,craft,fate,life,title,text,xCord,yCord) {

}
///
///Destructor.
///
Monk::~Monk() {}
///
///Returns the number of dice to roll when attacking an Enemy
///
int Monk::allowedAttackRolls(const Enemy& e) { 
    if (e.getSubType() == "Spirit") return 1;
    else return 2;
}
///
///Roll one die to attack an enemy based on its type (battle or psychic combat).
///
int Monk::attackRoll(const Enemy& e, int roll) {
    return Monk::attackRoll(e, roll, 0);
}
///
///Roll two dice to attack an enemy based on its type (battle or psychic combat).
///
int Monk::attackRoll(const Enemy& e, int roll1, int roll2) {
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
int Monk::fateRoll(const Enemy& e, int roll) {
    return Character::fateRoll(e, roll);
}
