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
#include "BlackKnight.h"
#include "Castle.h"
#include "Chapel.h"
#include "Chasm.h"
#include "City.h"
#include "Crags.h"
#include "CrownOfCommand.h"
#include "Crypt.h"
#include "CursedGlade.h"
#include "Desert.h"
#include "DiceWithDeath.h"
#include "DrawSquare.h"
#include "Forest.h"
#include "Graveyard.h"
#include "Mines.h"
#include "Pits.h"
#include "PlainOfPeril.h"
#include "PortalOfPower.h"
#include "Ruins.h"
#include "Sentinel.h"
#include "Tavern.h"
#include "Temple.h"
#include "ValleyOfFire.h"
#include "VampiresTower.h"
#include "Village.h"
#include "WarlocksCave.h"
#include "WerewolfDen.h"
#include <string>
#include <vector>

class MapSquareFactory{
public:
    MapSquareFactory();
    virtual ~MapSquareFactory();
    MapSquare* getClass(int);
private:
    vector<QStringList> entries;
};


#endif	/* MAPSQUAREFACTORY_H */

