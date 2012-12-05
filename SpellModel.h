/* 
 * File:   SpellModel.h
 * Author: Jay
 *
 * Created on December 5, 2012, 1:19 AM
 */

#ifndef SPELLMODEL_H
#define	SPELLMODEL_H

#include <string>
#include <vector>
#include <QFile>
#include <QString>
#include <QStringList>
#include <QTextStream>
using namespace std;

class SpellModel{
public:
    static vector<QStringList> select();
private:
    static QString fileName;
};
#endif	/* SPELLMODEL_H */

