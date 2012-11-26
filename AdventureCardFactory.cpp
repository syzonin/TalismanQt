/* 
 * File:   AdventureCardFactory.cpp
 * Author: Alex
 * 
 * Created on November 7, 2012, 10:03 PM
 */

#include "AdventureCardFactory.h"

AdventureCardFactory::AdventureCardFactory() {
    entries = AdventureCardModel::select();
}

vector<string> AdventureCardFactory::classNames () {
    vector<string> classNames;
    for (unsigned int i = 0; i < entries.size(); ++i) {
        classNames.push_back(entries.at(i).at(0).toStdString());
    }
    return classNames;
}

//AdventureCard* AdventureCardFactory::getClass(const string className) {
//    QString name = QString::fromStdString(className);
//    int strength = 0, craft = 0, fate = 0, life = 0;
//    string title = "", text = "";
//    
//    for (unsigned int i = 0; i < entries.size(); ++i) {
//        if (entries.at(i).at(0) == name) {
//            QStringList rowData = entries.at(i);
//            strength = rowData.at(1).toInt();
//            craft = rowData.at(2).toInt();
//            fate = rowData.at(3).toInt();
//            life = rowData.at(4).toInt();
//            title = rowData.at(0).toStdString();
//            text = rowData.at(5).toStdString();
//            break;
//        }
//    }
//    
//    if (name == "Enemy")  return new DragonRider(strength,craft,fate,life,title,text);
//    else if (name == "Warrior") return new Warrior(strength,craft,fate,life,title,text);
//    else return NULL;
//}

AdventureCardFactory::~AdventureCardFactory() {
    for (unsigned int i = 0; i < entries.size(); ++i) {
        entries.at(i).clear();
    }
    entries.clear();
}