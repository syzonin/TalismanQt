/* 
 * File:   WeaponModel.cpp
 * Author: Jay
 *
 * Created on December 2, 2012, 7:55 PM
 */

#include "WeaponModel.h"
QString WeaponModel::fileName = "weapons.txt";

///
///Reads each Weapon Object detail from file and returns in a vector
///
vector<QStringList> WeaponModel::select(){
    
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
