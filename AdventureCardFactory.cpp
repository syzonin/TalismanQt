/* 
 * File:   AdventureCardFactory.cpp
 * Author: Alex
 * 
 * Created on November 7, 2012, 10:03 PM
 */

#include "AdventureCardFactory.h"

///
///Default constructor
///Retrieves data from adventure card model
///
AdventureCardFactory::AdventureCardFactory() {
    entries = AdventureCardModel::select();
}
///
///Returns the list of available class names that can be passed to getClass()
///
vector<string> AdventureCardFactory::classNames () {
    vector<string> classNames;
    for (unsigned int i = 0; i < entries.size(); ++i) {
        classNames.push_back(entries.at(i).at(0).toStdString());
    }
    return classNames;
}
///
///Returns an instance to the class passed as parameter
///
AdventureCard* AdventureCardFactory::getClass(const string className) {
    QString name = QString::fromStdString(className);
    int encounterNo = 0, atkPoints = 0;
    string title = "", text = "", type = "", subType = "", atkType = "";
    
    for (unsigned int i = 0; i < entries.size(); ++i) {
        if (entries.at(i).at(0) == name) {
            QStringList rowData = entries.at(i);
            title = rowData.at(0).toStdString();
            type = rowData.at(1).toStdString();
            text = rowData.at(2).toStdString();
            encounterNo = rowData.at(3).toInt();
            if (type == "Enemy") {
                subType = rowData.at(4).toStdString();
                atkPoints = rowData.at(5).toInt();
                atkType = rowData.at(6).toStdString();
            }
            break;
        }
    }
    
    if (type == "Enemy") return new Enemy(title,type,text,encounterNo,subType,atkPoints,atkType);
    else if (type == "Follower") return new Follower(title,type,text,encounterNo);
    //else if (type == "Some type") return new DerivedAdventureCard(title,type,text,encounterNo);
    else return NULL;
}
///
///Destructor
///
AdventureCardFactory::~AdventureCardFactory() {
    for (unsigned int i = 0; i < entries.size(); ++i) {
        entries.at(i).clear();
    }
    entries.clear();
}