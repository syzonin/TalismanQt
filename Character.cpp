/* 
 * File:   Character.cpp
 * Author: Alex
 * 
 * Created on September 30, 2012, 6:53 PM
 */

#include <vector>
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
    alignment = 0;
    weapon = new Weapon("none", 0, 0, "none");
    for (int x = 0; x < 3; x++)
       weaponInventory[x] = new Weapon("none", 0, 0, "none");
    for (int y = 0; y < 10; y++)
        ability[y] = "none";   
}
///
///Constructor that accepts strength, craft, fate and life.
///
Character::Character(int strength, int craft, int fate, int life, string title, string text, int xCord, int yCord) {
    setValues(strength,craft,fate,life,title,text,xCord,yCord);
    
   this->alignment = 0;
    weapon = new Weapon("none", 0, 0, "none");
    for (int x = 0; x < 3; x++)
       weaponInventory[x] = new Weapon("none", 0, 0, "none"); 
    for (int y = 0; y < 10; y++)
        ability[y] = "none";
}
///
///Destructor.
///TODO: move trophies and followers to discard pile.
///
Character::~Character() {
    followers.clear();
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
    if (tokens >= 0 && tokens != fateTokens) fateTokens = tokens; 
    update();
}
///
///Sets the character's allowed life (max).
///
void Character::setLifePoints(int points) { 
    if (points >= 0 && points != lifePoints) lifePoints = points; 
    update();
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
void Character::addFollower(Follower& f) {
    for (list<AdventureCard*>::iterator it = followers.begin(); it != followers.end(); ++it) { 
        if (&f == *it) return;
    }
    followers.push_back(&f);
}
///
///Adds the card to the character's list of trophies.
///
void Character::addTrophy(Enemy& e) {
    list<Enemy*>::iterator pos = trophies.begin();
    for (list<Enemy*>::iterator it = trophies.begin(); it != trophies.end(); ++it) { 
        if (&e == *it) return;
        if (e.getAttackPoints() < (*it)->getAttackPoints()) ++pos;
    }
    trophies.insert(pos,&e);
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
    int left = 40, top = 10;
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
    setFixedSize(300, 320);
    //title
    QString cardTitle = QString::fromStdString(title);
    
    if (isFront) {
        //draw card
        painter.setBrush(QBrush(Qt::white));
        painter.drawRoundRect(left, top, width()-left*2, height()-top*2, 8, 8);
        //draw image
        QPixmap p(QString("images/%1.png").arg(cardTitle.replace(" ","")), 0, Qt::AutoColor);
        p.scaled(40,55,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
        painter.drawPixmap((width()-p.width())/2, 30, p);   
        //draw title
        font = QFont("Windlass");
        font.setPixelSize(24);
        painter.setFont(font);
        QFontMetrics fm = painter.fontMetrics();
        painter.drawText((width()-fm.width(cardTitle))/2, 40, cardTitle);

        //set font
        font = QFont("Caxton Bk BT");
        font.setPixelSize(24);
        painter.setFont(font);
        //translate coordinates
        painter.translate(0, 30);
        //left modifiers
        painter.setPen(QColor(240,128,128));
        painter.drawText(4, p.height()/5*2, QString("%1").arg(strengthCounters));
        painter.setPen(QColor(65,105,225));
        painter.drawText(4, p.height()/10*7, QString("%1").arg(craftCounters));
        //right modifiers
        fm = painter.fontMetrics();
        painter.setPen(QColor(72,61,139));
        QString tmp = QString("%1").arg(fateTokens);
        painter.drawText(width()-fm.width(tmp)-4, p.height()/5*2, tmp);
        painter.setPen(QColor(218,165,32));
        tmp = QString("%1").arg(gold);
        painter.drawText(width()-fm.width(tmp)-4, p.height()/5*3, tmp);
        painter.setPen(QColor(60,179,113));
        tmp = QString("%1").arg(lifePoints);
        painter.drawText(width()-fm.width(tmp)-4, p.height()/5*4, tmp);

        //set font
        font.setPixelSize(14);
        painter.setFont(font);
        painter.setPen(Qt::black);
        //left attributes
        painter.rotate(90.0);
        painter.drawText(p.height()/5, -left-4, QString("Strength: %1").arg(strength));
        painter.drawText(p.height()/10*6, -left-4, QString("Craft: %1").arg(craft));
        //right attributes
        painter.rotate(-180.0);
        painter.drawText(-p.height()/5*2, width()-left-4, QString("Fate: %1").arg(fate));
        painter.drawText(-p.height()/5*3, width()-left-4, "Gold");
        painter.drawText(-p.height()/5*4, width()-left-4, QString("Life: %1").arg(life));
    } else {
        //draw card
        QBrush br(QPixmap("images/CardTexture.jpg", 0, Qt::AutoColor));
        painter.setBrush(br);
        painter.drawRoundRect(left, top, width()-left*2, height()-top*2, 8, 8);

        //draw title
        QString tmp = QString::fromStdString(title);
        font = QFont("Windlass");
        font.setPixelSize(24);
        painter.setFont(font);
        QFontMetrics fm = painter.fontMetrics();
        painter.drawText((width()-fm.width(tmp))/2, 40, tmp);

        //draw description
        font = QFont("Caxton Lt BT");
        font.setPixelSize(14);
        painter.setFont(font);

        QRectF rectArea(left+10, 50, width()-(left+10)*2, height()-50);
        painter.drawText(rectArea, QString::fromStdString(text));
    }
 }

void Character :: setAlignment(int a) {alignment = a;}
int Character :: getAlignment() {return alignment;}
string Character :: getAbility(int index) {return ability[index];}
Weapon Character :: getActiveWeapon() {return *weapon;}
Armor Character :: getActiveArmor() {return *armor;}

void Character :: addActiveWeapon(Weapon w) { //Adds a weapon and updates the character's base stats accordingly
    weapon = new Weapon(w);                   //Seriously I need to move the Add Ability functionality to here from the Main Window ... later I will do this. No time now.
    strength += w.getStrength();
    craft += w.getCraft();
}

void Character :: addActiveWeapon(Weapon w, int index){} //Should never be called, used for overriding in the Warrior class.
void Character :: removeActiveWeapon(int index){}
Weapon Character :: getSecondWeapon(){return NULL;} // Same as above.

void Character :: removeActiveWeapon() { //Removes a weapon and updates the character's base stats accordingly. Ability is also removed here ... as it should be contrary to the add method.
    Weapon w = new Weapon(weapon);
    weapon = new Weapon("none", 0, 0, "none");
    strength -= w.getStrength();
    craft -= w.getCraft();
    removeAbility(w.getAbility());
}

void Character :: addActiveArmor(Armor a){ //Adds an armor and updates the character's abilities accordingly. Note: Armor does not add base stats .... not sure why
    armor = new Armor(a);
    addAbility(a.getAbility());
}

void Character :: removeActiveArmor(){ //Remove the armor and the associated ability along with it.
    Armor a = new Armor(armor);
    armor = new Armor("none", "none");
    removeAbility(a.getAbility());
}

void Character :: addAbility(string s){ //Adds the passed ability (string) to the character's list of Abilities IF they do not already have it
    int x = 0;
    if (hasAbility(s))
        return;
    
    while (x < 10 && ability[x].compare("none") != 0) //Currently a Character can only have a total of 10 abilities, this can be changed easily but updating the ability array
        x++;                                          //in the header file to a greater size.
    ability[x] = string(s);
}

void Character :: removeAbility(string s){ //Removes the passed ability (string) if it is in the Character's ability list.
    for (int x = 0; x < 10; x++){
        if (s.compare(ability[x]) == 0){
            ability[x] = "none";
            return;
        }            
    }
}

bool Character :: hasAbility(string s){ //Returns a boolean on whether or not the character currently has the passed Ability (string) in their ability list (I <3 this method)
    for (int x = 0; x < 10; x++){
        if (s.compare(ability[x]) == 0)
            return true;
    }
    return false;
}
