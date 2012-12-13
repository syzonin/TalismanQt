/* 
 * File:   AdventureCardDeck.cpp
 * Author: Alex
 * 
 * Created on November 1, 2012, 6:30 PM
 */

#include "AdventureCardDeck.h"
///
///Default constructor.
///Builds an adventure card deck and shuffles it.
///
AdventureCardDeck::AdventureCardDeck() {
    setFixedSize(200, 210);
    //Initialize contents of deck
    fillDeck();
}
///
///Destructor
///
AdventureCardDeck::~AdventureCardDeck() {
    for (unsigned int i = 0; i < cards.size(); ++i) delete cards.at(i);
    cards.clear();
}
///
///Returns deck size (cards left).
///
int AdventureCardDeck::size() {
    return cards.size();
}
///
///Draws a card from the top of the stack.
///
AdventureCard* AdventureCardDeck::drawCard() {
    if (cards.size() == 0) fillDeck();
    
    AdventureCard* card = cards.at(cards.size()-1);
    cards.pop_back();
    return card;
}
///
///Simulates shuffling the cards in the deck.
///
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
///
///Returns a random card index.
///
int AdventureCardDeck::random() {
    clock_t endwait;
    endwait = clock() + 7;
    while (clock() < endwait) {}
    ///Seed
    srand(time(0)+clock());
    ///Generate random number
    return (rand() % cards.size());
}
///
///Fills the deck with cards from factory
///
void AdventureCardDeck::fillDeck() {
    AdventureCardFactory *f = new AdventureCardFactory;
    vector<string> classNames = f->classNames();
    //Load all cards from factory
    for (unsigned int i = 0; i < classNames.size(); ++i) {
        cards.push_back(f->getClass(classNames.at(i)));
    }
    //Randomize cards
    shuffle();
}
///
///Emits signal when a double-click event occurs.
///
void AdventureCardDeck::mouseDoubleClickEvent(QMouseEvent* event) {
    emit doubleClicked();
}
///
///Paints the widget.
///
void AdventureCardDeck::paintEvent(QPaintEvent *event) {
    int left = 20, top = 0;
    //painter object
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    
    painter.setBrush(Qt::white);
    painter.drawRoundRect(left, top, width()-left*2, height()-top*2, 8, 8);
    QPixmap p("images/AdventureCardBack.png", 0, Qt::AutoColor);
    p = p.scaled(130,180,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    painter.drawPixmap((width()-p.width())/2, (height()-p.height())/2, p);   
}