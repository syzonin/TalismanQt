/* 
 * File:   ArmorFactory.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 8:38 PM
 */

#include "ArmorFactory.h"

ArmorFactory::ArmorFactory(){
    armors = ArmorModel::select();
}

ArmorFactory::~ArmorFactory(){
    for (unsigned int x = 0; x < armors.size(); x++)
        armors.at(x).clear();
    armors.clear();
}

Armor* ArmorFactory::getArmor(int row){
    
    string title = "none";
    string text = "No Text";
    int encounterNumber = 0;
    
    QStringList rowData = armors.at(row);
    title = rowData.at(0).toStdString();
    text = rowData.at(1).toStdString();
    encounterNumber = rowData.at(2).toInt();
    
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
