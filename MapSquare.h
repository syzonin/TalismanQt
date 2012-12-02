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
//        MapSquare(int, int);
        MapSquare(int,int,int,string,string,string);
        virtual ~MapSquare();
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
        int getMaxCards();
        void setNumCards(int);
        int getNumCards();
        //implement: 
        //virtual int execute() = 0;
        //void rollDie();
        //void drawCard();
        
        
    protected:
        void paintEvent(QPaintEvent *event);
        vector<Character*>  charactersPresent;
        string squareName;
        string squareRegion;
        string instructions;
        int xCord;
        int yCord;
        int maxCards;
        int numCards;
};

#endif	/* MAPSQUARE_H */

