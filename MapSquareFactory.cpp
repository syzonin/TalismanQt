/* 
 * File:   MapSquareFactory.cpp
 * Author: Si
 * 
 * Created on November 12, 2012, 9:46 PM
 */

#include "MapSquareFactory.h"
///
///Default constructor
///Retrieves data from mapsquare model
///
MapSquareFactory::MapSquareFactory() {
    entries = MapSquareModel::select();
}
///
///Destructor
///
MapSquareFactory::~MapSquareFactory() {
    for (unsigned int i = 0; i < entries.size(); ++i) entries.at(i).clear();
    entries.clear();
}
///
///Returns an instance to the class passed as parameter
///
MapSquare* MapSquareFactory::getClass(int row) {
   
    int xCord=0, yCord=0, mCard=0;
    string region = "", name = "";
    string ins = "";

    QStringList rowData = entries.at(row);
    xCord = rowData.at(0).toInt();
    yCord = rowData.at(1).toInt();
    region = rowData.at(2).toStdString();
    name = rowData.at(3).toStdString();
    ins = rowData.at(4).toStdString();
    mCard = rowData.at(5).toInt();
    if (name == "Black Knight") { return new BlackKnight(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Castle") { return new Castle(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Chapel") { return new Chapel(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Chasm") { return new Chasm(xCord, yCord, mCard, region, name, ins); }
    else if (name == "City") { return new City(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Crags") { return new Crags(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Crown of Command") { return new CrownOfCommand(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Crypt") { return new Crypt(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Cursed Glade") { return new CursedGlade(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Desert") { return new Desert(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Dice with Death") { return new DiceWithDeath(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Forest") { return new Forest(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Graveyard") { return new Graveyard(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Mines") { return new Mines(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Pits") { return new Pits(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Plain of Peril") { return new PlainOfPeril(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Portal of Power") { return new PortalOfPower(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Sentinel") { return new Sentinel(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Tavern") { return new Tavern(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Temple") { return new Temple(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Valley of Fire") { return new ValleyOfFire(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Vampire's Tower") { return new VampiresTower(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Village") { return new Village(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Warlock's Cave") { return new WarlocksCave(xCord, yCord, mCard, region, name, ins); }
    else if (name == "Werewolf Den") { return new WerewolfDen(xCord, yCord, mCard, region, name, ins); }
    else { return new DrawSquare(xCord, yCord, mCard, region, name, ins); }
}

