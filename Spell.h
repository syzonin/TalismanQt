/* 
 * File:   Spell.h
 * Author: Jay
 *
 * Created on December 4, 2012, 11:41 PM
 */

#ifndef SPELL_H
#define	SPELL_H

#include "AdventureCard.h"
#include "Character.h"
#include "Enemy.h"
#include <string>
using namespace std;

class Spell : public AdventureCard{
public:
    Spell();
    Spell(string title, string text, int encounterNumber);
    Spell(Spell *s);
    
    virtual string preBattle(Character* c, Enemy* e);
    virtual string postBattle(Character* c, Enemy* e);
    virtual string win(Character* c, Enemy* e);
    virtual string lose(Character* c, Enemy* e);    
};



#endif	/* SPELL_H */

