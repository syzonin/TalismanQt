/* 
 * File:   SpellModel.cpp
 * Author: Jay
 * 
 * Created on December 5, 2012, 1:19 AM
 */

#include "SpellModel.h"
QString SpellModel::fileName = "spells.txt";

///
///Reads each Spell Object detail from file and returns in a vector
///
vector<QStringList> SpellModel::select(){
    
    vector<QStringList> result;
    QString data;
    QStringList rowOfData;
    QFile file(fileName);
    
    if (file.open(QFile::ReadOnly)){
        data = file.readAll();
        file.close();
    }
    
    rowOfData = data.split("\n");
    for (int x = 0; x < rowOfData.size(); x++){
        result.push_back(rowOfData.at(x).split(";"));
    }
    
    return result;
}
