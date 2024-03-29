/* 
 * File:   Character.h
 * Author: Alex
 *
 * Created on September 30, 2012, 6:53 PM
 */

#ifndef CHARACTER_H
#define	CHARACTER_H
#include "Die.h"
#include "Enemy.h"
#include "Follower.h"
#include <algorithm>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <QFile>
#include <QFontDatabase>
#include <QFontMetrics>
#include <QPainter>
#include <QWidget>
#include "Enemy.h"
//#include "Weapon.h"
//#include "Armor.h"
using namespace std;

class Character : public QWidget {
    Q_OBJECT
public:
    //Constructor & destructor
    Character();
    Character(int,int,int,int,string,string,int,int);
    virtual ~Character();
    //Accessors
    int getCraft();
    int getFate();
    int getGold();
    int getLife();
    int getLifePoints();
    int getFateTokens();
    int getStrength();
    int getTalisman();
    const string getText() const;
    const string getTitle() const;
    string getStartLocation();
    string getCurrentLocation();
    string getCurrentRegion();
    int getXCord();
    int getYCord();
    int getAlignment();
    bool getCross();
    const list<AdventureCard*> getObjects();
    virtual int allowedAttackRolls(const Enemy&);
    virtual int allowedWeapons();
    virtual int allowedArmors();
    virtual int allowedSpells();
    //Mutators
    virtual bool addTrophy(Enemy*);
    virtual bool addFollower(AdventureCard*);
    virtual bool addObject(AdventureCard*);
    bool removeObject(AdventureCard*);
    void clearWeapons();
    void clearArmors();
    void clearSpells();
    void removeFollower(unsigned int);
    void removeTrophy(unsigned int);
    bool hasFollower(string);
    Follower* getFollower(unsigned int);
    //Other methods
    int* exchangeTrophies();
    string listTrophies();
    string listFollowers();
    string listObjects();
    virtual int attackRoll(const Enemy&, int) = 0;
    virtual int attackRoll(const Enemy&, int, int) = 0;
    virtual int fateRoll(const Enemy&, int) = 0;
    QPixmap getFigure();
public slots:
    //Mutators
    void setStrength(int);
    void setCraft(int);
    void setFate(int);
    void setGold(int);
    void setLife(int);
    void setText(string);
    void setLifePoints(int);
    void setFateTokens(int);
    void setStart(string);
    void setCoord(int,int);
    void setAlignment(int a);
    void setTalisman(int);
    void setCross(bool);
 
    //Map movement
    void move(string,string,int,int);
    //void permittedMove();    
protected:
    int strength;
    int craft;
    int fate;
    int life;
    int gold;
    int fateTokens;
    int lifePoints;
    int strengthCounters;
    int craftCounters;
    string title;
    string text;
    list<Enemy*> trophies;
    list<AdventureCard*> followers;
    list<AdventureCard*> objects;
    void paintEvent(QPaintEvent *event);
    void mouseDoubleClickEvent (QMouseEvent *event);
    string startLocation;
    string currentLocation;
    string currentRegion;
    int xCord;
    int yCord;  
    int alignment;
    int talisman;
    bool cross;

private:
    bool isFront;
    const static int STARTING_GOLD;
    const static int TROPHY_POINTS;
    void setValues(int,int,int,int,string,string,int,int);
};

#endif	/* CHARACTER_H */

