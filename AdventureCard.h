/* 
 * File:   AdventureCard.h
 * Author: Alex
 *
 * Created on October 1, 2012, 5:12 PM
 */

#ifndef ADVENTURECARD_H
#define	ADVENTURECARD_H
#include "Die.h"
#include <sstream>
#include <string>
#include <QFontDatabase>
#include <QFontMetrics>
#include <QPainter>
#include <QWidget>
using namespace std;

class AdventureCard : public QWidget {
public:
    //Constructor & destructor
    AdventureCard();
    AdventureCard(string,string,string,int);
    virtual ~AdventureCard();
    //Accessors
    const string getTitle() const;
    const string getType() const;
    const string getText() const;
    int getEncounterNumber();
    //Mutators
    void setTitle(string);
    void setType(string);
    void setText(string);
    void setEncounterNumber(int);
    //Other methods
    string toString();
protected:
    bool isFront;
    string title;
    string type;
    string text;
    int encounterNumber;
    void paintEvent(QPaintEvent *event);
    virtual void paintType(QPainter&);
    void mouseDoubleClickEvent (QMouseEvent *event);
private:
    void setValues(string,string,string,int);
};

#endif	/* ADVENTURECARD_H */

