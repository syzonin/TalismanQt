/* 
 * File:   ArmorFactory.h
 * Author: Jay
 *
 * Created on December 2, 2012, 8:38 PM
 */

#ifndef ARMORFACTORY_H
#define	ARMORFACTORY_H

#include "ArmorModel.h"
#include "Armor.h"
#include <string>
#include <vector>

#include "BasicArmor.h"
#include "Shield.h"
#include "Helmet.h"
#include "MirrorShield.h"

class ArmorFactory{
public:
    ArmorFactory();
    virtual ~ArmorFactory();
    vector<string> classNames();
    Armor* getClass(const string);
    
private:
    vector<QStringList> entries;
};

#endif	/* ARMORFACTORY_H */

