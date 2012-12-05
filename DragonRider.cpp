/* 
 * File:   DragonRider.cpp
 * Author: Alex
 * 
 * Created on October 4, 2012, 10:37 PM
 */

#include "DragonRider.h"
///
///Class constants.
///
const int DragonRider::DRAGON_BONUS = 3;
///
///Default constructor.
///
DragonRider::DragonRider(int strength, int craft, int fate, int life, string title, string text, int xCord, int yCord) : 
        Character(strength,craft,fate,life,title,text,xCord,yCord) {}
///
///Destructor.
///
DragonRider::~DragonRider() {
}
///
///Returns a boolean of whether the character has a dragon as a follower or not.
///
bool DragonRider::hasFollowerDragon() const { return followerDragon; }
///
///Adds the enemy card to the character's list of followers.
///Precondition: The enemy card has to be a dragon type. Only one dragon can follow the character.
///
bool DragonRider::addFollower(AdventureCard* card) {
    //Add dragon if there are currently none
    if (card->getType() == "Enemy") {
        Enemy* e = static_cast<Enemy*>(card);
        if (e->getSubType() != "Dragon" || followerDragon == true) return false;
        followers.push_back(card);
        followerDragon = true;
        return true;
    } 
    //Add follower based on character class implementation
    return Character::addFollower(card);
}
///
///Returns the number of dice to roll when attacking an Enemy
///
int DragonRider::allowedAttackRolls(const Enemy& e) { 
    if (!followerDragon) return 1;
    else return 2;
}
///
///Roll one die to attack an enemy based on its type (battle or psychic combat).
///
int DragonRider::attackRoll(const Enemy& e, int roll) {
    return DragonRider::attackRoll(e, roll, 0);
}
///
///Roll two dice to attack an enemy based on its type (battle or psychic combat).
///
int DragonRider::attackRoll(const Enemy& e, int roll1, int roll2) {
    if (!followerDragon) {
        roll1 = Character::attackRoll(e, roll1);
        if (e.getSubType() == "Dragon") roll1 += DRAGON_BONUS;
        return roll1;
    } else {
        roll1 = Character::attackRoll(e, roll1);
        roll2 = Character::attackRoll(e, roll2);
        return (roll1 > roll2 ? roll1 : roll2) + DRAGON_BONUS;        
    }
    return 0;
}
///
///Roll the die to override the attack roll.
///
int DragonRider::fateRoll(const Enemy& e, int roll) {
    if (fateTokens > 0) {
        setFateTokens(fateTokens-1);
        return DragonRider::attackRoll(e, roll);
    } else {
        return 0;
    }
}