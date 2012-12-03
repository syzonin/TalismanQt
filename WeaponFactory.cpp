/* 
 * File:   WeaponFactory.cpp
 * Author: Jay
 *
 * Created on December 2, 2012, 7:55 PM
 */

#include "WeaponFactory.h"

WeaponFactory::WeaponFactory(){
    weapons = WeaponModel::select();
}

WeaponFactory::~WeaponFactory(){
    for (unsigned int x = 0; x < weapons.size(); x++)
        weapons.at(x).clear();
    weapons.clear();
}

Weapon* WeaponFactory::getWeapon(int row){
    
    int strength = 0;
    int craft = 0;
    string title = "none";
    string text = "No Text";
    int encounterNumber = 0;
    
    QStringList rowData = weapons.at(row);
    strength = rowData.at(0).toInt();
    craft = rowData.at(1).toInt();
    title = rowData.at(2).toStdString();
    text = rowData.at(3).toStdString();
    encounterNumber = rowData.at(4).toInt();
    
    if (title == "Axe")
        return new Axe(strength, craft, title, text, encounterNumber);
    else if (title == "Bane Sword")
        return new BaneSword(strength, craft, title, text, encounterNumber);
    else if (title == "Exorcist Blade")
        return new ExorcistBlade(strength, craft, title, text, encounterNumber);
    else if (title == "Fate Stealer")
        return new FateStealer(strength, craft, title, text, encounterNumber);
    else if (title == "Frostbite")
        return new Frostbite(strength, craft, title, text, encounterNumber);
    else if (title == "Holy Lance")
        return new HolyLance(strength, craft, title, text, encounterNumber);
    else if (title == "Lightning Hammer")
        return new LightningHammer(strength, craft, title, text, encounterNumber);
    else if (title == "Magic Mace")
        return new MagicMace(strength, craft, title, text, encounterNumber);
    else if (title == "Psionic Wand")
        return new PsionicWand(strength, craft, title, text, encounterNumber);
    else if (title == "Runesword")
        return new Runesword(strength, craft, title, text, encounterNumber);
    else if (title == "Spellsword")
        return new Spellsword(strength, craft, title, text, encounterNumber);
    else if (title == "SwordOfLight")
        return new SwordOfLight(strength, craft, title, text, encounterNumber);
    else
        return new Weapon();
    
}