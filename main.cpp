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
#include "GameBoard.h"
#include "CharacterFactory.h"
#include "WeaponFactory.h"
#include "ArmorFactory.h"
#include "SpellFactory.h"
#include "MapSquare.h"
#include "MapBoard.h"
#include "TheBigWindow.h"

///
///Runs Taliman game
///
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    // demo code below:

    TheBigWindow bw;
    bw.show();
    return app.exec();
   
}

