/* 
 * File:   DragonRider.h
 * Author: Alex
 *
 * Created on October 4, 2012, 10:37 PM
 */

#ifndef DRAGONRIDER_H
#define	DRAGONRIDER_H
#include "Character.h"

class DragonRider : public Character {
public:
    //Constructor & destructor
    DragonRider(int,int,int,int,string,string,int,int);
    virtual ~DragonRider();
    //Accessors
    bool hasFollowerDragon() const;
    //Mutators
    bool addFollower(AdventureCard*);
    //Other methods
    int allowedAttackRolls(const Enemy&);
    int attackRoll(const Enemy&, int);
    int attackRoll(const Enemy&, int, int);
    int fateRoll(const Enemy&, int);
private:
    const static int DRAGON_BONUS;
    bool followerDragon;    
};

#endif	/* DRAGONRIDER_H */

