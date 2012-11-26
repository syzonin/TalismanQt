/* 
 * File:   mapSquare.h
 * Author: Si
 *
 * Created on October 17, 2012, 6:15 PM
 */

#ifndef MAPSQUARE_H
#define	MAPSQUARE_H
#include <string>
#include <list>
#include <vector>
#include <QWidget>
#include "Character.h"
#include <cstdlib>
#include <iostream>
#include <QPushButton>
using namespace std;

class MapSquare : public QWidget {
    public:
        MapSquare(int, int);
        MapSquare(int,int,string,string,string);
        void addCharacter(Character&);
        void removeCharacter(Character&);
        void setSquareName(string);
        string getSquareName();
        void setSquareRegion(string);
        string getSquareRegion();
        void setInstructions(string);
        string getInstructions();
        int getXCord();
        int getYCord();
        
    protected:
        void paintEvent(QPaintEvent *event);
        vector<Character*>  charactersPresent;
        string squareName;
        string squareRegion;
        string instructions;
        int xCord;
        int yCord;
};

#endif	/* MAPSQUARE_H */

