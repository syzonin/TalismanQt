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
    Enemy(string,string,string,int,string,int);
    virtual ~Enemy();
    //Accessors
    const string getSubType() const;
    int getAttackPoints();
    //Mutators
    void setSubType(string);
    void setAttackPoints(int);
    //Other methods
    string toString();
    int attackRoll(int);
protected:
    virtual void paintType(QPainter&);
private:
    string subType;
    int attackPoints;
};

#endif	/* ENEMY_H */

