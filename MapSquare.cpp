/* 
* File:   mapSquare.cpp
* Author: Si
* 
* Created on October 17, 2012, 6:15 PM
*/

#include "MapSquare.h"

//MapSquare::MapSquare(int theXCord, int theYCord) {
//    //xCord = theXCord;
//    //yCord = theYCord;
//    MapSquare(theXCord, theYCord, 2, "","","");
//}

MapSquare::MapSquare(int theXCord, int theYCord, int mCards, string theSquareRegion, string theSquareName, string theInstructions){
    xCord = theXCord;
    yCord = theYCord;
    maxCards = mCards;
    numCards = 0;
    squareRegion = theSquareRegion;
    squareName = theSquareName;
    instructions = theInstructions;
    this->setToolTip(QString::fromStdString(instructions).replace("\\n","\n"));
}

MapSquare::~MapSquare(){
    for (vector<Character*>::iterator it = charactersPresent.begin(); it != charactersPresent.end(); ++it) delete *it;
    charactersPresent.clear();
}
void MapSquare::addCharacter(Character& character){
    vector<Character*>::iterator m;
    for (m = charactersPresent.begin(); m != charactersPresent.end(); m++) { 
            if (&character == *m) return;
    }
    charactersPresent.push_back(&character);
    update();
}

void MapSquare::removeCharacter(Character& character){
    vector<Character*>::iterator m;
    if (charactersPresent.size() == 1){
        charactersPresent.clear();
    }
    else {
        for (m = charactersPresent.begin(); m != charactersPresent.end(); m++) { 
                if (&character == *m)
                    charactersPresent.erase(m);
        }
    }
    update();
}

void MapSquare::setSquareName(string name){ squareName = name; }

string MapSquare::getSquareName(){ return squareName; }

void MapSquare::setSquareRegion(string region){ squareRegion = region; }

string MapSquare::getSquareRegion(){ return squareRegion; }

void MapSquare::setInstructions(string ins){ instructions = ins; }

string MapSquare::getInstructions(){ return instructions; }

int MapSquare::getXCord(){ return xCord; }

int MapSquare::getYCord(){ return yCord; }

int MapSquare::getMaxCards(){ return maxCards; }
void MapSquare::setNumCards(int i){ numCards = i; }
int MapSquare::getNumCards(){ return numCards; }

//int MapSquare::execute() { return 1;}
void MapSquare::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    if (this->squareRegion == "Outer"){
        painter.setBrush(QBrush(Qt::white));
    }
    else if (this->squareRegion == "Middle"){
        painter.setBrush(QBrush(Qt::yellow));
    }
    else if (this->squareRegion == "Inner"){
        painter.setBrush(QBrush(Qt::blue));
    }
    else {
        painter.setBrush(QBrush(Qt::green));   
    }
    painter.drawRect(0,0,150,150);
    painter.drawText(10, 20, QString::fromStdString(squareName));

    painter.setBrush(QBrush(Qt::red));
    for (unsigned int i = 0; i < charactersPresent.size(); ++i) {
        painter.drawRect(10+15*i,40,10,10);
        //QPushButton *pb = new QPushButton(this);
        //pb->show();
    }
}
