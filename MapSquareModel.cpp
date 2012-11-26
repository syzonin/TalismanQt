/* 
 * File:   MapSquareModel.cpp
 * Author: Si
 * 
 * Created on November 12, 2012, 9:25 PM
 */

#include "MapSquareModel.h"

QString MapSquareModel::fileName = "mapSquares.txt";

vector<QStringList> MapSquareModel::select() {
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