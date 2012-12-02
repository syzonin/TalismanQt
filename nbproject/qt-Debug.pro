# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/MinGW_Qt-Windows
TARGET = TalismanQt
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui
SOURCES += GameBoard.cpp TheBigWindow.cpp Warrior.cpp AdventureCardDeck.cpp CharacterCardDeck.cpp main.cpp DragonRider.cpp Monk.cpp MapSquareFactory.cpp CharacterCardModel.cpp DieWidget.cpp AdventureCardModel.cpp Character.cpp MapBoard.cpp Armor.cpp CharacterFactory.cpp MapSquareModel.cpp Enemy.cpp Weapon.cpp AdventureCardEdit.cpp Die.cpp Follower.cpp AdventureCard.cpp AdventureCardFactory.cpp MapSquare.cpp
HEADERS += CharacterCardModel.h AdventureCard.h DieWidget.h AdventureCardModel.h CharacterCardDeck.h AdventureCardDeck.h Weapon.h MapSquare.h AdventureCardFactory.h AdventureCardEdit.h Character.h Warrior.h GameBoard.h MapBoard.h MapSquareFactory.h MapSquareModel.h CharacterFactory.h TheBigWindow.h DragonRider.h Enemy.h Follower.h Die.h Monk.h Armor.h
FORMS += TheBigWindow.ui MapBoard.ui AdventureCardEdit.ui GameBoard.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/MinGW_Qt-Windows
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc.exe
QMAKE_CXX = g++.exe
DEFINES += 
INCLUDEPATH += 
LIBS += 
