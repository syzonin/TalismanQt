/* 
 * File:   ArmorFactory.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 8:38 PM
 */

#include "ArmorFactory.h"

///
///Default constructor
///Retrieves data from armor model
///
ArmorFactory::ArmorFactory(){
    entries = ArmorModel::select();
}

///
///Destructor
///
ArmorFactory::~ArmorFactory(){
    for (unsigned int i = 0; i < entries.size(); ++i) entries.at(i).clear();
    entries.clear();
}

///
///Returns the list of available class names that can be passed to getClass()
///
vector<string> ArmorFactory::classNames () {
    vector<string> classNames;
    for (unsigned int i = 0; i < entries.size(); ++i) {
        classNames.push_back(entries.at(i).at(0).toStdString());
    }
    return classNames;
}
///
///Returns an instance to the class passed as parameter
///
Armor* ArmorFactory::getClass(const string className) {
    QString name = QString::fromStdString(className);
    string title = "", text = "";
    int encounterNumber = 0;
    
    for (unsigned int i = 0; i < entries.size(); ++i) {
        if (entries.at(i).at(0) == name) {
            QStringList rowData = entries.at(i);
            title = rowData.at(0).toStdString();
            text = rowData.at(1).toStdString();
            encounterNumber = rowData.at(2).toInt();
            break;
        }
    }
    
    
    if (title == "Basic Armor")
        return new BasicArmor(title, text, encounterNumber);
    else if (title == "Helmet")
        return new Helmet(title, text, encounterNumber);
    else if (title == "Shield")
        return new Shield(title, text, encounterNumber);
    else if (title == "Mirror Shield")
        return new MirrorShield(title, text, encounterNumber);

    else
        return new Armor();
    
}
