/* 
 * File:   CrownOfCommand.cpp
 * Author: Si
 * 
 * Created on December 1, 2012, 8:31 PM
 */

#include "CrownOfCommand.h"
///
///Constructor.
///
CrownOfCommand::CrownOfCommand(int xCord, int yCord, int mCards, string squareRegion, string squareName, string instructions) : 
        MapSquare(xCord,yCord,mCards,squareRegion,squareName,instructions) {}
///
///Performs square quest
///
void CrownOfCommand::execute(AdventureCardDeck* d, SpellDeck* s, PurchaseDeck* p, Character* c, QTextEdit* txtLog){
    
    txtLog->append("\nYou are now in the Inner Region. You will move only 1 space at a time from here on");
}