/* 
 * File:   ArmorModel.cpp
 * Author: Jay
 * 
 * Created on December 2, 2012, 8:38 PM
 */

#include "ArmorModel.h"
QString ArmorModel::fileName = "armors.txt";

///
///Reads each Armor Object detail from file and returns in a vector
///
vector<QStringList> ArmorModel::select(){
    
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
