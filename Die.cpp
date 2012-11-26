/* 
 * File:   Die.cpp
 * Author: Alex
 * 
 * Created on October 3, 2012, 8:59 PM
 */

#include "Die.h"
int Die::randomNumber = 0;

///
///Default constructor.
///
Die::Die() {}
///
///Destructor.
///
Die::~Die() {}
///
///Static method for rolling the die. 
///Generates a pseudo-random integer and outputs the number to the console.
///
int Die::roll() {
    ///Add waiting to simulate randomness
    clock_t endwait;
    endwait = clock() + 7;
    while (clock() < endwait) {}
    ///Seed
    srand(time(0)+clock()+randomNumber);
    ///Generate random number
    randomNumber = rand() % 6 + 1;
    cout << "Rolled a " << randomNumber << "\n";
    return randomNumber;
}

int Die::getRolledNumber() { return randomNumber; }