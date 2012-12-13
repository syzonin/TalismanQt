/* 
 * File:   AdventureCardDeck.h
 * Author: Alex
 *
 * Created on November 1, 2012, 6:30 PM
 */

#ifndef ADVENTURECARDDECK_H
#define ADVENTURECARDDECK_H
#include "AdventureCardFactory.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <QPainter>
#include <QWidget>
using namespace std;

class AdventureCardDeck : public QWidget {
    Q_OBJECT
public:
    AdventureCardDeck();
    virtual ~AdventureCardDeck();
    int size();
    AdventureCard* drawCard();
    void shuffle();
protected:
    void paintEvent(QPaintEvent* event);
    void mouseDoubleClickEvent(QMouseEvent* event);
private:
    vector<AdventureCard*> cards;
    int random();
    void fillDeck();
signals:
    void doubleClicked();
};

#endif  /* ADVENTURECARDDECK_H */

