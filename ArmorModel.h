/* 
 * File:   ArmorModel.h
 * Author: Jay
 *
 * Created on December 2, 2012, 8:38 PM
 */

#ifndef ARMORMODEL_H
#define	ARMORMODEL_H

#include <string>
#include <vector>
#include <QFile>
#include <QString>
#include <QStringList>
#include <QTextStream>
using namespace std;

class ArmorModel{
public:
    static vector<QStringList> select();
private:
    static QString fileName;
};


#endif	/* ARMORMODEL_H */

