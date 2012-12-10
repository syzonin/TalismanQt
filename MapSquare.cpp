/* 
* File:   mapSquare.cpp
* Author: Si
* 
* Created on October 17, 2012, 6:15 PM
*/

#include "MapSquare.h"

MapSquare::MapSquare() {
    setValues(0,0,0,"","","");
}

MapSquare::MapSquare(int x, int y, int mCard, string region, string name, string ins){
    setValues(x, y, mCard, region, name, ins);
}

void MapSquare::setValues(int x, int y, int mCard, string region, string name, string ins){
    xCord = x;
    yCord = y;
    maxCard = mCard;
    numCard = 0;
    squareRegion = region;
    squareName = name;
    instructions = ins;
    //Set widget size to fit square sprite
    p = *(new QPixmap(QString("board/%1%2.png").arg(xCord).arg(yCord)));
    this->setFixedSize(p.width(),p.height());
    //Set tool tip to show description
    this->setToolTip(QString::fromStdString(squareName) + "\n" + 
            QString::fromStdString(instructions).replace("\\n","\n"));
    
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

void MapSquare::addCard(AdventureCard& c){

    adventureCards.push_back(&c);
    if (adventureCards.size() != 1)
        sortCards();
    //update();
}

void MapSquare::removeCard(AdventureCard& c){
    vector<AdventureCard*>::iterator m;
    if (adventureCards.size() == 1){
        adventureCards.clear();
    }
    else {
        for (m = adventureCards.begin(); m != adventureCards.end(); m++) { 
                if (&c == *m)
                    adventureCards.erase(m);
        }
    }
    //update();
}

void MapSquare::sortCards(){
    
    AdventureCard* temp;
    //bubble sort
    for (unsigned int i = 0; i< adventureCards.size(); i++){
        for (unsigned int j = (adventureCards.size()-1); j >= (i+1); j++){
            if (adventureCards[j]->getEncounterNumber() > adventureCards[j-1]->getEncounterNumber()){
                temp = adventureCards[j];
                adventureCards[j]=adventureCards[j-1];
                adventureCards[j-1]=temp;
            }
        }
    }
}

vector<AdventureCard*>& MapSquare::getAdventureCards(){ return adventureCards; }

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

int  MapSquare::getMaxCard(){ return maxCard; }
int  MapSquare::getNumCard() { return numCard; }
void  MapSquare::setNumCard(int n) { numCard = n; }

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
