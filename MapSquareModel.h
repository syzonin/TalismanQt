/* 
 * File:   MapSquareModel.h
 * Author: Si
 *
 * Created on November 12, 2012, 9:25 PM
 */

#ifndef MAPSQUAREMODEL_H
#define	MAPSQUAREMODEL_H
#include <string>
#include <vector>
#include <QFile>
#include <QString>
#include <QStringList>
#include <QTextStream>
using namespace std;

class MapSquareModel {
public:
    static vector<QStringList> select();
private:
    static QString fileName;

};

#endif	/* MAPSQUAREMODEL_H */

