/* 
 * File:   Follower.cpp
 * Author: Alex
 * 
 * Created on October 5, 2012, 11:40 PM
 */

#include "Follower.h"
///
///Default constructor.
///
Follower::Follower(string title, string type, string text, int encounterNumber) : 
        AdventureCard(title,type,text,encounterNumber) {}
///
///Destructor.
///
Follower::~Follower() {
}

