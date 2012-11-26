/* 
 * File:   CharacterCardDeck.h
 * Author: Alex
 *
 * Created on November 7, 2012, 10:17 PM
 */

#ifndef CHARACTERCARDDECK_H
#define	CHARACTERCARDDECK_H
#include "CharacterFactory.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <QPainter>
#include <QWidget>
using namespace std;

class CharacterCardDeck : public QWidget {
    Q_OBJECT
public:
    CharacterCardDeck();
    virtual ~CharacterCardDeck();
int size();
    Character* drawCard();
protected:
    void paintEvent(QPaintEvent* event);
    void mouseDoubleClickEvent(QMouseEvent* event);
private:
    CharacterFactory *cf;
    int random(int);
signals:
    void doubleClicked();
};

#endif	/* CHARACTERCARDDECK_H */

