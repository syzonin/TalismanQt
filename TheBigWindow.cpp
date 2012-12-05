/*
 * File:   TheBigWindow.cpp
 * Author: Si
 *
 * Created on November 13, 2012, 7:20 PM
 */

#include "TheBigWindow.h"

TheBigWindow::TheBigWindow() {
    widget.setupUi(this);
    QFontDatabase::addApplicationFont("fonts/CaxtonBold.ttf");//Caxton Bk BT
    QFontDatabase::addApplicationFont("fonts/CaxtonLight.ttf");//Caxton Lt BT
    QFontDatabase::addApplicationFont("fonts/Windlass.ttf");//Windlass
  
    //Initialize objects
    board = new MapBoard;
    die = new DieWidget;    
    playerDeck = new CharacterCardDeck;
    adventureDeck = new AdventureCardDeck;
    playerDeck->setToolTip("Double-click to draw a player card");
    
    //Setup gui
    widget.bigSquare->addWidget(board);
    widget.arena->addWidget(playerDeck);
    widget.arena->addWidget(adventureDeck);
    widget.movementLayout->insertWidget(0,die);
    die->hide();
    widget.btnLeft->hide();
    widget.btnLeft->setToolTip("Move counterclockwise");
    widget.btnRight->hide();
    widget.btnRight->setToolTip("Move clockwise");
    widget.btnYes->hide();
    widget.btnNo->hide();
    widget.btnRollDie->hide();
    widget.iLabel->show();
    widget.txtLog->show();
    
    //Set signals for buttons
    connect(widget.btnRollDie, SIGNAL(clicked()), this, SLOT(btnRollDieClicked()));
    connect(widget.btnLeft, SIGNAL(clicked()), this, SLOT(btnCounterClockwise()));
    connect(widget.btnRight, SIGNAL(clicked()), this, SLOT(btnClockwise()));
    connect(widget.btnYes, SIGNAL(clicked()), this, SLOT(btnYesClicked()));
    connect(widget.btnNo, SIGNAL(clicked()), this, SLOT(btnNoClicked()));
    connect(playerDeck, SIGNAL(doubleClicked()), this, SLOT(playerDeckDoubleClicked()));
    connect(adventureDeck, SIGNAL(doubleClicked()), this, SLOT(adventureDeckDoubleClicked()));
}

TheBigWindow::~TheBigWindow() {
}

void TheBigWindow::playerDeckDoubleClicked() {
    if (player != NULL) {
        playerDeck->hide();
        player = playerDeck->drawCard();
        widget.arena->insertWidget(0,player);
        player->show();
        MapSquare *ms = board->getMapSquare(player->getXCord(),player->getYCord());
        ms->addCharacter(*player);
        widget.btnRollDie->show();
        die->show();
        string i = "You have landed on <b>" + ms->getSquareName() + "</b> in the <b>" + ms->getSquareRegion()
        + "</b> region. <br><br>" + ms->getInstructions();
        widget.txtLog->setHtml(QString::fromStdString(i).replace("\\n","<br>"));
    } 
}

void TheBigWindow::adventureDeckDoubleClicked() {
    adventureDeck->hide();
    AdventureCard* a = adventureDeck->drawCard();
    widget.arena->addWidget(a);
    a->show();
}

void TheBigWindow::btnRollDieClicked() {
    die->roll();
    remainder = die->getRolledNumber();
    widget.btnRollDie->hide();
    widget.btnLeft->show();
    widget.btnRight->show();
    if ((player->getXCord() == 5 && player->getYCord() == 5) && (player->getXCord() == 5 && player->getYCord() == 2) ){
    }
    else {
        widget.btnYes->hide();
        widget.btnNo->hide();
    }

}

void TheBigWindow::btnCounterClockwise() {
    MapSquare *ms = board->getMapSquare(player->getXCord(),player->getYCord());
    if (ms->getSquareRegion() == "Inner"){
        remainder = 1;
        if ((player->getXCord() == 2) && (player->getYCord() == 2)){
            remainder =-7;
        }
        widget.lblStatus->setText("");
        widget.btnYes->hide();
        widget.btnNo->hide();
    }
    remainder *=(-1);
    moveChar(remainder);
}

void TheBigWindow::btnClockwise() {
    MapSquare *ms = board->getMapSquare(player->getXCord(),player->getYCord());
    if (ms->getSquareRegion() == "Inner"){
        remainder = 1;
        if ((player->getXCord() == 3) && (player->getYCord() == 2)){
            remainder =-7;
        }
        widget.lblStatus->setText("");
        widget.btnYes->hide();
        widget.btnNo->hide();
    }
    moveChar(remainder);
}

void TheBigWindow::btnYesClicked(){
    moveRegions();
    if (player->getCurrentLocation() == "Plain of Peril"){
        widget.btnRollDie->hide();
        widget.btnLeft->show();
        widget.btnRight->show();
    }
    else if (remainder > 1){
        remainder -=1;
        widget.btnLeft->show();
        widget.btnRight->show();
        string sRemainder = static_cast<ostringstream*>( &(ostringstream() << remainder) )->str();
        string i;
        if (remainder == 1)
              i = "Move " + sRemainder + " more square.";
        else 
             i = "Move " + sRemainder + " more squares.";
        widget.lblStatus->setText(QString::fromStdString(i));
    }
    else {
        widget.btnRollDie->show();
    }
    if (player->getXCord() == 3 && player->getYCord() == 3){ 
        widget.btnLeft->hide();
        widget.btnRight->hide();
        widget.btnRollDie->hide();
        widget.lblStatus->setText("You have reached the \n crown of command!");
    }
    if (player->getXCord() == 6 && player->getYCord() == 2){
        widget.btnLeft->hide();
    }
    widget.lblStatus->setText("");
    widget.btnYes->hide();
    widget.btnNo->hide(); 
    
}

void TheBigWindow::btnNoClicked(){
    if (direction == "counter"){
        remainder *=(-1);
    }
    else if (direction == "insignificant"){
        remainder = 0;
        widget.btnLeft->show();
        widget.btnRight->show(); 
    }
    moveChar(remainder);
    widget.lblStatus->setText("");
    widget.btnYes->hide();
    widget.btnNo->hide();
    
    if ((player->getXCord() == 5) && (player->getYCord() == 2)){
        widget.lblStatus->setText(QString::fromStdString("Do you want to go back?"));
        widget.btnYes->show();
        widget.btnNo->show();

    }
}

void TheBigWindow::moveRegions(){
    MapSquare *ms = board->getMapSquare(player->getXCord(),player->getYCord());
    string region = ms->getSquareRegion();
    string name = ms->getSquareName();
    ms->removeCharacter(*player);
    if (region == "Outer"){
        ms = board->getMapSquare(5,2);
    }
    else if (region == "Middle" && name == "Hills"){
        ms = board->getMapSquare(6,2);
    }
    else if (region == "Middle"){
        ms = board->getMapSquare(4,4);
        remainder = 0;
    }
    else if (region == "Inner" && name == "Plain of Peril"){
        ms = board->getMapSquare(5,5);
        remainder = 0;
    }
    else if (region == "Inner"){
        ms = board->getMapSquare(3,3);
    }
    ms->addCharacter(*player);
    player->move(ms->getSquareName(), ms->getSquareRegion(), ms->getXCord(), ms->getYCord());
    string i = "You have landed on <b>" + ms->getSquareName() + "</b> in the <b>" + ms->getSquareRegion()
        + "</b> region.<br><br>" + ms->getInstructions();
    widget.txtLog->setHtml(QString::fromStdString(i).replace("\\n","<br>"));
}

void TheBigWindow::moveChar(int roll){
    int index = 0;
    int newIndex = 0;
    vector<MapSquare*> v;
    MapSquare *ms = board->getMapSquare(player->getXCord(),player->getYCord());
    string s1 = ms->getSquareRegion();
    v = board->getRegionVector(s1);

    for (unsigned int i = 0; i<v.size(); i++){
        if(v.at(i) == ms){
            index = i;
            break;
        }
    }
    
    newIndex = (index + remainder);
    widget.btnLeft->show();
    widget.btnRight->show();
    
    if ((s1 == "Outer") && (((index < 16) && (newIndex >= 16)) || ((index > 16) && (newIndex <= 16)) )){
        widget.lblStatus->setText(QString::fromStdString("Do you want to cross?"));
        if (newIndex >16){
            remainder = newIndex - 16;
            direction = "clockwise";
        }
        else if (newIndex < 16){
            remainder = 16 - newIndex;
            direction = "counter";
        }
        else {
            remainder = 0;
        }
        ms->removeCharacter(*player);
        ms = v.at(16);
        ms->addCharacter(*player);
        player->move(ms->getSquareName(), ms->getSquareRegion(), ms->getXCord(), ms->getYCord());
        widget.btnLeft->hide();
        widget.btnRight->hide();
        widget.btnYes->show();
        widget.btnNo->show();
    } 
    else if ((s1 == "Middle") && (((index < 8) && (newIndex > 8)) || ((index > 8) && (newIndex < 8))) ){
        widget.lblStatus->setText(QString::fromStdString("Do you want to cross?"));
        if (newIndex >8){
            remainder = newIndex - 8;
            direction = "clockwise";
        }
        else if (newIndex < 8){
            remainder = 8 - newIndex;
            direction = "counter";
        }
        ms->removeCharacter(*player);
        ms = v.at(8);
        ms->addCharacter(*player);
        player->move(ms->getSquareName(), ms->getSquareRegion(), ms->getXCord(), ms->getYCord());
        widget.btnLeft->hide();
        widget.btnRight->hide();
        widget.btnYes->show();
        widget.btnNo->show();
    }
    else if ((s1 == "Middle") && (((index < 11) && (newIndex >= 11)) || ((index > 11) && (newIndex <= 11)) )){
        if (newIndex >11){
            remainder = newIndex - 11;
            direction = "clockwise";
        }
        else if (newIndex < 11){
            remainder = 11 - newIndex;
            direction = "counter";
        }
        else {
            remainder = 0;
        }
        ms->removeCharacter(*player);
        ms = v.at(11);
        ms->addCharacter(*player);
        player->move(ms->getSquareName(), ms->getSquareRegion(), ms->getXCord(), ms->getYCord());
        widget.btnLeft->hide();
        widget.btnRight->hide();
        widget.lblStatus->setText(QString::fromStdString("Do you want to go back?"));
        widget.btnYes->show();
        widget.btnNo->show();
    } 
    else if ((s1 == "Inner") && ((newIndex == 0) || (newIndex == 8))){
        ms->removeCharacter(*player);
        ms = v.at(0);
        ms->addCharacter(*player);
        player->move(ms->getSquareName(), ms->getSquareRegion(), ms->getXCord(), ms->getYCord());
        widget.btnYes->show();
        widget.btnNo->show();
        direction = "insignificant";
    }
    else if ((s1 == "Inner") && ((newIndex == 4))){
        ms->removeCharacter(*player);
        ms = v.at(4);
        ms->addCharacter(*player);
        player->move(ms->getSquareName(), ms->getSquareRegion(), ms->getXCord(), ms->getYCord());
        widget.lblStatus->setText(QString::fromStdString("Do you want to go back?"));
        widget.btnYes->show();
        widget.btnNo->show();
        direction = "insignificant";
    }
    
    else if ((s1 == "Inner")){
        ms->removeCharacter(*player);
        ms = v.at(index+remainder);
        ms->addCharacter(*player);
        player->move(ms->getSquareName(), ms->getSquareRegion(), ms->getXCord(), ms->getYCord());    
    }
    else {
        if (newIndex <0){
            newIndex += v.size();
        }
        else {
            newIndex = (index + remainder)%v.size();
        }
        ms->removeCharacter(*player);
        ms = v.at(newIndex);
        ms->addCharacter(*player);
        player->move(ms->getSquareName(), ms->getSquareRegion(), ms->getXCord(), ms->getYCord());
        widget.btnLeft->hide();
        widget.btnRight->hide();
        widget.btnRollDie->show();
    }
    string i = "You have landed on <b>" + ms->getSquareName() + "</b> in the <b>" + ms->getSquareRegion()
        + "</b> region.<br><br>" + ms->getInstructions();
    widget.txtLog->setHtml(QString::fromStdString(i).replace("\\n","<br>"));
}