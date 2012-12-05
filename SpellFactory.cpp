/* 
 * File:   SpellFactory.cpp
 * Author: Jay
 * 
 * Created on December 5, 2012, 1:19 AM
 */

#include "SpellFactory.h"

SpellFactory::SpellFactory(){
    spells = SpellModel::select();
}

SpellFactory::~SpellFactory(){
    for (unsigned int x = 0; x < spells.size(); x++)
        spells.at(x).clear();
    spells.clear();
}

Spell* SpellFactory::getSpell(string demand){

    string title = "none";
    string text = "No Text";
    int encounterNumber = 0;
    unsigned int row;
    
    QStringList rowData;
    for (row = 0; row < spells.size(); row++){
        rowData = spells.at(row);
        if (demand == rowData.at(0).toStdString())
            break;
    }
    
    title = rowData.at(0).toStdString();
    text = rowData.at(1).toStdString();
    encounterNumber = rowData.at(2).toInt();
    
    if (title == "Cheat Fate")
        return new CheatFate(title, text, encounterNumber);
    else if (title == "Craft")
        return new Craft(title, text, encounterNumber);
    else if (title == "Feeble Mind")
        return new FeebleMind(title, text, encounterNumber);
    else if (title == "Generosity")
        return new Generosity(title, text, encounterNumber);
    else if (title == "Healing")
        return new Healing(title, text, encounterNumber);
    else if (title == "Life Tap")
        return new LifeTap(title, text, encounterNumber);
    else if (title == "Magic Shell")
        return new MagicShell(title, text, encounterNumber);
    else if (title == "Restoration")
        return new Restoration(title, text, encounterNumber);
    else if (title == "Strength")
        return new Strength(title, text, encounterNumber);
    else if (title == "Syphon Strength")
        return new SyphonStrength(title, text, encounterNumber);
    else if (title == "Weakness")
        return new Weakness(title, text, encounterNumber);
    else
        return new Spell();
    
}
