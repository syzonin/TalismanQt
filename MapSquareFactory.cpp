/* 
 * File:   MapSquareFactory.cpp
 * Author: Si
 * 
 * Created on November 12, 2012, 9:46 PM
 */

#include "MapSquareFactory.h"

MapSquareFactory::MapSquareFactory() {
    entries = MapSquareModel::select();
}

MapSquare* MapSquareFactory::getClass(int row) {
   
    int xCord=0, yCord=0;
    string squareRegion = "", squareName = "";
    string instructions = "";


    QStringList rowData = entries.at(row);
    xCord = rowData.at(0).toInt();
    yCord = rowData.at(1).toInt();
    squareRegion = rowData.at(2).toStdString();
    squareName = rowData.at(3).toStdString();
    instructions = rowData.at(4).toStdString();

    return new MapSquare(xCord, yCord, squareRegion, squareName, instructions);
}

MapSquareFactory::~MapSquareFactory() {
    for (unsigned int i = 0; i < entries.size(); ++i) entries.at(i).clear();
    entries.clear();
}

