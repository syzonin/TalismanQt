/* 
 * File:   WeaponFactory.h
 * Author: Jay
 *
 * Created on December 2, 2012, 7:55 PM
 */

#ifndef WEAPONFACTORY_H
#define	WEAPONFACTORY_H

#include "WeaponModel.h"
#include "Weapon.h"
#include <string>
#include <vector>

#include "Axe.h"
#include "BaneSword.h"
#include "ExorcistBlade.h"
#include "FateStealer.h"
#include "Frostbite.h"
#include "HolyLance.h"
#include "LightningHammer.h"
#include "MagicMace.h"
#include "PsionicWand.h"
#include "Runesword.h"
#include "Spellsword.h"
#include "SwordOfLight.h"

class WeaponFactory{
public:
    WeaponFactory();
    virtual ~WeaponFactory();
    Weapon* getWeapon(int row);
    
private:
    vector<QStringList> weapons;
};


#endif	/* WEAPONFACTORY_H */

