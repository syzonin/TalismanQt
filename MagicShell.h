/* 
 * File:   MagicShell.h
 * Author: Jay
 *
 * Created on December 5, 2012, 12:20 AM
 */

#ifndef MAGICSHELL_H
#define	MAGICSHELL_H

#include "Spell.h"

class MagicShell : public Spell{
    //Lowers the Enemy's Attack Points by 1 before Battle or Psychic Combat.
public:
    MagicShell();
    MagicShell(string, string, int);
    
    string win(Character* c, Enemy* e);
    string lose(Character* c, Enemy* e); 
    string preBattle(Character* c, Enemy* e);
    string postBattle(Character* c, Enemy* e);

};

#endif	/* MAGICSHELL_H */

