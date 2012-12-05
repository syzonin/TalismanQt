/* 
 * File:   SpellFactory.h
 * Author: Jay
 *
 * Created on December 2, 2012, 7:55 PM
 */

#ifndef SPELLFACTORY_H
#define	SPELLFACTORY_H

#include "SpellModel.h"
#include "Spell.h"
#include <string>
#include <vector>

#include "CheatFate.h"
#include "Craft.h"
#include "FeebleMind.h"
#include "Generosity.h"
#include "Healing.h"
#include "LifeTap.h"
#include "MagicShell.h"
#include "Restoration.h"
#include "Strength.h"
#include "SyphonStrength.h"
#include "Weakness.h"

class SpellFactory{
public:
    SpellFactory();
    virtual ~SpellFactory();
    Spell* getSpell(string demand);
    
private:
    vector<QStringList> spells;
};


#endif	/* SPELLFACTORY_H */

