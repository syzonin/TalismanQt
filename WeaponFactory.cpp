/* 
 * File:   WeaponFactory.cpp
 * Author: Jay
 *
 * Created on December 2, 2012, 7:55 PM
 */

#include "WeaponFactory.h"

///
///Default constructor
///Retrieves data from weapon model
///
WeaponFactory::WeaponFactory(){
    entries = WeaponModel::select();
}
///
///Destructor
///
WeaponFactory::~WeaponFactory(){
    for (unsigned int i = 0; i < entries.size(); ++i) entries.at(i).clear();
    entries.clear();
}
///
///Returns the list of available class names that can be passed to getClass()
///
vector<string> WeaponFactory::classNames() {
    vector<string> classNames;
    for (unsigned int i = 0; i < entries.size(); ++i) {
        classNames.push_back(entries.at(i).at(0).toStdString());
    }
    return classNames;
}
///
///Returns an instance to the class passed as parameter
///
Weapon* WeaponFactory::getClass(const string className) {
    QString name = QString::fromStdString(className);

    int strength = 0, craft = 0, encounterNumber = 0;
    string title = "", text = "";
    
    for (unsigned int i = 0; i < entries.size(); ++i) {
        if (entries.at(i).at(2) == name) {
            QStringList rowData = entries.at(i);
            strength = rowData.at(0).toInt();
            craft = rowData.at(1).toInt();
            title = rowData.at(2).toStdString();
            text = rowData.at(3).toStdString();
            encounterNumber = rowData.at(4).toInt();
            break;
        }
    }
    
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
    else if (title == "Sword of Light")
        return new SwordOfLight(strength, craft, title, text, encounterNumber);
    else
        return new Weapon();
    
}