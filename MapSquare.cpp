/* 
* File:   mapSquare.cpp
* Author: Si
* 
* Created on October 17, 2012, 6:15 PM
*/

#include "MapSquare.h"
///
///Default Constructor.
///
MapSquare::MapSquare() {
    setValues(0,0,0,"","","");
}
///
///Constructor.
///
MapSquare::MapSquare(int x, int y, int mCard, string region, string name, string ins){
    setValues(x, y, mCard, region, name, ins);
}
///
///private method to initialize variables
///
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
///
///Adds character to map square
///
void MapSquare::addCharacter(Character& character){
    vector<Character*>::iterator m;
    for (m = charactersPresent.begin(); m != charactersPresent.end(); m++) { 
            if (&character == *m) return;
    }
    charactersPresent.push_back(&character);
    update();
}
///
///Removes character from map square
///
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
///
///Adds card to map square
///
void MapSquare::addCard(AdventureCard& c){

    adventureCards.push_back(&c);
    if (adventureCards.size() != 1)
        sortCards();
    //update();
}
///
///Removes card from map square
///
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
///
///Sorts cards on map square
///
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
///
///Returns vector of adventure cards on map square
///
vector<AdventureCard*>& MapSquare::getAdventureCards(){ return adventureCards; }
///
///Sets map square name
///
void MapSquare::setSquareName(string name){ squareName = name; }
///
///Returns map square name
///
string MapSquare::getSquareName(){ return squareName; }
///
///Sets map square region.
///
void MapSquare::setSquareRegion(string region){ squareRegion = region; }
///
///Returns map square region.
///
string MapSquare::getSquareRegion(){ return squareRegion; }
///
///Sets map square instructions
///
void MapSquare::setInstructions(string ins){ instructions = ins; }
///
///Returns map square instructions
///
string MapSquare::getInstructions(){ return instructions; }
///
///Returns x-coordinate of map square.
///
int MapSquare::getXCord(){ return xCord; }
///
///Returns y-coordinate of map square.
///
int MapSquare::getYCord(){ return yCord; }
///
///Returns width of map square.
///
int MapSquare::getWidth(){ return p.width(); }
///
///Returns height of map square.
///
int MapSquare::getHeight(){ return p.height(); }
///
///Returns max number of cards the map square can hold.
///
int  MapSquare::getMaxCard(){ return maxCard; }
///
///Returns number of cards the map  square currently holds
///
int  MapSquare::getNumCard() { return numCard; }
///
///Sets number of cards the map square currently holds
///
void  MapSquare::setNumCard(int n) { numCard = n; }
///
///Paints the map square
///
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
