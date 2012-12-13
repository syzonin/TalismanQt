/* 
 * File:   Die.cpp
 * Author: Alex
 * 
 * Created on October 3, 2012, 8:59 PM
 */

#include "DieWidget.h"
//int Die::randomNumber = 0;

///
///Default constructor.
///
DieWidget::DieWidget() {
    setFixedSize(40, 40);
    rolledNumber = 1;
}
///
///Destructor.
///
DieWidget::~DieWidget() {}
///
///Static method for rolling the die. 
///Generates a pseudo-random integer and outputs the number to the console.
///
void DieWidget::roll() {
    ///Add waiting to simulate randomness
    clock_t endwait;
    endwait = clock() + 7;
    while (clock() < endwait) {}
    ///Seed
    srand(time(0)+clock()+rolledNumber);
    ///Generate random number
    rolledNumber = rand() % 6 + 1;
    update();
}
///
///Returns the last number rolled
///
int DieWidget::getRolledNumber() { return rolledNumber; }
///
///Paints the die widget
///
void DieWidget::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing);
    
    painter.setBrush(QBrush(Qt::white));
    painter.drawRoundRect(5,5,30,30,16,16);
    
    painter.setBrush(QBrush(Qt::black));
    
    if (rolledNumber == 1) {
        painter.drawEllipse(18,18,4,4);
    } else if (rolledNumber == 2) {
        painter.drawEllipse(25,10,4,4);
        painter.drawEllipse(10,25,4,4);
    } else if (rolledNumber == 3) {
        painter.drawEllipse(25,10,4,4);
        painter.drawEllipse(10,25,4,4);
        painter.drawEllipse(18,18,4,4);
    } else if (rolledNumber == 4) {
        painter.drawEllipse(10,10,4,4);
        painter.drawEllipse(25,25,4,4);
        painter.drawEllipse(25,10,4,4);
        painter.drawEllipse(10,25,4,4);
    } else if (rolledNumber == 5) {
        painter.drawEllipse(10,10,4,4);
        painter.drawEllipse(25,25,4,4);
        painter.drawEllipse(25,10,4,4);
        painter.drawEllipse(10,25,4,4);
        painter.drawEllipse(18,18,4,4);
    } else if (rolledNumber == 6) {
        painter.drawEllipse(10,10,4,4);
        painter.drawEllipse(25,25,4,4);
        painter.drawEllipse(25,10,4,4);
        painter.drawEllipse(10,25,4,4);
        painter.drawEllipse(10,18,4,4);
        painter.drawEllipse(25,18,4,4);
    }
}