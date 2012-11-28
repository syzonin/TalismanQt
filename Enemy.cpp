/* 
 * File:   Enemy.cpp
 * Author: Alex
 * 
 * Created on October 1, 2012, 6:37 PM
 */

#include "Enemy.h"
///
///Constructor that accepts card title, type, text, encounter number, subtype and attack points.
///
Enemy::Enemy(string title, string type, string text, int encounterNumber, string subType, int attackPoints) :
        AdventureCard(title, type, text, encounterNumber) {
    this->subType = subType.length() > 0 ? subType : "Sub type";
    this->attackPoints = attackPoints > 0 ? attackPoints : 1;
}
///
///Destructor.
///
Enemy::~Enemy() {}
///
///Returns a string with the sub type of the enemy card.
///
const string Enemy::getSubType() const { return subType; }
///
///Returns the attack points of the enemy card.
///
int Enemy::getAttackPoints() { return attackPoints; }

void Enemy::setSubType(string subType) { 
    this->subType = subType;
    update();
}

void Enemy::setAttackPoints(int attackPoints) { 
    this->attackPoints = attackPoints;
    update();
}

///
///Roll the die to attack a character.
///
int Enemy::attackRoll(int roll) {
    return attackPoints + roll;
}

void Enemy::paintType(QPainter& painter) {
    QFontMetrics fm = painter.fontMetrics();
    QString tmp = QString::fromStdString(type + " - " + subType);
    painter.drawText((width()-fm.width(tmp))/2, 140, tmp);
    
    QFont font = QFont("Caxton Bk BT");
    font.setPixelSize(16);
    painter.setFont(font);
    tmp = (subType == "Spirit") ? "Craft" : "Strength";
    tmp.append(": ").append(QString::number(attackPoints));
    fm = painter.fontMetrics();
    painter.drawText((width()-fm.width(tmp))/2, 160, tmp);
}

string Enemy::toString() {
    stringstream result;
    result << title << " ( "
           << "Type: " << type << " | "
           << "Sub type: " << subType << " | "
           << (subType == "Spirit" ? "Craft" : "Strength") << ": " << attackPoints << " | "
           << "Encounter number: " << encounterNumber << " )";
    return result.str();
}