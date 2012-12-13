/* 
 * File:   AdventureCard.cpp
 * Author: Alex
 * 
 * Created on October 1, 2012, 5:12 PM
 */

#include "AdventureCard.h"
///
///Default constructor.
///
AdventureCard::AdventureCard() {
    AdventureCard::setValues("","","",0);
}
///
///Constructor that accepts card title, type, text and encounter number.
///
AdventureCard::AdventureCard(string title, string type, string text, int encounterNumber) {
    AdventureCard::setValues(title,type,text,encounterNumber);
}
///
///Destructor.
///
AdventureCard::~AdventureCard() {}
///
///Returns a string with the title of the card.
///
const string AdventureCard::getTitle() const { return title; }
///
///Returns a string with the type of the card.
///
const string AdventureCard::getType() const { return type; }
///
///Returns a string with the text of the card.
///
const string AdventureCard::getText() const { return text; }
///
///Returns a string with the encounter number of the card.
///
int AdventureCard::getEncounterNumber() { return encounterNumber; }
///
///Initializes the members of this class.
///
void AdventureCard::setValues(string title, string type, string text, int encounterNumber) {
    this->title = title.length() > 0 ? title : "No Title";
    this->type = type.length() > 0 ? type : "Adventure Card";
    this->text = text.length() > 0 ? text : "Card Text";
    this->encounterNumber = encounterNumber > 0 ? encounterNumber : 1;
    isFront = true;
    //Widget properties
    setFixedSize(200, 210);
    setToolTip("Double-click to view card description");
}
///
///Sets card title
///
void AdventureCard::setTitle(string title) { 
    this->title = title;
    update();
}
///
///Sets card type
///
void AdventureCard::setType(string type) { 
    this->type = type;
    update();
}
///
///Sets card text
///
void AdventureCard::setText(string text) { 
    this->text = text;
    update();
}
///
///Sets card encounter number
///
void AdventureCard::setEncounterNumber(int number) { 
    this->encounterNumber = number;
    update();
}
///
///Paints the card widget
///
void AdventureCard::paintEvent(QPaintEvent *event) {
    int left = 20, top = 0;
    QFont font;
    QFontDatabase::addApplicationFont("fonts/CaxtonBold.ttf");//Caxton Bk BT
    QFontDatabase::addApplicationFont("fonts/CaxtonLight.ttf");//Caxton Lt BT
    QFontDatabase::addApplicationFont("fonts/Windlass.ttf");//Windlass
    //create a QPainter and pass a pointer to the device.
    //A paint device can be a QWidget, a QPixmap or a QImage
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    
    //draw card
    QBrush br(QPixmap("images/CardTexture.jpg", 0, Qt::AutoColor));
    painter.setBrush(br);
    painter.drawRoundRect(left, top, width()-left*2, height()-top*2, 8, 8);
    
    //title
    QString tmp = QString::fromStdString(title);
    //draw title
    font = QFont("Windlass");
    font.setPixelSize(16);
    painter.setFont(font);
    QFontMetrics fm = painter.fontMetrics();
    painter.drawText((width()-fm.width(tmp))/2, 20, tmp);
    
    if (isFront) {
        //draw image
        QPixmap p(QString("images/%1.png").arg(tmp.replace(" ","")), 0, Qt::AutoColor);
        p = p.scaled(130,95,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
        painter.drawPixmap((width()-p.width())/2, 30, p);   
        //set type font
        font = QFont("Caxton Bk BT");
        font.setPixelSize(12);
        painter.setFont(font);
        //draw encounter number
        tmp = QString("%1").arg(encounterNumber);
        painter.drawText(width()-35, height()-15, tmp);
        paintType(painter);
    } else {
        //set description font
        font = QFont("Caxton Lt BT");
        font.setPixelSize(10);
        painter.setFont(font);
        //draw description
        QRectF rectArea(25, 30, width()-50, height()-30);
        painter.drawText(rectArea, QString::fromStdString(text));
    }
}
///
///Paints card type
///
void AdventureCard::paintType(QPainter& painter) {
    QFontMetrics fm = painter.fontMetrics();
    QString tmp = QString::fromStdString(type);
    painter.drawText((width()-fm.width(tmp))/2, 140, tmp);
}
///
///Slot for custom double-click event
///
void AdventureCard::mouseDoubleClickEvent(QMouseEvent* event) {
    isFront = !isFront;
    if (isFront) {
        setToolTip("Double-click to view card description");
    } else {
        setToolTip("Double-click to view card front");
    }
    update();
}
///
///A Java-like toString() method 
///
string AdventureCard::toString() {
    stringstream result;
    result << title << " ( "
        << "Type: " << type << " | "
        << "Encounter number: " << encounterNumber << " )";
    return result.str();
}