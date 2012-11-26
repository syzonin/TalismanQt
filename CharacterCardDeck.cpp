/* 
 * File:   CharacterCardDeck.cpp
 * Author: Alex
 * 
 * Created on November 7, 2012, 10:17 PM
 */

#include "CharacterCardDeck.h"

CharacterCardDeck::CharacterCardDeck() {
    cf = new CharacterFactory;
    setFixedSize(240, 320);
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
    //painter object
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    
    painter.setBrush(Qt::white);
    painter.drawRoundRect(10, 10, width()-20, height()-20, 8, 8);
    QPixmap p("images/CharacterCardBack.png", 0, Qt::AutoColor);
    painter.drawPixmap((width()-p.width())/2, (height()-p.height())/2, p);   
}