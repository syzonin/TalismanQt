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
#include "AdventureCardDeck.h"
#include <cstdlib>
#include <iostream>
#include <QPushButton>
using namespace std;

class MapSquare : public QWidget {
    public:
        MapSquare();
        MapSquare(int,int,int,string,string,string);
        void addCharacter(Character&);
        void removeCharacter(Character&);
        void sortCards();
        void addCard(AdventureCard&);
        void removeCard(AdventureCard&);
        vector<AdventureCard*>& getAdventureCards();
        
        void setSquareName(string);
        string getSquareName();
        void setSquareRegion(string);
        string getSquareRegion();
        void setInstructions(string);
        string getInstructions();
        int getXCord();
        int getYCord();
        int getWidth();
        int getHeight();
        int getMaxCard();
        int getNumCard();
        void setNumCard(int);
        virtual void execute(AdventureCardDeck*) = 0;
    protected:
        void paintEvent(QPaintEvent *event);
        vector<Character*>  charactersPresent;
        vector<AdventureCard*> adventureCards;
        string squareName;
        string squareRegion;
        string instructions;
        int xCord;
        int yCord;
        unsigned int maxCard;
        int numCard;
        QPixmap p;
    private:
        void setValues(int,int,int,string,string,string);
};

#endif	/* MAPSQUARE_H */

