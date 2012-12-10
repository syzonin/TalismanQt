
/* Class: Armor
 * Purpose: Holds all attributes associated with an in-game armor.
 */

#ifndef ARMOR_H
#define	ARMOR_H

#include "AdventureCard.h"
#include "Character.h"
#include "Enemy.h"
#include <string>
using namespace std;

class Armor : public AdventureCard{
public:
    Armor();
    Armor(string title, string text, int encounterNumber);
    Armor(Armor *a);

    virtual string win(Character* c, Enemy* e);
    virtual string lose(Character* c, Enemy* e);
    virtual string preBattle(Character* c, Enemy* e);
    virtual string postBattle(Character* c, Enemy* e);
};

#endif