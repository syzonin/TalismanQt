/* 
 * File:   Follower.h
 * Author: Alex
 *
 * Created on October 5, 2012, 11:40 PM
 */

#ifndef FOLLOWER_H
#define	FOLLOWER_H
#include "AdventureCard.h"

class Follower : public AdventureCard {
public:
    Follower(string,string,string,int);
    virtual ~Follower();
};

#endif	/* FOLLOWER_H */

