/* 
 * File:   WeaponModel.h
 * Author: Jay
 *
 * Created on December 2, 2012, 7:55 PM
 */

#ifndef WEAPONMODEL_H
#define	WEAPONMODEL_H

#include <string>
#include <vector>
#include <QFile>
#include <QString>
#include <QStringList>
#include <QTextStream>
using namespace std;

class WeaponModel{
public:
    static vector<QStringList> select();
private:
    static QString fileName;
};


#endif	/* WEAPONMODEL_H */

