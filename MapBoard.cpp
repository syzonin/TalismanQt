/*
 * File:   MapBoard.cpp
 * Author: Si
 *
 * Created on November 13, 2012, 4:04 PM
 */

#include "MapBoard.h"

MapBoard::MapBoard() {
    board = new QGridLayout;
    MapSquareFactory* m = new MapSquareFactory;
    
    //Matrix of cumulative heights
    int height[7][7];
    //Matrix of cumulative widths
    int width[7][7];
    
    for (int index = 0; index < 49; ++index) {
        //Create MapSquare and get its coordinates
        MapSquare *ms = m->getClass(index);
        int x = ms->getXCord();
        int y = ms->getYCord();
        //Matrix of MapSquares
        squares[x][y] = ms;
        //The first entry starts at 0, all others start at cumulative sum of previous in column
        if (x > 0) height[x][y] = height[x-1][y] + squares[x-1][y]->getHeight();
        else height[x][y] = 0;
        //The first entry starts at 0, all others start at cumulative sum of previous in row
        if (y > 0) width[x][y] = width[x][y-1] + squares[x][y-1]->getWidth();
        else width[x][y] = 0;
        //Add widget at calculated x and y, spanning the original image size
        board->addWidget(ms,height[x][y],width[x][y],ms->getHeight(),ms->getWidth());
    }
    
    //x1 = start row, x2 = end row, y1 = start col, y2 = end col
    int x1 = 0, x2 = 6, y1 = 0, y2 = 6, row = 0, col = 0;
    while (true) {
        //Insert into the corresponding vector
        if (x1 == 0 || x2 == 6 || y1 == 0 || y2 == 6) outer.push_back(squares[row][col]);
        else if (x1 == 1 || x2 == 5 || y1 == 1 || y2 == 5) middle.push_back(squares[row][col]);
        else if (x1 == 2 || x2 == 4 || y1 == 2 || y2 == 4) inner.push_back(squares[row][col]);
        else center.push_back(squares[row][col]); // if(x1 == 3 || x2 == 3 || y1 == 3 || y2 == 3) 
        
        //If looped through the whole circle, move "inside"
        if (row == y1+1 && col == x1) {
            ++x1;//shift start col to the right
            --x2;//shift end col to the left
            ++y1;//shift start row to the right
            --y2;//shift end row to the left
            row = y1;//row index
            col = x1;//col index
        } 
        //If moving (forward) along the start row, increase col
        else if (row == y1 && col < x2) ++col;
        //If moving (backward) along the end row, decrease col
        else if (row == y2 && col > x1) --col;
        //If moving (upward) along the start col, decrease row
        else if (col == x1 && row > y1) --row;
        //If moving (downward) along the end col, increase row
        else if (col == x2 && row < y2) ++row;
        //If stepped on center, get out
        else break;
    }
    
    board->setSpacing(0);
    board->setSizeConstraint(QLayout::SetMinimumSize);
    board->setContentsMargins(0, 0, 0, 0);
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
    return squares[i][j];
}

vector<MapSquare*> MapBoard::getRegionVector(string region){
    if (region == "Outer") return outer;
    else if (region == "Middle") return middle;
    else if (region == "Inner") return inner;
    else return center;
}