/*
 * File:   GameBoard.cpp
 * Author: Alex
 *
 * Created on November 1, 2012, 8:17 PM
 */

#include "GameBoard.h"

GameBoard::GameBoard() {
    widget.setupUi(this);
    die1 = new DieWidget();
    die2 = new DieWidget();
    
    player = NULL;
    playerDeck = new CharacterCardDeck;
    playerDeck->setToolTip("Double-click to draw a player card");
    card = NULL;
    deck = new AdventureCardDeck;
    deck->setToolTip("Double-click to draw an adventure card");
    
    //Hide all controls
    widget.btnAddToFollowers->hide();
    widget.btnListFollowers->hide();
    widget.btnAddToTrophies->hide();
    widget.btnListTrophies->hide();
    widget.btnExchangeTrophies->hide();
    widget.btnAttack->hide();
    widget.btnEncounter->hide();
    widget.btnEndTurn->hide();
    widget.btnExchangeFate->hide();
    widget.btnRollDie->hide();
    die1->hide();
    die2->hide();
    
    //Add custom widgets
    widget.diceLayout->addWidget(die1);
    widget.diceLayout->addWidget(die2);
    widget.arena->addWidget(playerDeck,0,0);
    widget.arena->addWidget(deck,0,1);
    
    //Connect signals
    connect(playerDeck, SIGNAL(doubleClicked()), this, SLOT(playerDeckDoubleClicked()));
    connect(deck, SIGNAL(doubleClicked()), this, SLOT(deckDoubleClicked()));
    connect(widget.btnRollDie, SIGNAL(clicked()), this, SLOT(btnRollDieClicked()));
    connect(widget.btnAttack, SIGNAL(clicked()), this, SLOT(btnAttackClicked()));
    connect(widget.btnExchangeFate, SIGNAL(clicked()), this, SLOT(btnExchangeFateClicked()));
    connect(widget.btnAddToFollowers, SIGNAL(clicked()), this, SLOT(btnAddToFollowersClicked()));
    connect(widget.btnAddToTrophies, SIGNAL(clicked()), this, SLOT(btnAddToTrophiesClicked()));
    connect(widget.btnEncounter, SIGNAL(clicked()), this, SLOT(btnEncounterClicked()));
    connect(widget.btnListFollowers, SIGNAL(clicked()), this, SLOT(btnListFollowersClicked()));
    connect(widget.btnListTrophies, SIGNAL(clicked()), this, SLOT(btnListTrophiesClicked()));
    connect(widget.btnExchangeTrophies, SIGNAL(clicked()), this, SLOT(btnExchangeTrophiesClicked()));
    connect(widget.btnEndTurn, SIGNAL(clicked()), this, SLOT(btnEndTurnClicked()));
}

GameBoard::~GameBoard() {
}

void GameBoard::playerDeckDoubleClicked() {
    playerDeck->hide();
    player = playerDeck->drawCard();
    widget.arena->addWidget(player,0,0);
    widget.btnListFollowers->show();
    widget.btnListTrophies->show();
    widget.btnExchangeTrophies->show();
}

void GameBoard::deckDoubleClicked() {
    widget.btnEncounter->show();
    deck->hide();
    card = deck->drawCard();
    widget.arena->addWidget(card,0,1);
}

void GameBoard::btnEncounterClicked() {
    //Update view
    widget.btnEncounter->hide();
    widget.btnListFollowers->hide();
    widget.btnListTrophies->hide();
    widget.btnExchangeTrophies->hide();
    widget.btnRollDie->show();
    //Update view log
    widget.txtLog->append(
        QString("%1 encounters a %2")
        .arg(QString::fromStdString(player->getTitle()))
        .arg(QString::fromStdString(card->getTitle()))
    );
}

void GameBoard::btnListFollowersClicked () {
    //Update view log
    widget.txtLog->append(QString::fromStdString(player->getTitle()) + " has the following followers:");
    widget.txtLog->append(QString::fromStdString(player->listFollowers()));
}

void GameBoard::btnListTrophiesClicked () {
    //Update view log
    widget.txtLog->append(QString::fromStdString(player->getTitle()) + " has the following trophies:");
    widget.txtLog->append(QString::fromStdString(player->listTrophies()));
}

void GameBoard::btnExchangeTrophiesClicked() {
    //Update view log
    widget.txtLog->append("Exchanging trophies...");
    int *pts = player->exchangeTrophies();
    widget.txtLog->append(QString("+%1 strength").arg(pts[0]));
    widget.txtLog->append(QString("+%1 craft").arg(pts[1]));
}

void GameBoard::btnRollDieClicked() {
    Enemy* e = static_cast<Enemy*>(card);
    //Update view
    if (player->getFateTokens() > 0) widget.btnExchangeFate->show();
    
    //Roll first die
    die1->show();
    die1->roll();
    //Update view log
    widget.txtLog->append(
        QString("%1 rolled a %2")
        .arg(QString::fromStdString(player->getTitle()))
        .arg(QString::number(die1->getRolledNumber()))
    );
    
    //Roll second die
    if (player->allowedAttackRolls(*e) == 2) {
        die2->show();
        die2->roll();
        //Update view log
        widget.txtLog->append(
            QString("%1 rolled a %2")
            .arg(QString::fromStdString(player->getTitle()))
            .arg(QString::number(die2->getRolledNumber()))
        );
    }
    
    //Update view
    widget.btnRollDie->hide();
    widget.btnAttack->show();
}

void GameBoard::btnAttackClicked() {
    die2->hide();
    widget.btnAttack->hide();
    widget.btnExchangeFate->hide();
        
    //Character attacks
    Enemy* e = static_cast<Enemy*>(card);
    int a = 0;
    if (player->allowedAttackRolls(*e) == 1) {
        a = player->attackRoll(*e, die1->getRolledNumber());
    } else {
        a = player->attackRoll(*e, die1->getRolledNumber(), die2->getRolledNumber());
    }
    //Update view log
    widget.txtLog->append(
        QString("%1 performs an attack roll of %2...")
        .arg(QString::fromStdString(player->getTitle()))
        .arg(QString::number(a))
    );   
    //Enemy rolls
    die1->roll();
    int b = e->attackRoll(die1->getRolledNumber());
    widget.txtLog->append(
        QString("%1 rolled a %2")
        .arg(QString::fromStdString(e->getTitle()))
        .arg(QString::number(die1->getRolledNumber()))
    );
    //Enemy attacks
    widget.txtLog->append(
        QString("%1 performs an attack roll of %2...")
        .arg(QString::fromStdString(e->getTitle()))
        .arg(QString::number(b))
    );
    
    if (a < b) { // Enemy wins
        widget.txtLog->append(QString("%1 wins").arg(QString::fromStdString(e->getTitle())));
        player->setLifePoints(player->getLifePoints()-1);
        widget.hLayout->removeWidget(card);
        card->hide();
        card = NULL;
        deck->show();
        die1->hide();
        die2->hide();
        widget.btnRollDie->hide();
        
        if (player->getLifePoints() > 0) {
            widget.btnListFollowers->show();
            widget.btnListTrophies->show();
            widget.btnExchangeTrophies->show();
        } else {
            player->hide();
            playerDeck->show();
            widget.txtLog->append(QString("%1 died").arg(QString::fromStdString(player->getTitle())));
        }
    } else if (a > b) { // Character wins
        widget.txtLog->append(QString("%1 wins").arg(QString::fromStdString(player->getTitle())));
        widget.btnRollDie->hide();
        widget.btnAddToTrophies->show();
        widget.btnEndTurn->show();
        if (player->getTitle() == "DragonRider") widget.btnAddToFollowers->show();
    } else {
        widget.txtLog->append("Stand-off!");     
        widget.btnRollDie->show();
    }
}

void GameBoard::btnExchangeFateClicked() {
    //Update view
    die2->hide();
    widget.btnExchangeFate->hide();
    //Roll die
    Enemy* e = static_cast<Enemy*>(card);
    die1->roll();
    player->fateRoll(*e, die1->getRolledNumber());
    //Update view log
    widget.txtLog->append(QString::fromStdString(player->getTitle()) + " exchanges a fate token");
    widget.txtLog->append(
        QString("%1 rolled a %2")
        .arg(QString::fromStdString(player->getTitle()))
        .arg(QString::number(die1->getRolledNumber()))
    );
}

void GameBoard::btnAddToFollowersClicked() {
    //Update view
    btnEndTurnClicked();
    //Add to character's trophies
    Enemy* e = static_cast<Enemy*>(card);
    DragonRider* p = static_cast<DragonRider*>(player);
    p->addFollower(*e);
    card = NULL;
    //Update view log
    widget.txtLog->append(QString::fromStdString(e->getTitle()) + " added to followers");
}

void GameBoard::btnAddToTrophiesClicked() {
    //Update view
    btnEndTurnClicked();
    //Add to character's trophies
    Enemy* e = static_cast<Enemy*>(card);
    player->addTrophy(*e);
    card = NULL;
    //Update view log
    widget.txtLog->append(QString::fromStdString(e->getTitle()) + " added to trophies");
}

void GameBoard::btnEndTurnClicked() {
    //Update view
    card->hide();
    deck->show();
    die1->hide();
    die2->hide();
    widget.hLayout->removeWidget(card);
    widget.btnAddToFollowers->hide();
    widget.btnAddToTrophies->hide();
    widget.btnEndTurn->hide();
    widget.btnListFollowers->show();
    widget.btnListTrophies->show();
    widget.btnExchangeTrophies->show();
}