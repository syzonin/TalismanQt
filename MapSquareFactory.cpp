/* 
 * File:   MapSquareFactory.cpp
 * Author: Si
 * 
 * Created on November 12, 2012, 9:46 PM
 */

#include "MapSquareFactory.h"

MapSquareFactory::MapSquareFactory() {
    entries = MapSquareModel::select();
}

MapSquare* MapSquareFactory::getRow(int row) {
   
    int xCord=0, yCord=0, maxCards=0;
    string region = "", name = "";
    string instructions = "";


    QStringList rowData = entries.at(row);
    xCord = rowData.at(0).toInt();
    yCord = rowData.at(1).toInt();
    region = rowData.at(2).toStdString();
    name = rowData.at(3).toStdString();
    instructions = rowData.at(4).toStdString();
    maxCards = rowData.at(5).toInt();
    
    
    
//    if (name == "Black Knight")  return new BlackKnight(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Castle")  return new Castle(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Chapel")  return new Chapel(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Chasm")  return new Chasm(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "City")  return new City(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Crags")  return new Crags(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Crown of Command")  return new CrownOfCommand(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Crypt")  return new Crypt(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Cursed Glade")  return new CursedGlade(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Desert")  return new Desert(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Dice with Death")  return new DiceWithDeath(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Forest")  return new Forest(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Graveyard")  return new Graveyard(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Mines")  return new Mines(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Pits")  return new Pits(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Plain of Peril")  return new PlainOfPeril(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Portal of Power")  return new PortalOfPower(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Runes")  return new Runes(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Sentinel")  return new Sentinel(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Tavern")  return new Tavern(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Temple")  return new Temple(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Valley of Fire")  return new ValleyOfFire(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Vampire's Tower")  return new VampiresTower(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Village")  return new Village(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Warlock's Cave")  return new WarlocksCave(xCord,yCord,maxCards,region,name,instructions);
//    else if (name == "Werewolf Den")  return new WerewolfDen(xCord,yCord,maxCards,region,name,instructions);
//    else 
    //return new DrawSquare(xCord,yCord,maxCards,region,name,instructions);
    return new MapSquare(xCord,yCord,maxCards,region,name,instructions);

}

MapSquareFactory::~MapSquareFactory() {
    for (unsigned int i = 0; i < entries.size(); ++i) entries.at(i).clear();
    entries.clear();
}

