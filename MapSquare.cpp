/* 
* File:   mapSquare.cpp
* Author: Si
* 
* Created on October 17, 2012, 6:15 PM
*/

#include "MapSquare.h"

MapSquare::MapSquare() {
    MapSquare(0,0,"","","");
}

MapSquare::MapSquare(int theXCord, int theYCord) {
    MapSquare(theXCord,theYCord,"","","");
}

MapSquare::MapSquare(int theXCord, int theYCord, string theSquareRegion, string theSquareName, string theInstructions){
    xCord = theXCord;
    yCord = theYCord;
    squareRegion = theSquareRegion;
    squareName = theSquareName;
    instructions = theInstructions;
    //Set widget size to fit square sprite
    p = *(new QPixmap(QString("board/%1%2.png").arg(xCord).arg(yCord)));
    this->setFixedSize(p.width(),p.height());
    //Set tool tip to show description
    this->setToolTip(QString::fromStdString(squareName) + "\n" + QString::fromStdString(instructions).replace("\\n","\n"));
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

int MapSquare::getWidth(){ return p.width(); }

int MapSquare::getHeight(){ return p.height(); }

void MapSquare::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    //Paint square sprite
    painter.drawPixmap(0,0,p);  
    //Paint character(s)
    painter.setBrush(QBrush(Qt::red));
    for (unsigned int i = 0; i < charactersPresent.size(); ++i) {
        QPixmap p = charactersPresent.at(i)->getFigure();
        painter.drawPixmap((width()-p.width())/2, (height()-p.height())/2, p);   
        //painter.drawRect(10+15*i,10,10,10);
        //QPushButton *pb = new QPushButton(this);
        //pb->show();
    }
}
