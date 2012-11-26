/* 
 * File:   AdventureCardFactory.h
 * Author: Alex
 *
 * Created on November 7, 2012, 10:03 PM
 */

#ifndef ADVENTURECARDFACTORY_H
#define	ADVENTURECARDFACTORY_H
#include "AdventureCardModel.h"
#include "AdventureCard.h"
#include "Enemy.h"
#include <string>
#include <vector>

class AdventureCardFactory {
public:
    AdventureCardFactory();
    virtual ~AdventureCardFactory();
    vector<string> classNames();
    //AdventureCard* getClass(const string);
private:
    vector<QStringList> entries;
};

#endif	/* ADVENTURECARDFACTORY_H */

