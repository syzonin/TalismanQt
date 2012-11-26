/* 
 * File:   MapSquareFactory.h
 * Author: Si
 *
 * Created on November 12, 2012, 9:46 PM
 */

#ifndef MAPSQUAREFACTORY_H
#define	MAPSQUAREFACTORY_H
#include "MapSquareModel.h"
#include "MapSquare.h"
#include <string>
#include <vector>

class MapSquareFactory{
public:
    MapSquareFactory();
    virtual ~MapSquareFactory();
    MapSquare* getRow(int);
private:
    vector<QStringList> entries;
};


#endif	/* MAPSQUAREFACTORY_H */

