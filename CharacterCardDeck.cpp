/* 
 * File:   CharacterCardDeck.cpp
 * Author: Alex
 * 
 * Created on November 7, 2012, 10:17 PM
 */

#include "CharacterCardDeck.h"

CharacterCardDeck::CharacterCardDeck() {
    cf = new CharacterFactory;
    setFixedSize(200, 210);
}

CharacterCardDeck::~CharacterCardDeck() {
}

Character* CharacterCardDeck::drawCard() {
    vector<string> cards = cf->classNames();
    return cf->getClass(cards.at(random(cards.size())));
}

int CharacterCardDeck::random(int max) {
    clock_t endwait;
    endwait = clock() + 7;
    while (clock() < endwait) {}
    ///Seed
    srand(time(0)+clock());
    ///Generate random number
    return (rand() % max);
}

void CharacterCardDeck::mouseDoubleClickEvent(QMouseEvent* event) {
    emit doubleClicked();
}

void CharacterCardDeck::paintEvent(QPaintEvent *event) {
    int left = 20, top = 0;
    //painter object
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    
    painter.setBrush(Qt::white);
    painter.drawRoundRect(left, top, width()-left*2, height()-top*2, 8, 8);
    QPixmap p("images/CharacterCardBack.png", 0, Qt::AutoColor);
    p = p.scaled(130,180,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    painter.drawPixmap((width()-p.width())/2, (height()-p.height())/2, p);   
}