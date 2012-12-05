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
    
//    WeaponFactory *w = new WeaponFactory();
//    Weapon *w1, *w2, *w3, *w4, *w5, *w6, *w7, *w8, *w9, *w10, *w11, *w12;
//    ArmorFactory *a = new ArmorFactory();
//    Armor *a1, *a2, *a3, *a4;
    
//    a1 = a->getArmor("Basic Armor");
//    a2 = a->getArmor("Shield");
//    a3 = a->getArmor("Helmet");
//    a4 = a->getArmor("Mirror Shield");
//    
//    a1->show();
//    a2->show();
//    a3->show();
//    a4->show();

//    w1 = w->getWeapon("Axe");
//    w2 = w->getWeapon("Bane Sword");
//    w3 = w->getWeapon("Exorcist Blade");
//    w4 = w->getWeapon("Fate Stealer");
//    w5 = w->getWeapon("Frostbite");
//    w6 = w->getWeapon("Holy Lance");
//    w7 = w->getWeapon("Lightning Hammer");
//    w8 = w->getWeapon("Magic Mace");
//    w9 = w->getWeapon("Psionic Wand");
//    w10 = w->getWeapon("Runesword");
//    w11 = w->getWeapon("Spellsword");
//    w12 = w->getWeapon("Sword of Light");
//    
//    w1->show();
//    w2->show();
//    w3->show();
//    w4->show();
//    w5->show();
//    w6->show();
//    w7->show();
//    w8->show();
//    w9->show();
//    w10->show();
//    w11->show();
//    w12->show();
            

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

