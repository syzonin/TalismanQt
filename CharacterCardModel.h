/* 
 * File:   CharacterCardModel.h
 * Author: Alex
 *
 * Created on November 7, 2012, 7:35 PM
 */

#ifndef CHARACTERCARDMODEL_H
#define	CHARACTERCARDMODEL_H
#include <string>
#include <vector>
#include <QFile>
#include <QString>
#include <QStringList>
#include <QTextStream>
using namespace std;

class CharacterCardModel {
public:
    static vector<QStringList> select();
private:
    static QString fileName;
};

#endif	/* CHARACTERCARDMODEL_H */

