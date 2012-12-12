/* 
 * File:   SpellDeck.cpp
 * Author: Si
 * 
 * Created on December 10, 2012, 2:52 AM
 */

#include "SpellDeck.h"

///
///Default constructor.
///Builds an spell deck and shuffles it.
///
SpellDeck::SpellDeck() {
    //cf = new SpellFactory;
    setFixedSize(200, 210);
    
    SpellFactory *f = new SpellFactory;
    vector<string> classNames = f->classNames();
    
    for (unsigned int i = 0; i < classNames.size(); ++i) {
        cards.push_back(f->getClass(classNames.at(i)));
    }
    
    shuffle();
}
///
///Destructor
///
SpellDeck::~SpellDeck() {
    for (unsigned int i = 0; i < cards.size(); ++i) delete cards.at(i);
    cards.clear();
}
///
///Returns deck size (cards left).
///
int SpellDeck::size() {
    return cards.size();
}
///
///Draws a card from the top of the stack.
///
Spell* SpellDeck::drawCard() {
    if (cards.size() > 0) {
        Spell* card = cards.at(cards.size()-1);
        cards.pop_back();
        return card;
    } else {
        return NULL;
    }
}
///
///Simulates shuffling the cards in the deck.
///
void SpellDeck::shuffle() {
    Spell* tmp;
    vector<Spell*>::iterator it;
    
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
int SpellDeck::random() {
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
void SpellDeck::mouseDoubleClickEvent(QMouseEvent* event) {
    //emit doubleClicked();
}
///
///Paints the widget.
///
void SpellDeck::paintEvent(QPaintEvent *event) {
    int left = 20, top = 0;
    //painter object
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    
    painter.setBrush(Qt::white);
    painter.drawRoundRect(left, top, width()-left*2, height()-top*2, 8, 8);
    QPixmap p("images/SpellCardBack.png", 0, Qt::AutoColor);
    p = p.scaled(130,180,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    painter.drawPixmap((width()-p.width())/2, (height()-p.height())/2, p);   
}