# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/MinGW-Windows
TARGET = TalismanQt
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui
SOURCES += GameBoard.cpp TheBigWindow.cpp AdventureCardDeck.cpp Warrior.cpp DragonRider.cpp CharacterCardDeck.cpp main.cpp Monk.cpp MapSquareFactory.cpp CharacterCardModel.cpp AdventureCardModel.cpp DieWidget.cpp Character.cpp MapBoard.cpp Armor.cpp CharacterFactory.cpp MapSquareModel.cpp Enemy.cpp AdventureCardEdit.cpp Weapon.cpp Die.cpp Follower.cpp AdventureCard.cpp AdventureCardFactory.cpp MapSquare.cpp
HEADERS += CharacterCardModel.h AdventureCard.h DieWidget.h AdventureCardModel.h CharacterCardDeck.h AdventureCardDeck.h Weapon.h MapSquare.h AdventureCardFactory.h AdventureCardEdit.h Warrior.h Character.h GameBoard.h MapBoard.h MapSquareFactory.h MapSquareModel.h CharacterFactory.h TheBigWindow.h DragonRider.h Enemy.h Follower.h Die.h Monk.h Armor.h
FORMS += TheBigWindow.ui AdventureCardEdit.ui GameBoard.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/MinGW-Windows
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
