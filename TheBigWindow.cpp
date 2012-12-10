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
    die1 = new DieWidget();
    die2 = new DieWidget();
    player = NULL;
    card = NULL;
    playerDeck = new CharacterCardDeck;
    adventureDeck = new AdventureCardDeck;
    playerDeck->setToolTip("Double-click to draw a player card");
    
    //Add custom widgets
    widget.dicePanel->addWidget(die1);
    widget.dicePanel->addWidget(die2);
    
    //Setup gui
    updateCharacterStats();
    widget.bigSquare->addWidget(board);
    widget.charCardPanel->addWidget(playerDeck);
    widget.deckPanel->addWidget(adventureDeck);
    widget.movementPanel->addWidget(die);
    //Hide all controls
    widget.btnLeft->hide();
    widget.btnRight->hide();
    widget.btnYes->hide();
    widget.btnNo->hide();
    widget.btnRollDie->hide();
    widget.btnAddToFollowers->hide();
    widget.btnAddToTrophies->hide();
    widget.btnAddToObjects->hide();
    widget.btnExchangeTrophies->hide();
    widget.btnAttack->hide();
    widget.btnEncounter->hide();
    widget.btnEndTurn->hide();
    widget.btnExchangeFate->hide();
    widget.btnRollEncounterDie->hide();
    widget.btnCastSpell->hide();
    widget.btnEquipArmor->hide();
    widget.btnEquipWeapon->hide();
    die->hide();
    die1->hide();
    die2->hide();
    
    //Set signals for movement buttons
    connect(widget.btnRollDie, SIGNAL(clicked()), this, SLOT(btnRollDieClicked()));
    connect(widget.btnLeft, SIGNAL(clicked()), this, SLOT(btnCounterClockwise()));
    connect(widget.btnRight, SIGNAL(clicked()), this, SLOT(btnClockwise()));
    connect(widget.btnYes, SIGNAL(clicked()), this, SLOT(btnYesClicked()));
    connect(widget.btnNo, SIGNAL(clicked()), this, SLOT(btnNoClicked()));
    connect(playerDeck, SIGNAL(doubleClicked()), this, SLOT(playerDeckDoubleClicked()));
    connect(adventureDeck, SIGNAL(doubleClicked()), this, SLOT(adventureDeckDoubleClicked()));
    //Connect signals for encounter panel
    connect(widget.btnRollEncounterDie, SIGNAL(clicked()), this, SLOT(btnRollEncounterDieClicked()));
    connect(widget.btnAttack, SIGNAL(clicked()), this, SLOT(btnAttackClicked()));
    connect(widget.btnCastSpell, SIGNAL(clicked()), this, SLOT(btnCastSpellClicked()));
    connect(widget.btnEquipArmor, SIGNAL(clicked()), this, SLOT(btnEquipArmorClicked()));
    connect(widget.btnEquipWeapon, SIGNAL(clicked()), this, SLOT(btnEquipWeaponClicked()));
    connect(widget.btnExchangeFate, SIGNAL(clicked()), this, SLOT(btnExchangeFateClicked()));
    connect(widget.btnAddToFollowers, SIGNAL(clicked()), this, SLOT(btnAddToFollowersClicked()));
    connect(widget.btnAddToTrophies, SIGNAL(clicked()), this, SLOT(btnAddToTrophiesClicked()));
    connect(widget.btnAddToObjects, SIGNAL(clicked()), this, SLOT(btnAddToObjectsClicked()));
    connect(widget.btnEncounter, SIGNAL(clicked()), this, SLOT(btnEncounterClicked()));
    connect(widget.btnListFollowers, SIGNAL(clicked()), this, SLOT(btnListFollowersClicked()));
    connect(widget.btnListObjects, SIGNAL(clicked()), this, SLOT(btnListObjectsClicked()));
    connect(widget.btnListTrophies, SIGNAL(clicked()), this, SLOT(btnListTrophiesClicked()));
    connect(widget.btnExchangeTrophies, SIGNAL(clicked()), this, SLOT(btnExchangeTrophiesClicked()));
    connect(widget.btnEndTurn, SIGNAL(clicked()), this, SLOT(btnEndTurnClicked()));
    //Maximize window
    this->showMaximized();
}

TheBigWindow::~TheBigWindow() {}

AdventureCardDeck*  TheBigWindow::getAdventureDeck(){
    return adventureDeck;
}

void TheBigWindow::updateCharacterStats() {
    int str = 0, cft = 0, fate = 0, gold = 0, life = 0;
    
    if (player != NULL) {
        str = player->getStrength();
        cft = player->getCraft();
        fate = player->getFateTokens();
        gold = player->getGold();
        life = player->getLifePoints();
    }
    
    widget.lblStrPts->setText(QString("%1").arg(str));
    widget.lblCftPts->setText(QString("%1").arg(cft));
    widget.lblFatePts->setText(QString("%1").arg(fate));
    widget.lblGoldPts->setText(QString("%1").arg(gold));
    widget.lblLifePts->setText(QString("%1").arg(life));
}

void TheBigWindow::playerDeckDoubleClicked() {
    if (player == NULL) {
        playerDeck->hide();
        player = playerDeck->drawCard();
        widget.charCardPanel->addWidget(player);
        player->show();
        MapSquare *ms = board->getMapSquare(player->getXCord(),player->getYCord());
        ms->addCharacter(*player);
        widget.btnRollDie->show();
        die->show();
        string i = "You have landed on <b>" + ms->getSquareName() + "</b> in the <b>" + ms->getSquareRegion()
        + "</b> region. <br><br>" + ms->getInstructions();
        widget.txtLog->setHtml(QString::fromStdString(i).replace("\\n","<br>"));
        updateCharacterStats();
        
        ArmorFactory *af = new ArmorFactory();
        WeaponFactory *wf = new WeaponFactory();
        SpellFactory *sf = new SpellFactory();
        player->addObject(wf->getWeapon("Axe"));
        player->addObject(sf->getSpell("Cheat Fate"));
        player->addObject(af->getArmor("Basic Armor"));
        player->addObject(wf->getWeapon("Runesword"));
        player->addObject(sf->getSpell("Healing"));
        player->addObject(af->getArmor("Helmet"));
        player->addObject(wf->getWeapon("Frostbite"));
        player->addObject(sf->getSpell("Weakness"));
        player->addObject(af->getArmor("Shield"));
        widget.btnEncounter->show();
    } 
}

void TheBigWindow::adventureDeckDoubleClicked() {
    widget.btnEncounter->show();
    adventureDeck->hide();
    card = adventureDeck->drawCard();
    widget.adventureCardPanel->addWidget(card);
}

void TheBigWindow::btnCastSpellClicked() {
    for (int i = 0; i < player->allowedSpells(); ++i) {
        SpellDialog *spells = new SpellDialog(this, player, activeSpells);
        spells->exec();
        if (spells->result() != 0) widget.btnCastSpell->hide();
    }
}  

void TheBigWindow::btnEquipArmorClicked() {
    for (int i = 0; i < player->allowedArmors(); ++i) {
        ArmorDialog *armors = new ArmorDialog(this, player, activeArmors);
        armors->exec();
        if (armors->result() != 0) widget.btnEquipArmor->hide();    
    }
}    

void TheBigWindow::btnEquipWeaponClicked() {
    for (int i = 0; i < player->allowedWeapons(); ++i) {
        WeaponDialog *weapons = new WeaponDialog(this, player, activeWeapons);
        weapons->exec();
        if (weapons->result() != 0) widget.btnEquipWeapon->hide();    
    }
}    
    
void TheBigWindow::btnEncounterClicked() {
    //Update view
    AdventureCardFactory *ef = new AdventureCardFactory;
    vector<AdventureCard*> cards;
    cards.push_back(ef->getClass("Banshee"));
    cards.push_back(ef->getClass("Bear"));
    cards.push_back(ef->getClass("Goblin"));
           
    card = cards.at(cards.size()-1);
    widget.adventureCardPanel->addWidget(card);
    widget.btnEncounter->hide();
    widget.btnExchangeTrophies->hide();
    if (card->getType() == "Enemy") {
        widget.btnRollEncounterDie->show();
        widget.btnCastSpell->show();
        widget.btnEquipArmor->show();
        widget.btnEquipWeapon->show();
    } else {
        widget.btnAddToFollowers->show();
        widget.btnAddToTrophies->show();
        widget.btnAddToObjects->show();
    }
    //Update view log
    widget.txtLog->append(
        QString("%1 encounters a %2")
        .arg(QString::fromStdString(player->getTitle()))
        .arg(QString::fromStdString(card->getTitle()))
    );
    
//    widget.btnEncounter->hide();
//    widget.btnExchangeTrophies->hide();
//    if (card->getType() == "Enemy") {
//        widget.btnRollEncounterDie->show();
//        widget.btnCastSpell->show();
//        widget.btnEquipArmor->show();
//        widget.btnEquipWeapon->show();
//    } else {
//        widget.btnAddToFollowers->show();
//        widget.btnAddToTrophies->show();
//        widget.btnAddToObjects->show();
//    }
//    //Update view log
//    widget.txtLog->append(
//        QString("%1 encounters a %2")
//        .arg(QString::fromStdString(player->getTitle()))
//        .arg(QString::fromStdString(card->getTitle()))
//    );
}

void TheBigWindow::btnListFollowersClicked () {
    //Update view log
    widget.txtLog->append(QString::fromStdString(player->getTitle()) + " has the following followers:");
    widget.txtLog->append(QString::fromStdString(player->listFollowers()));
}

void TheBigWindow::btnListObjectsClicked () {
    //Update view log
    widget.txtLog->append(QString::fromStdString(player->getTitle()) + " has the following objects:");
    widget.txtLog->append(QString::fromStdString(player->listObjects()));
}

void TheBigWindow::btnListTrophiesClicked () {
    //Update view log
    widget.txtLog->append(QString::fromStdString(player->getTitle()) + " has the following trophies:");
    widget.txtLog->append(QString::fromStdString(player->listTrophies()));
}

void TheBigWindow::btnExchangeTrophiesClicked() {
    //Update view log
    widget.txtLog->append("Exchanging trophies...");
    int *pts = player->exchangeTrophies();
    widget.txtLog->append(QString("+%1 strength").arg(pts[0]));
    widget.txtLog->append(QString("+%1 craft").arg(pts[1]));
}

void TheBigWindow::btnRollEncounterDieClicked() {
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
    widget.btnRollEncounterDie->hide();
    widget.btnCastSpell->hide();
    widget.btnEquipArmor->hide();
    widget.btnEquipWeapon->hide();
    widget.btnAttack->show();
}

void TheBigWindow::btnAttackClicked() {
    die2->hide();
    widget.btnAttack->hide();
    widget.btnExchangeFate->hide();
    
    Enemy* e = static_cast<Enemy*>(card);
    for (unsigned int i = 0; i < activeSpells.size(); ++i) {
        activeSpells.at(i)->preBattle(player, e);
    }
    for (unsigned int i = 0; i < activeWeapons.size(); ++i) {
        activeWeapons.at(i)->preBattle(player, e);
    }
        
    //Character attacks
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
        widget.adventureCardPanel->removeWidget(card);
        card->hide();
        card = NULL;
        adventureDeck->show();
        die1->hide();
        die2->hide();
        widget.btnRollEncounterDie->hide();
        widget.btnExchangeTrophies->show();
    } else if (a > b) { // Character wins
        for (unsigned int i = 0; i < activeSpells.size(); ++i) {
            activeSpells.at(i)->win(player, e);
        }
        for (unsigned int i = 0; i < activeWeapons.size(); ++i) {
            activeWeapons.at(i)->win(player, e);
        }
        widget.txtLog->append(QString("%1 wins").arg(QString::fromStdString(player->getTitle())));
        widget.btnRollEncounterDie->hide();
        widget.btnAddToFollowers->show();
        widget.btnAddToTrophies->show();
        widget.btnAddToObjects->show();
        widget.btnEndTurn->show();
    } else {
        widget.txtLog->append("Stand-off!");     
        widget.btnRollEncounterDie->show();
    }
    
    //Character died
    if (player->getLifePoints() == 0) {
        player->hide();
        playerDeck->show();
        widget.txtLog->append(QString("%1 died").arg(QString::fromStdString(player->getTitle())));
        widget.btnExchangeTrophies->hide();
    }
    
    for (unsigned int i = 0; i < activeSpells.size(); ++i) {
        activeSpells.at(i)->postBattle(player, e);
    }
    for (unsigned int i = 0; i < activeWeapons.size(); ++i) {
        activeWeapons.at(i)->postBattle(player, e);
    }
    activeSpells.clear();
    activeWeapons.clear();
    activeArmors.clear();
    //Update view
    updateCharacterStats();
}

void TheBigWindow::btnExchangeFateClicked() {
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

void TheBigWindow::btnAddToFollowersClicked() {
    //Add to character's followers
    if (player->addFollower(card)) {
        //Update view log
        widget.txtLog->append(QString::fromStdString(card->getTitle()) + " added to followers");
        //Update view
        btnEndTurnClicked();
        card = NULL;
    } else {
        //Update view log
        widget.txtLog->append(QString::fromStdString(card->getTitle()) + " could not be added to followers");
    }
}

void TheBigWindow::btnAddToTrophiesClicked() {
    //Update view
    btnEndTurnClicked();
    //Add to character's trophies
    Enemy* e = static_cast<Enemy*>(card);
    player->addTrophy(e);
    card = NULL;
    //Update view log
    widget.txtLog->append(QString::fromStdString(e->getTitle()) + " added to trophies");
}

void TheBigWindow::btnAddToObjectsClicked() {
    //Add to character's followers
    if (player->addObject(card)) {
        //Update view log
        widget.txtLog->append(QString::fromStdString(card->getTitle()) + " added to objects");
        //Update view
        btnEndTurnClicked();
        card = NULL;
    } else {
        //Update view log
        widget.txtLog->append(QString::fromStdString(card->getTitle()) + " could not be added to objects");
    }
}

void TheBigWindow::btnEndTurnClicked() {
    //Update view
    card->hide();
    adventureDeck->show();
    die1->hide();
    die2->hide();
    widget.adventureCardPanel->removeWidget(card);
    widget.btnAddToFollowers->hide();
    widget.btnAddToTrophies->hide();
    widget.btnAddToObjects->hide();
    widget.btnEndTurn->hide();
    widget.btnExchangeTrophies->show();
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
