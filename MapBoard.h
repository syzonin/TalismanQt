/* 
 * File:   MapBoard.h
 * Author: Si
 *
 * Created on November 13, 2012, 4:04 PM
 */

#ifndef _MAPBOARD_H
#define	_MAPBOARD_H
#include "MapSquare.h"
//#include "ui_MapBoard.h"
#include "MapSquareFactory.h"
#include <vector>
#include <QGridLayout>
using namespace std;

class MapBoard : public QWidget {
    Q_OBJECT
public:
    MapBoard();
    virtual ~MapBoard();
    MapSquare* getMapSquare(int,int);
    vector<MapSquare*> getRegionVector(string);
protected:
    vector<MapSquare*> outer;
    vector<MapSquare*> middle;
    vector<MapSquare*> inner;
    vector<MapSquare*> center;
private:
    MapSquare* squares[7][7];
    QGridLayout *board;
    //Ui::MapBoard widget;
};
#endif	/* _MAPBOARD_H */
