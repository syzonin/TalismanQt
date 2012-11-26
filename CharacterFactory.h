/* 
 * File:   CharacterFactory.h
 * Author: Alex
 *
 * Created on November 7, 2012, 5:43 PM
 */

#ifndef CHARACTERFACTORY_H
#define	CHARACTERFACTORY_H
#include "CharacterCardModel.h"
#include "Character.h"
#include "DragonRider.h"
#include "Warrior.h"
#include "Monk.h"
#include <string>
#include <vector>
using namespace std;

class CharacterFactory {
public:
    CharacterFactory();
    virtual ~CharacterFactory();
    vector<string> classNames();
    Character* getClass(const string);
private:
    vector<QStringList> entries;
};

#endif	/* CHARACTERFACTORY_H */

