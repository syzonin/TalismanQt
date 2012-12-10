/* 
 * File:   PurchaseDeck.h
 * Author: Si
 *
 * Created on December 10, 2012, 2:52 AM
 */

#ifndef PURCHASEDECK_H
#define	PURCHASEDECK_H

#include "WeaponFactory.h"
#include "ArmorFactory.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <QPainter>
#include <QWidget>
using namespace std;

class PurchaseDeck : public QWidget {
    Q_OBJECT
public:
    PurchaseDeck();
    virtual ~PurchaseDeck();
    int size();
    AdventureCard* drawCard();
    void shuffle();
protected:
    void paintEvent(QPaintEvent* event);
    void mouseDoubleClickEvent(QMouseEvent* event);
private:
    vector<AdventureCard*> cards;
    int random();
signals:
    void doubleClicked();
};

#endif	/* SPELLDECK_H */

