/* 
 * File:   SpellDeck.h
 * Author: Si
 *
 * Created on December 10, 2012, 2:52 AM
 */

#ifndef SPELLDECK_H
#define	SPELLDECK_H

#include "SpellFactory.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <QPainter>
#include <QWidget>
using namespace std;

class SpellDeck : public QWidget {
    Q_OBJECT
public:
    SpellDeck();
    virtual ~SpellDeck();
    int size();
    Spell* drawCard();
    void shuffle();
protected:
    void paintEvent(QPaintEvent* event);
    void mouseDoubleClickEvent(QMouseEvent* event);
private:
    vector<Spell*> cards;
    int random();
signals:
    void doubleClicked();
};

#endif	/* SPELLDECK_H */

