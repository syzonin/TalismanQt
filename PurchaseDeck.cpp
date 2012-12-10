/* 
 * File:   PurchaseDeck.cpp
 * Author: Si
 * 
 * Created on December 10, 2012, 3:14 AM
 */

#include "PurchaseDeck.h"

///
///Default constructor.
///Builds an adventure card deck and shuffles it.
///
PurchaseDeck::PurchaseDeck() {
    setFixedSize(200, 210);
    
    WeaponFactory *f = new WeaponFactory;
    vector<string> classNames = f->classNames();
    
    for (unsigned int i = 0; i < classNames.size(); ++i) {
        cards.push_back(f->getClass(classNames.at(i)));
    }
    
    ArmorFactory *h = new ArmorFactory;
    vector<string> classNames1 = h->classNames();
    
    for (unsigned int i = 0; i < classNames1.size(); ++i) {
        cards.push_back(h->getClass(classNames1.at(i)));
    }
    
    shuffle();
}
///
///Destructor
///
PurchaseDeck::~PurchaseDeck() {
    for (unsigned int i = 0; i < cards.size(); ++i) delete cards.at(i);
    cards.clear();
}
///
///Returns deck size (cards left).
///
int PurchaseDeck::size() {
    return cards.size();
}
///
///Draws a card from the top of the stack.
///
AdventureCard* PurchaseDeck::drawCard() {
    if (cards.size() > 0) {
        AdventureCard* card = cards.at(cards.size()-1);
        cards.pop_back();
        return card;
    } else {
        return NULL;
    }
}
///
///Simulates shuffling the cards in the deck.
///
void PurchaseDeck::shuffle() {
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
///
///Returns a random card index.
///
int PurchaseDeck::random() {
    clock_t endwait;
    endwait = clock() + 7;
    while (clock() < endwait) {}
    ///Seed
    srand(time(0)+clock());
    ///Generate random number
    return (rand() % cards.size());
}
///
///Emits signal when a double-click event occurs.
///
void PurchaseDeck::mouseDoubleClickEvent(QMouseEvent* event) {
    //emit doubleClicked();
}
///
///Paints the widget.
///
void PurchaseDeck::paintEvent(QPaintEvent *event) {
    int left = 20, top = 0;
    //painter object
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    
    painter.setBrush(Qt::white);
    painter.drawRoundRect(left, top, width()-left*2, height()-top*2, 8, 8);
    QPixmap p("images/PurchaseCardBack.png", 0, Qt::AutoColor);
    p = p.scaled(130,180,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    painter.drawPixmap((width()-p.width())/2, (height()-p.height())/2, p);   
}