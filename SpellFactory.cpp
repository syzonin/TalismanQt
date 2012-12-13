/* 
 * File:   SpellFactory.cpp
 * Author: Jay
 * 
 * Created on December 5, 2012, 1:19 AM
 */

#include "SpellFactory.h"

///
///Default constructor
///Retrieves data from spell model
///
SpellFactory::SpellFactory(){
    entries = SpellModel::select();
}

///
///Destructor
///
SpellFactory::~SpellFactory(){
    for (unsigned int i = 0; i < entries.size(); ++i) entries.at(i).clear();
    entries.clear();
}

///
///Returns the list of available class names that can be passed to getClass()
///
vector<string> SpellFactory::classNames () {
    vector<string> classNames;
    for (unsigned int i = 0; i < entries.size(); ++i) {
        classNames.push_back(entries.at(i).at(0).toStdString());
    }
    return classNames;
}
///
///Returns a instance of Spell based on string parameter passed to it
///
Spell* SpellFactory::getClass(const string className) {
    QString name = QString::fromStdString(className);

    string title = "", text = "";
    int encounterNumber = 0;
 
    if(className == "Random"){
        QStringList rowData = entries.at(rand() % 11 + 1);
        title = rowData.at(0).toStdString();
        text = rowData.at(1).toStdString();
        encounterNumber = rowData.at(2).toInt();
    }
    else{    
        for (unsigned int i = 0; i < entries.size(); ++i) {
            if (entries.at(i).at(0) == name) {
                QStringList rowData = entries.at(i);
                title = rowData.at(0).toStdString();
                text = rowData.at(1).toStdString();
                encounterNumber = rowData.at(2).toInt();
                break;
            }
        }      
    }
    
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
