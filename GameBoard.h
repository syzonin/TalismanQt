/* 
 * File:   GameBoard.h
 * Author: Alex
 *
 * Created on November 1, 2012, 8:17 PM
 */

#ifndef _GAMEBOARD_H
#define	_GAMEBOARD_H

#include "ui_GameBoard.h"
#include "DieWidget.h"
#include "AdventureCardDeck.h"
#include "CharacterCardDeck.h"

class GameBoard : public QWidget {
    Q_OBJECT
public:
    GameBoard();
    virtual ~GameBoard();
    DieWidget *die1, *die2;
    AdventureCardDeck *deck;
    AdventureCard *card;
    CharacterCardDeck *playerDeck;
    Character *player;
public slots:
    void playerDeckDoubleClicked();
    void deckDoubleClicked();
    void btnRollDieClicked();
    void btnAttackClicked();
    void btnExchangeFateClicked();
    void btnAddToFollowersClicked();
    void btnAddToTrophiesClicked();
    void btnEncounterClicked();
    void btnListFollowersClicked();
    void btnListTrophiesClicked();
    void btnExchangeTrophiesClicked();
    void btnEndTurnClicked();
private:
    Ui::GameBoard widget;
};

#endif	/* _GAMEBOARD_H */
