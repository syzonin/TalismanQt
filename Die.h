/* 
 * File:   Die.h
 * Author: Alex
 *
 * Created on October 3, 2012, 8:59 PM
 */

#ifndef DIE_H
#define	DIE_H
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class Die {
public:
    Die();
    virtual ~Die();
    static int roll();
    static int getRolledNumber();
private:
    static int randomNumber;
};

#endif	/* DIE_H */

