/* 
 * File:   Character.cpp
 * Author: Alex
 * 
 * Created on September 30, 2012, 6:53 PM
 */

#include "Character.h"

///
///Class constants.
///
const int Character::STARTING_GOLD = 1;
const int Character::TROPHY_POINTS = 7;
///
///Default constructor.
///
Character::Character() {
    setValues(0,0,0,0,"Character","",0,0);  
}
///
///Constructor that accepts strength, craft, fate and life.
///
Character::Character(int strength, int craft, int fate, int life, string title, string text, int xCord, int yCord) {
    setValues(strength,craft,fate,life,title,text,xCord,yCord);
}
///
///Destructor.
///TODO: move trophies and followers to discard pile.
///
Character::~Character() {
    for (list<AdventureCard*>::iterator it = followers.begin(); it != followers.end(); ++it) delete *it;
    followers.clear();    
    for (list<Enemy*>::iterator it = trophies.begin(); it != trophies.end(); ++it) delete *it;
    trophies.clear();
}
///
///Returns the character's craft.
///
int Character::getCraft() { return craft; }
///
///Returns the character's gold.
///
int Character::getGold() { return gold; }
///
///Returns the character's fate.
///
int Character::getFate() { return fate; }
///
///Returns the character's life.
///
int Character::getLife() { return life; }
///
///Returns the character's allowed fate (max).
///
int Character::getFateTokens() { return fateTokens; }
///
///Returns the character's allowed life (max).
///
int Character::getLifePoints() { return lifePoints; }
///
///Returns the character's strength.
///
int Character::getStrength() { return strength; }
///
///Returns the number of dice to roll when attacking an Enemy
///
int Character::allowedAttackRolls(const Enemy& e) { return 1; }
///
///Returns the number of weapons allowed to be used in battle
///
int Character::allowedWeapons() { return 1; }
///
///Returns the number of armors allowed to be used in battle
///
int Character::allowedArmors() { return 1; }
///
///Returns the number of spells allowed to be cast in battle
///
int Character::allowedSpells() { return 1; }
///
///Returns the character's text.
///
const string Character::getText() const { return text; }
///
///Returns the character's title.
///
const string Character::getTitle() const { return title; }

string Character::getStartLocation(){ return startLocation; }
    
string Character::getCurrentLocation(){ return currentLocation; }
    
int Character::getXCord(){ return xCord; }
    
int Character::getYCord(){ return yCord; }

const list<AdventureCard*> Character::getObjects() { return objects; }
///
///Sets the character's text.
///
void Character::setText(string description) { text = description; }
///
///Sets the character's strength.
///
void Character::setStrength(int value) {
    if (strength != value && value >= 0) strength = value;
    update();
}
///
///Sets the character's craft.
///
void Character::setCraft(int value) {
    if (craft != value && value >= 0) craft = value;
    update();
}
///
///Sets the character's gold.
///
void Character::setGold(int goldCoins) { 
    if (goldCoins > 0 && goldCoins != gold) gold = goldCoins; 
    update();
}
///
///Sets the character's fate.
///
void Character::setFate(int fateValue) { 
    if (fateValue >= 0) fate = fateValue;
    if (fateTokens > fate) fateTokens = fate;
    update();
}
///
///Sets the character's life.
///
void Character::setLife(int lifeValue) { 
    if (lifeValue >= 0) life = lifeValue;
    if (lifePoints > life) lifePoints = life;
    update();
}

void Character::setStart(string newStart){ startLocation = newStart; }

void Character::setCoord(int x, int y){
    xCord = x;
    yCord = y;
}
void Character::move(string newLocation, string newRegion, int x, int y){
    currentLocation = newLocation;
    currentRegion = newRegion;
    xCord = x;
    yCord = y;
}
    
///
///Sets the character's allowed fate (max).
///
void Character::setFateTokens(int tokens) {
    if (tokens >= 0 && tokens != fateTokens) {
        fateTokens = tokens; 
        update();
    }
}
///
///Sets the character's allowed life (max).
///
void Character::setLifePoints(int points) { 
    if (points >= 0 && points != lifePoints) {
        lifePoints = points; 
        update();
    }
}
///
///Initializes the members of this class.
///
void Character::setValues(int strength, int craft, int fate, int life, string title, string text, int xCord, int yCord) {
    this->title = title;
    this->text = text;
    this->strength = strength > 0 ? strength : 0;
    this->craft = craft > 0 ? craft : 0;
    this->fate = fate > 0 ? fate : 0;
    this->life = life > 0 ? life : 0;
    currentRegion = "Outer";
    this->xCord = xCord;
    this->yCord = yCord;
    
    fateTokens = this->fate;
    lifePoints = this->life;
    gold = STARTING_GOLD;
    strengthCounters = 0;
    craftCounters = 0;
    isFront = true;
    //Widget properties
    setFixedSize(300, 320);
    setToolTip("Double-click to view card description");
}
///
///Adds the card to the character's list of followers.
///
bool Character::addFollower(AdventureCard* card) {
    if (card->getType() != "Follower") return false; 
    for (list<AdventureCard*>::iterator it = followers.begin(); it != followers.end(); ++it) { 
        if (card == *it) return false;
    }
    followers.push_back(card);
    return true;
}
///
///Adds the card to the character's list of followers.
///
bool Character::addObject(AdventureCard* card) {
    for (list<AdventureCard*>::iterator it = objects.begin(); it != objects.end(); ++it) { 
        if (card == *it) return false;
    }
    objects.push_back(card);
    return true;
}
///
///Adds the card to the character's list of trophies.
///
bool Character::addTrophy(Enemy* card) {
    list<Enemy*>::iterator pos = trophies.begin();
    for (list<Enemy*>::iterator it = trophies.begin(); it != trophies.end(); ++it) { 
        if (card == *it) return false;
        if (card->getAttackPoints() < (*it)->getAttackPoints()) ++pos;
    }
    trophies.insert(pos,card);
    return true;
}
///
///Removes the card to the character's list of followers.
///
void Character::removeFollower(unsigned int index) {
    if (index < 1 || index >= followers.size()) return;
    index -= 1;
    list<AdventureCard*>::iterator it; 
    for (unsigned int i = 0; i < index; ++i) ++it;    
    followers.erase(it);
}
///
///Removes the card to the character's list of trophies.
///
void Character::removeTrophy(unsigned int index) {
    if (index < 1 || index >= trophies.size()) return;
    index -= 1;
    list<Enemy*>::iterator it; 
    for (unsigned int i = 0; i < index; ++i) ++it;    
    trophies.erase(it);
}
///
///Displays a list of all the followers that the character has.
///
string Character::listFollowers() {
    stringstream result;
    //Build list from collected followers
    for (list<AdventureCard*>::iterator it = followers.begin(); it != followers.end(); ++it) { 
        if (it != followers.begin()) result << "\n";
        result << (*it)->toString();
    }
    //If list is empty
    if (result.str().length() == 0) result << "There are no followers in the list";
    //Return list
    return result.str();
}
///
///Displays a list of all the objects that the character has.
///
string Character::listObjects() {
    stringstream result;
    //Build list from collected followers
    for (list<AdventureCard*>::iterator it = objects.begin(); it != objects.end(); ++it) { 
        if (it != objects.begin()) result << "\n";
        result << (*it)->toString();
    }
    //If list is empty
    if (result.str().length() == 0) result << "There are no objects in the list";
    //Return list
    return result.str();
}
///
///Return a string of all the trophies that the character has.
///
string Character::listTrophies() {
    stringstream result;
    //Build list from collected trophies
    for (list<Enemy*>::iterator it = trophies.begin(); it != trophies.end(); ++it) { 
        if (it != trophies.begin()) result << "\n";
        result << (*it)->toString();
    }
    //If list is empty
    if (result.str().length() == 0) result << "There are no trophies in the list";
    //Return list
    return result.str();
}
///
///Exchanges all the trophies for strength or craft.
///Trophies that do not contribute to extra counters remain in the list.
///
int* Character::exchangeTrophies() {
    //Supporting variables
    int str_sum = 0, cft_sum = 0, str_surplus = 0, cft_surplus = 0, str_total = 0, cft_total = 0;
    list<Enemy*>::iterator it = trophies.begin();
    
    //Pre-process sums of craft and strength
    for (it = trophies.begin(); it != trophies.end(); ++it) { 
        if ((*it)->getSubType() == "Spirit") cft_sum += (*it)->getAttackPoints();
        //Sum strength
        else str_sum += (*it)->getAttackPoints();
    }
    
    //Surplus points
    str_surplus = str_sum % TROPHY_POINTS;
    cft_surplus = cft_sum % TROPHY_POINTS;
    //Reset iterators for second loop
    it = trophies.begin();
    
    //Decide which trophies to leave based on their contribution of attack points
    for (it = trophies.begin(); it != trophies.end(); ++it) { 
        if ((*it)->getSubType() == "Spirit") { //Check craft
            if ((*it)->getAttackPoints() > cft_surplus) trophies.erase(it--);
            else cft_surplus -= (*it)->getAttackPoints();
        } else { //Check strength
            if ((*it)->getAttackPoints() > str_surplus) trophies.erase(it--);
            else str_surplus -= (*it)->getAttackPoints();
        }
    }
    
    //Calculate total points earned
    str_total = str_sum / TROPHY_POINTS;
    cft_total = cft_sum / TROPHY_POINTS;
    strengthCounters += str_total;
    craftCounters += cft_total;
    //Update view
    update();
    //Return earned points
    int *result = new int[2];
    result[0] = str_total;
    result[1] = cft_total;
    return result;
}
///
///Roll the die to attack an enemy based on its type (battle or psychic combat).
///TODO: add weapon damage
///
int Character::attackRoll(const Enemy& e, int roll) {
    int totalAttack = 0;
    
    if (e.getSubType() == "Spirit") {
        totalAttack = craft + craftCounters; 
    } else { //if (subType == "Animal" || subType == "Dragon" || subType == "Monster")
        totalAttack = strength + strengthCounters; 
    } 
    
    return totalAttack + roll;
}
///
///Roll the die to override the attack roll and exchange one fate token.
///
int Character::fateRoll(const Enemy& e, int roll) {
    if (fateTokens > 0) {
        setFateTokens(fateTokens-1);
        return Character::attackRoll(e, roll);
    } else {
        return 0;
    }
}
///
///Double-click event that switches cards views
///
void Character::mouseDoubleClickEvent (QMouseEvent *event) {
    isFront = !isFront;
    if (isFront) {
        setToolTip("Double-click to view card description");
    } else {
        setToolTip("Double-click to view card front");
    }
    update();
}
///
///Draw the character card
///
void Character::paintEvent(QPaintEvent *event) {
    int left = 20, top = 0;
    //fonts
    QFont font;
    QFontDatabase::addApplicationFont("fonts/CaxtonBold.ttf");//Caxton Bk BT
    QFontDatabase::addApplicationFont("fonts/CaxtonLight.ttf");//Caxton Lt BT
    QFontDatabase::addApplicationFont("fonts/Windlass.ttf");//Windlass
    //painter object
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    //set fixed size
    setFixedSize(200, 210);
    //title
    QString cardTitle = QString::fromStdString(title);
    
    if (isFront) {
        //draw card
        painter.setBrush(QBrush(Qt::white));
        painter.drawRoundRect(left, top, width()-left*2, height()-top*2, 8, 8);
        //draw image
        QPixmap p(QString("images/%1.png").arg(cardTitle.replace(" ","")), 0, Qt::AutoColor);
        p = p.scaled(130,180,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
        painter.drawPixmap((width()-p.width())/2, 20, p);   
        //draw title
        font = QFont("Windlass");
        font.setPixelSize(16);
        painter.setFont(font);
        QFontMetrics fm = painter.fontMetrics();
        painter.drawText((width()-fm.width(cardTitle))/2, 20, cardTitle);

        //set font
        font = QFont("Caxton Bk BT");
        font.setPixelSize(18);
        painter.setFont(font);
        //translate coordinates
        painter.translate(0, 30);
        //left modifiers
        painter.setPen(QColor(240,128,128));
        painter.drawText(4, p.height()/7*2, QString("%1").arg(strengthCounters));
        painter.setPen(QColor(65,105,225));
        painter.drawText(4, p.height()/7*5, QString("%1").arg(craftCounters));
        //right modifiers
        fm = painter.fontMetrics();
        painter.setPen(QColor(72,61,139));
        QString tmp = QString("%1").arg(fateTokens);
        painter.drawText(width()-fm.width(tmp)-4, p.height()/7*1.5, tmp);
        painter.setPen(QColor(218,165,32));
        tmp = QString("%1").arg(gold);
        painter.drawText(width()-fm.width(tmp)-4, p.height()/7*3.5, tmp);
        painter.setPen(QColor(60,179,113));
        tmp = QString("%1").arg(lifePoints);
        painter.drawText(width()-fm.width(tmp)-4, p.height()/7*5.5, tmp);

        //set font
        font.setPixelSize(12);
        painter.setFont(font);
        painter.setPen(Qt::black);
        //left attributes
        painter.rotate(90.0);
        painter.drawText(p.height()/7, -left-4, QString("Strength: %1").arg(strength));
        painter.drawText(p.height()/7*4, -left-4, QString("Craft: %1").arg(craft));
        //right attributes
        painter.rotate(-180.0);
        painter.drawText(-p.height()/7*2, width()-left-4, QString("Fate: %1").arg(fate));
        painter.drawText(-p.height()/7*4, width()-left-4, "Gold");
        painter.drawText(-p.height()/7*6, width()-left-4, QString("Life: %1").arg(life));
    } else {
        //draw card
        QBrush br(QPixmap("images/CardTexture.jpg", 0, Qt::AutoColor));
        painter.setBrush(br);
        painter.drawRoundRect(left, top, width()-left*2, height()-top*2, 8, 8);

        //draw title
        QString tmp = QString::fromStdString(title);
        font = QFont("Windlass");
        font.setPixelSize(16);
        painter.setFont(font);
        QFontMetrics fm = painter.fontMetrics();
        painter.drawText((width()-fm.width(tmp))/2, 20, tmp);

        //draw description
        font = QFont("Caxton Lt BT");
        font.setPixelSize(10);
        painter.setFont(font);

        QRectF rectArea(left+10, 25, width()-(left+10)*2, height()-25);
        painter.drawText(rectArea, QString::fromStdString(text));
    }
 }

void Character :: setAlignment(int a) {alignment = a;}
int Character :: getAlignment() {return alignment;}

QPixmap Character::getFigure () {
    QPixmap p(QString("images/%1.png").arg(QString::fromStdString(title).replace(" ","")));
    return p.scaled(20,40,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
}
