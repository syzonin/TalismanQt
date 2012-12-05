/*
 * File:   main.cpp
 * Author: Alex
 *
 * Created on October 27, 2012, 5:04 PM
 */

#include <QApplication>
#include <QHBoxLayout>
#include <QTCore>
#include <QTGui>
#include "DieWidget.h"
//#include "AdventureCardEdit.h"
//#include "AdventureCardDeck.h"
#include "GameBoard.h"
#include "CharacterFactory.h"
#include "WeaponFactory.h"
#include "ArmorFactory.h"
#include "SpellFactory.h"
#include "MapSquare.h"
#include "MapBoard.h"
#include "TheBigWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    // demo code below:
    
//    GameBoard *board = new GameBoard;
//    board->show();
    
    TheBigWindow bw;
    bw.show();
    
    SpellFactory* s = new SpellFactory();
    Spell* s1 = s->getSpell("Cheat Fate");
    Spell* s2 = s->getSpell("Craft");
    Spell* s3 = s->getSpell("Feeble Mind");
    Spell* s4 = s->getSpell("Generosity");
    Spell* s5 = s->getSpell("Healing");
    Spell* s6 = s->getSpell("Life Tap");
    Spell* s7 = s->getSpell("Magic Shell");
    Spell* s8 = s->getSpell("Resotoration");
    Spell* s9 = s->getSpell("Strength");
    Spell* s10 = s->getSpell("Syphon Strength");
    Spell* s11 = s->getSpell("Weakness");
    
    s1->show();
    s2->show();
    s3->show();
    s4->show();
    s5->show();
    s6->show();
    s7->show();
    s8->show();
    s9->show();
    s10->show();
    s11->show();
            

    //demo code ends
/*
    DriverWidget dw;
    dw.show();   
    
    AdventureCardEdit ace;
    ace.show();
    
    AdventureCardDeck acd;
    acd.show();
    
    AdventureCard* card = NULL;
    while (acd.size() > 0) {
        card = acd.drawCard();
        card->show();
    }
*/
 /*   
    CharacterFactory* f = new CharacterFactory;

    Character* warrior1 = f->getClass("Warrior");
    //monk title not printing
    Character* monk1 = f->getClass("Monk");
    //using  this throws an error
    Character* dragonRider1 = f->getClass("Dragon Rider");
    cout << "objects created" << endl;
    //place the newly created characters onto the map
    map.placeCharacter(*monk1);
    map.placeCharacter(*warrior1);
    
    //demonstrate the movement of characters on the map
    map.moveCharacter("Portal of Power", "Middle",5,5,*monk1);
    map.moveCharacter("Portal of Power", "Middle",5,5,*warrior1);
    map.moveCharacter("Black Knight", "Middle",5,4,*monk1);
    map.moveCharacter("Black Knight", "Middle",5,4,*warrior1);

    //printout of characters present on map
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            map.getMapSquare(i,j).getCharactersPresent();
        }
    }
 */  
    
   /* QWidget *window = new QWidget;
    window->setWindowTitle("Map");

    QGridLayout *layout = new QGridLayout;

    QLabel *label1 = new QLabel("q1");
    QLineEdit *txtName = new QLineEdit;
    
    layout->addWidget(label1,0,0);
    layout->addWidget(txtName,0,1);
    
    window->setLayout(layout);
    window->show();*/
    

//    MapBoard *board = new MapBoard;
//    board->show();
    
    

    
    return app.exec();
    

}

