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
#include "GameBoard.h"
#include "ui_TheBigWindow.h"
#include <QFontDatabase>
#include <QFont>
using namespace std;

class TheBigWindow : public QWidget {
    Q_OBJECT
public:
    TheBigWindow();
    virtual ~TheBigWindow();
    AdventureCardDeck* getAdventureDeck();
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
    void adventureDeckDoubleClicked();
    void btnRollEncounterDieClicked();
    void btnAttackClicked();
    void btnExchangeFateClicked();
    void btnAddToFollowersClicked();
    void btnAddToTrophiesClicked();
    void btnEncounterClicked();
    void btnListFollowersClicked();
    void btnListTrophiesClicked();
    void btnExchangeTrophiesClicked();
    void btnEndTurnClicked();
    void updateCharacterStats();
private:
    Ui::TheBigWindow widget;
    DieWidget *die, *die1, *die2; 
    Character *player;
    AdventureCard *card;
    CharacterCardDeck *playerDeck;
    AdventureCardDeck *adventureDeck;
    MapBoard *board;
    int remainder;
    int rowClicked;
    string direction;
};

#endif	/* _THEBIGWINDOW_H */
