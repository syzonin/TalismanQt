/* 
 * File:   Enemy.h
 * Author: Alex
 *
 * Created on October 1, 2012, 6:37 PM
 */

#ifndef ENEMY_H
#define	ENEMY_H
#include "AdventureCard.h"

class Enemy : public AdventureCard {
public:
    //Constructor & destructor
    Enemy(string,string,string,int,string,int,string);
    virtual ~Enemy();
    //Accessors
    const string getSubType() const;
    const string getAttackType() const;
    int getAttackPoints();
    //Mutators
    void setSubType(string);
    void setAttackPoints(int);
    void setAttackType(string);
    //Other methods
    string toString();
    int attackRoll(int);
protected:
    virtual void paintType(QPainter&);
private:
    string subType;
    int attackPoints;
    string attackType;
};

#endif	/* ENEMY_H */

