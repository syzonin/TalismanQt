/* 
 * File:   AdventureCardDeck.cpp
 * Author: Alex
 * 
 * Created on November 1, 2012, 6:30 PM
 */

#include "AdventureCardDeck.h"
#include "AdventureCardModel.h"

AdventureCardDeck::AdventureCardDeck() {
    setFixedSize(240, 320);
    vector<QStringList> cardVector = AdventureCardModel::select();
    
    for (unsigned int i = 0; i < cardVector.size(); ++i) {
        if (cardVector.at(i).at(1) == "Enemy") {
            cards.push_back(
                new Enemy(cardVector.at(i).at(0).toStdString(),
                          cardVector.at(i).at(1).toStdString(),
                          cardVector.at(i).at(2).toStdString(),
                          cardVector.at(i).at(3).toInt(new bool(true),10),
                          cardVector.at(i).at(4).toStdString(),
                          cardVector.at(i).at(5).toInt(new bool(true),10)
                )
            );
        } else {
            // process other types of adventure cards
        }
    }
    
    shuffle();
}

AdventureCardDeck::~AdventureCardDeck() {
}

void AdventureCardDeck::paintEvent(QPaintEvent *event) {
    //painter object
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    
    painter.setBrush(Qt::white);
    painter.drawRoundRect(10, 10, width()-20, height()-20, 8, 8);
    QPixmap p("images/AdventureCardBack.png", 0, Qt::AutoColor);
    painter.drawPixmap((width()-p.width())/2, (height()-p.height())/2, p);   
}

int AdventureCardDeck::size() {
    return cards.size();
}

AdventureCard* AdventureCardDeck::drawCard() {
    if (cards.size() > 0) {
        AdventureCard* card = cards.at(cards.size()-1);
        cards.pop_back();
        return card;
    } else {
        return NULL;
    }
}

void AdventureCardDeck::mouseDoubleClickEvent(QMouseEvent* event) {
    emit doubleClicked();
}

void AdventureCardDeck::shuffle() {
    AdventureCard* tmp;
    vector<AdventureCard*>::iterator it;
    
    for (unsigned int i = 0; i < cards.size(); ++i) {
        tmp = cards.at(cards.size()-1);
        cards.pop_back();
        it = cards.begin();
        it += random();
        cards.insert(it, tmp);
    }
}

int AdventureCardDeck::random() {
    clock_t endwait;
    endwait = clock() + 7;
    while (clock() < endwait) {}
    ///Seed
    srand(time(0)+clock());
    ///Generate random number
    return (rand() % cards.size());
}