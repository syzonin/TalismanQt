/* 
 * File:   AdventureCardModel.h
 * Author: Alex
 *
 * Created on October 31, 2012, 7:20 PM
 */

#ifndef ADVENTURECARDMODEL_H
#define	ADVENTURECARDMODEL_H
#include <string>
#include <vector>
#include <QFile>
#include <QString>
#include <QStringList>
#include <QTextStream>
using namespace std;

class AdventureCardModel {
public:
    static vector<QStringList> select();
//    static void update(int, QString);
    static void update(QString);
private:
    static QString fileName;
};

#endif	/* ADVENTURECARDMODEL_H */

