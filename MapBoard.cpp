/*
 * File:   MapBoard.cpp
 * Author: Si
 *
 * Created on November 13, 2012, 4:04 PM
 */

#include "MapBoard.h"

MapBoard::MapBoard() {
    //widget.setupUi(this);
    board = new QGridLayout;
    MapSquareFactory* m = new MapSquareFactory;
    
    for (int i=0; i<49; i++){
        MapSquare *ms = m->getRow(i);
        if (i<24){
            outer.push_back(ms);
        }
        else if (i<40){
            middle.push_back(ms);
        }
        else if (i < 48) {
            inner.push_back(ms);
        } else {
            center.push_back(ms);
        }
        //widget.board->addWidget(ms,ms->getXCord(),ms->getYCord());
        board->addWidget(ms,ms->getXCord(),ms->getYCord());
    }
    
    this->setLayout(board);
}

MapBoard::~MapBoard() {
    for (vector<MapSquare*>::iterator it = outer.begin(); it != outer.end(); ++it) delete *it;
    outer.clear();
    for (vector<MapSquare*>::iterator it = middle.begin(); it != middle.end(); ++it) delete *it;
    middle.clear();
    for (vector<MapSquare*>::iterator it = inner.begin(); it != inner.end(); ++it) delete *it;
    inner.clear();
    for (vector<MapSquare*>::iterator it = center.begin(); it != center.end(); ++it) delete *it;
    center.clear();
}

MapSquare* MapBoard::getMapSquare(int i, int j) { 
    //return static_cast<MapSquare*>(widget.board->itemAtPosition(i,j)->widget());
    return static_cast<MapSquare*>(board->itemAtPosition(i,j)->widget());
    //return *(map[i][j]); 
}

vector<MapSquare*> MapBoard::getRegionVector(string region){
    if (region == "Outer"){
        return outer;
    }
    else if (region == "Middle"){
        return middle;
    }
    else if (region == "Inner"){
        return inner;
    }
    else{
        return center;
    }
}