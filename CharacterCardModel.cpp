/* 
 * File:   CharacterCardModel.cpp
 * Author: Alex
 * 
 * Created on November 7, 2012, 7:35 PM
 */

#include "CharacterCardModel.h"

QString CharacterCardModel::fileName = "characters.txt";

vector<QStringList> CharacterCardModel::select() {
    vector<QStringList> result;
    QString data;
    QStringList rowOfData;
    QFile file(fileName);
    
    if (file.open(QFile::ReadOnly)) {
        data = file.readAll();
        file.close();
    }
    
    rowOfData = data.split("\n");
    for (int x = 0; x < rowOfData.size(); x++) {
        result.push_back(rowOfData.at(x).split(";"));
    }
    
    return result;
}