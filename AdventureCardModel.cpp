/* 
 * File:   AdventureCardModel.cpp
 * Author: Alex
 * 
 * Created on October 31, 2012, 7:20 PM
 */

#include "AdventureCardModel.h"

QString AdventureCardModel::fileName = "adventure_cards.txt";

vector<QStringList> AdventureCardModel::select() {
    vector<QStringList> result;
    QString data;
    QStringList rowOfData, rowData;
    QFile file(fileName);
    
    if (file.open(QFile::ReadOnly)) {
        data = file.readAll();
        rowOfData = data.split("\n");
        file.close();
    }
    
    for (int x = 0; x < rowOfData.size(); x++) {
        result.push_back(rowOfData.at(x).split(";"));
    }
    
    return result;
}

//void AdventureCardModel::update(int index, QString line) {
//    QString data;
//    QStringList rowOfData;
//    QFile file(fileName);
//    
//    if (file.open(QFile::ReadWrite)) {
//        data = file.readAll();
//        rowOfData = data.split("\n");
//        rowOfData.replace(index,line);
//        //data = rowOfData.join("\n").toUtf8();
//        //file.write(rowOfData.join("\n").toUtf8());
////        QTextStream out(&file);    
////        string asdf = rowOfData.join("\n").toStdString();
////        out << asdf;
//        
//        file.close();
//    }
//}

void AdventureCardModel::update(QString contents) {
    QFile file(fileName);
    
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);    
        out << contents;
        file.close();
    }
}