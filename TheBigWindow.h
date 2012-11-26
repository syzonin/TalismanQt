/* 
 * File:   TheBigWindow.h
 * Author: Si
 *
 * Created on November 13, 2012, 7:20 PM
 */

#ifndef _THEBIGWINDOW_H
#define	_THEBIGWINDOW_H

#include "CharacterFactory.h"
#include "CharacterCardDeck.h"
#include "AdventureCardDeck.h"
#include "DieWidget.h"
#include "MapSquare.h"
#include "MapBoard.h"
#include "ui_TheBigWindow.h"

class TheBigWindow : public QWidget {
    Q_OBJECT
public:
    TheBigWindow();
    virtual ~TheBigWindow();
    int getDieRoll();
    void moveChar(int);
    void moveRegions();
public slots:
    void btnRollDieClicked();
    void btnCounterClockwise();
    void btnClockwise();
    void btnYesClicked();
    void btnNoClicked();
    void playerDeckDoubleClicked();
private:
    Ui::TheBigWindow widget;
    DieWidget *die; 
    Character *c1;
    CharacterCardDeck *playerDeck;
    AdventureCardDeck *adventureDeck;
    MapBoard *board;
    int remainder;
    int rowClicked;
    string direction;
};

#endif	/* _THEBIGWINDOW_H */
