#############################################################################
# Makefile for building: TalismanQt
# Generated by qmake (2.01a) (Qt 4.6.2) on: Sun Dec 2 18:44:26 2012
# Project:  nbproject/qt-Debug.pro
# Template: app
# Command: c:\Qt\2010.02.1\qt\bin\qmake.exe -spec c:/Qt/2010.02.1/qt/mkspecs/win32-g++ -win32 VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc.exe
CXX           = g++.exe
DEFINES       = -DUNICODE -DQT_LARGEFILE_SUPPORT -DQT_DLL -DQT_GUI_LIB -DQT_CORE_LIB -DQT_THREAD_SUPPORT -DQT_NEEDS_QMAIN
CFLAGS        = -g -Wall $(DEFINES)
CXXFLAGS      = -g -frtti -fexceptions -mthreads -Wall $(DEFINES)
INCPATH       = -I'c:/Qt/2010.02.1/qt/include/QtCore' -I'c:/Qt/2010.02.1/qt/include/QtGui' -I'c:/Qt/2010.02.1/qt/include' -I'c:/Qt/2010.02.1/qt/include/ActiveQt' -I'.' -I'.' -I'nbproject' -I'.' -I'c:/Qt/2010.02.1/qt/mkspecs/win32-g++'
LINK        =        g++
LFLAGS        =        -enable-stdcall-fixup -Wl,-enable-auto-import -Wl,-enable-runtime-pseudo-reloc -mthreads -Wl -Wl,-subsystem,windows
LIBS        =        -L'c:/Qt/2010.02.1/qt/lib' -lmingw32 -lqtmaind build/Debug/MinGW_Qt-Windows/TalismanQt_resource_res.o -lQtGuid4 -lQtCored4 
QMAKE         = c:/Qt/2010.02.1/qt/bin//qmake.exe
IDC           = c:/Qt/2010.02.1/qt/bin//idc.exe
IDL           = midl
ZIP           = zip -r -9
DEF_FILE      = 
RES_FILE      = build/Debug/MinGW_Qt-Windows/TalismanQt_resource_res.o
COPY          = cp
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
DEL_FILE      = rm
DEL_DIR       = rmdir
MOVE          = mv
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir
INSTALL_FILE    = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR     = $(COPY_DIR)

####### Output directory

OBJECTS_DIR   = build/Debug/MinGW_Qt-Windows/

####### Files

SOURCES       = GameBoard.cpp \
		TheBigWindow.cpp \
		Warrior.cpp \
		AdventureCardDeck.cpp \
		CharacterCardDeck.cpp \
		main.cpp \
		DragonRider.cpp \
		Monk.cpp \
		MapSquareFactory.cpp \
		CharacterCardModel.cpp \
		DieWidget.cpp \
		AdventureCardModel.cpp \
		Character.cpp \
		MapBoard.cpp \
		Armor.cpp \
		CharacterFactory.cpp \
		MapSquareModel.cpp \
		Enemy.cpp \
		Weapon.cpp \
		AdventureCardEdit.cpp \
		Die.cpp \
		Follower.cpp \
		AdventureCard.cpp \
		AdventureCardFactory.cpp \
		MapSquare.cpp moc_CharacterCardDeck.cpp \
		moc_AdventureCardDeck.cpp \
		moc_AdventureCardEdit.cpp \
		moc_Character.cpp \
		moc_GameBoard.cpp \
		moc_MapBoard.cpp \
		moc_TheBigWindow.cpp
OBJECTS       = build/Debug/MinGW_Qt-Windows/GameBoard.o \
		build/Debug/MinGW_Qt-Windows/TheBigWindow.o \
		build/Debug/MinGW_Qt-Windows/Warrior.o \
		build/Debug/MinGW_Qt-Windows/AdventureCardDeck.o \
		build/Debug/MinGW_Qt-Windows/CharacterCardDeck.o \
		build/Debug/MinGW_Qt-Windows/main.o \
		build/Debug/MinGW_Qt-Windows/DragonRider.o \
		build/Debug/MinGW_Qt-Windows/Monk.o \
		build/Debug/MinGW_Qt-Windows/MapSquareFactory.o \
		build/Debug/MinGW_Qt-Windows/CharacterCardModel.o \
		build/Debug/MinGW_Qt-Windows/DieWidget.o \
		build/Debug/MinGW_Qt-Windows/AdventureCardModel.o \
		build/Debug/MinGW_Qt-Windows/Character.o \
		build/Debug/MinGW_Qt-Windows/MapBoard.o \
		build/Debug/MinGW_Qt-Windows/Armor.o \
		build/Debug/MinGW_Qt-Windows/CharacterFactory.o \
		build/Debug/MinGW_Qt-Windows/MapSquareModel.o \
		build/Debug/MinGW_Qt-Windows/Enemy.o \
		build/Debug/MinGW_Qt-Windows/Weapon.o \
		build/Debug/MinGW_Qt-Windows/AdventureCardEdit.o \
		build/Debug/MinGW_Qt-Windows/Die.o \
		build/Debug/MinGW_Qt-Windows/Follower.o \
		build/Debug/MinGW_Qt-Windows/AdventureCard.o \
		build/Debug/MinGW_Qt-Windows/AdventureCardFactory.o \
		build/Debug/MinGW_Qt-Windows/MapSquare.o \
		build/Debug/MinGW_Qt-Windows/moc_CharacterCardDeck.o \
		build/Debug/MinGW_Qt-Windows/moc_AdventureCardDeck.o \
		build/Debug/MinGW_Qt-Windows/moc_AdventureCardEdit.o \
		build/Debug/MinGW_Qt-Windows/moc_Character.o \
		build/Debug/MinGW_Qt-Windows/moc_GameBoard.o \
		build/Debug/MinGW_Qt-Windows/moc_MapBoard.o \
		build/Debug/MinGW_Qt-Windows/moc_TheBigWindow.o
DIST          = 
QMAKE_TARGET  = TalismanQt
DESTDIR        = dist/Debug/MinGW_Qt-Windows/ #avoid trailing-slash linebreak
TARGET         = TalismanQt.exe
DESTDIR_TARGET = dist/Debug/MinGW_Qt-Windows/TalismanQt.exe

####### Implicit rules

.SUFFIXES: .cpp .cc .cxx .c

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o $@ $<

####### Build rules

first: all
all: qttmp-Debug.mk  $(DESTDIR_TARGET)

$(DESTDIR_TARGET): ui_TheBigWindow.h ui_MapBoard.h ui_AdventureCardEdit.h ui_GameBoard.h $(OBJECTS) build/Debug/MinGW_Qt-Windows/TalismanQt_resource_res.o
	$(LINK) $(LFLAGS) -o $(DESTDIR_TARGET) object_script.TalismanQt  $(LIBS)


build/Debug/MinGW_Qt-Windows/TalismanQt_resource_res.o: TalismanQt_resource.rc
	windres -i TalismanQt_resource.rc -o build/Debug/MinGW_Qt-Windows/TalismanQt_resource_res.o --include-dir=.

qttmp-Debug.mk: nbproject/qt-Debug.pro  c:/Qt/2010.02.1/qt/mkspecs/win32-g++/qmake.conf c:/Qt/2010.02.1/qt/mkspecs/qconfig.pri \
		c:/Qt/2010.02.1/qt/mkspecs/features/qt_functions.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/qt_config.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/exclusive_builds.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/default_pre.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/win32/default_pre.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/debug.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/default_post.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/win32/default_post.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/win32/rtti.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/win32/exceptions.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/win32/stl.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/shared.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/warn_on.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/qt.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/win32/thread.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/moc.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/win32/windows.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/resources.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/uic.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/yacc.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/lex.prf \
		c:/Qt/2010.02.1/qt/mkspecs/features/include_source_dir.prf \
		c:/Qt/2010.02.1/qt/lib/qtmaind.prl
	$(QMAKE) -spec c:/Qt/2010.02.1/qt/mkspecs/win32-g++ -win32 VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
c:/Qt/2010.02.1/qt/mkspecs/qconfig.pri:
c:/Qt/2010.02.1/qt/mkspecs/features/qt_functions.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/qt_config.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/exclusive_builds.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/default_pre.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/win32/default_pre.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/debug.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/default_post.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/win32/default_post.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/win32/rtti.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/win32/exceptions.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/win32/stl.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/shared.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/warn_on.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/qt.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/win32/thread.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/moc.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/win32/windows.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/resources.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/uic.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/yacc.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/lex.prf:
c:/Qt/2010.02.1/qt/mkspecs/features/include_source_dir.prf:
c:\Qt\2010.02.1\qt\lib\qtmaind.prl:
qmake:  FORCE
	@$(QMAKE) -spec c:/Qt/2010.02.1/qt/mkspecs/win32-g++ -win32 VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro

dist:
	$(ZIP) TalismanQt.zip $(SOURCES) $(DIST) nbproject/nbproject/qt-Debug.pro c:/Qt/2010.02.1/qt/mkspecs/qconfig.pri c:/Qt/2010.02.1/qt/mkspecs/features/qt_functions.prf c:/Qt/2010.02.1/qt/mkspecs/features/qt_config.prf c:/Qt/2010.02.1/qt/mkspecs/features/exclusive_builds.prf c:/Qt/2010.02.1/qt/mkspecs/features/default_pre.prf c:/Qt/2010.02.1/qt/mkspecs/features/win32/default_pre.prf c:/Qt/2010.02.1/qt/mkspecs/features/debug.prf c:/Qt/2010.02.1/qt/mkspecs/features/default_post.prf c:/Qt/2010.02.1/qt/mkspecs/features/win32/default_post.prf c:/Qt/2010.02.1/qt/mkspecs/features/win32/rtti.prf c:/Qt/2010.02.1/qt/mkspecs/features/win32/exceptions.prf c:/Qt/2010.02.1/qt/mkspecs/features/win32/stl.prf c:/Qt/2010.02.1/qt/mkspecs/features/shared.prf c:/Qt/2010.02.1/qt/mkspecs/features/warn_on.prf c:/Qt/2010.02.1/qt/mkspecs/features/qt.prf c:/Qt/2010.02.1/qt/mkspecs/features/win32/thread.prf c:/Qt/2010.02.1/qt/mkspecs/features/moc.prf c:/Qt/2010.02.1/qt/mkspecs/features/win32/windows.prf c:/Qt/2010.02.1/qt/mkspecs/features/resources.prf c:/Qt/2010.02.1/qt/mkspecs/features/uic.prf c:/Qt/2010.02.1/qt/mkspecs/features/yacc.prf c:/Qt/2010.02.1/qt/mkspecs/features/lex.prf c:/Qt/2010.02.1/qt/mkspecs/features/include_source_dir.prf c:\Qt\2010.02.1\qt\lib\qtmaind.prl  HEADERS RESOURCES IMAGES SOURCES OBJECTIVE_SOURCES FORMS YACCSOURCES YACCSOURCES LEXSOURCES 

clean: compiler_clean 
	-$(DEL_FILE) build/Debug/MinGW_Qt-Windows/GameBoard.o build/Debug/MinGW_Qt-Windows/TheBigWindow.o build/Debug/MinGW_Qt-Windows/Warrior.o build/Debug/MinGW_Qt-Windows/AdventureCardDeck.o build/Debug/MinGW_Qt-Windows/CharacterCardDeck.o build/Debug/MinGW_Qt-Windows/main.o build/Debug/MinGW_Qt-Windows/DragonRider.o build/Debug/MinGW_Qt-Windows/Monk.o build/Debug/MinGW_Qt-Windows/MapSquareFactory.o build/Debug/MinGW_Qt-Windows/CharacterCardModel.o build/Debug/MinGW_Qt-Windows/DieWidget.o build/Debug/MinGW_Qt-Windows/AdventureCardModel.o build/Debug/MinGW_Qt-Windows/Character.o build/Debug/MinGW_Qt-Windows/MapBoard.o build/Debug/MinGW_Qt-Windows/Armor.o build/Debug/MinGW_Qt-Windows/CharacterFactory.o build/Debug/MinGW_Qt-Windows/MapSquareModel.o build/Debug/MinGW_Qt-Windows/Enemy.o build/Debug/MinGW_Qt-Windows/Weapon.o build/Debug/MinGW_Qt-Windows/AdventureCardEdit.o build/Debug/MinGW_Qt-Windows/Die.o build/Debug/MinGW_Qt-Windows/Follower.o build/Debug/MinGW_Qt-Windows/AdventureCard.o build/Debug/MinGW_Qt-Windows/AdventureCardFactory.o build/Debug/MinGW_Qt-Windows/MapSquare.o build/Debug/MinGW_Qt-Windows/moc_CharacterCardDeck.o build/Debug/MinGW_Qt-Windows/moc_AdventureCardDeck.o build/Debug/MinGW_Qt-Windows/moc_AdventureCardEdit.o build/Debug/MinGW_Qt-Windows/moc_Character.o build/Debug/MinGW_Qt-Windows/moc_GameBoard.o build/Debug/MinGW_Qt-Windows/moc_MapBoard.o build/Debug/MinGW_Qt-Windows/moc_TheBigWindow.o
	-$(DEL_FILE) build/Debug/MinGW_Qt-Windows/TalismanQt_resource_res.o

distclean: clean
	-$(DEL_FILE) $(DESTDIR_TARGET)
	-$(DEL_FILE) qttmp-Debug.mk

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_CharacterCardDeck.cpp moc_AdventureCardDeck.cpp moc_AdventureCardEdit.cpp moc_Character.cpp moc_GameBoard.cpp moc_MapBoard.cpp moc_TheBigWindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_CharacterCardDeck.cpp moc_AdventureCardDeck.cpp moc_AdventureCardEdit.cpp moc_Character.cpp moc_GameBoard.cpp moc_MapBoard.cpp moc_TheBigWindow.cpp
moc_CharacterCardDeck.cpp: CharacterFactory.h \
		CharacterCardModel.h \
		Character.h \
		Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h \
		DragonRider.h \
		Warrior.h \
		Monk.h \
		CharacterCardDeck.h
	C:/Qt/2010.02.1/qt/bin/\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 CharacterCardDeck.h -o moc_CharacterCardDeck.cpp

moc_AdventureCardDeck.cpp: Enemy.h \
		AdventureCard.h \
		Die.h \
		AdventureCardDeck.h
	C:/Qt/2010.02.1/qt/bin/\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 AdventureCardDeck.h -o moc_AdventureCardDeck.cpp

moc_AdventureCardEdit.cpp: ui_AdventureCardEdit.h \
		AdventureCardModel.h \
		AdventureCard.h \
		Die.h \
		Enemy.h \
		Follower.h \
		AdventureCardEdit.h
	C:/Qt/2010.02.1/qt/bin/\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 AdventureCardEdit.h -o moc_AdventureCardEdit.cpp

moc_Character.cpp: Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h \
		Character.h
	C:/Qt/2010.02.1/qt/bin/\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 Character.h -o moc_Character.cpp

moc_GameBoard.cpp: ui_GameBoard.h \
		DieWidget.h \
		AdventureCardDeck.h \
		Enemy.h \
		AdventureCard.h \
		Die.h \
		CharacterCardDeck.h \
		CharacterFactory.h \
		CharacterCardModel.h \
		Character.h \
		Follower.h \
		DragonRider.h \
		Warrior.h \
		Monk.h \
		GameBoard.h
	C:/Qt/2010.02.1/qt/bin/\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 GameBoard.h -o moc_GameBoard.cpp

moc_MapBoard.cpp: MapSquare.h \
		Character.h \
		Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h \
		MapSquareFactory.h \
		MapSquareModel.h \
		MapBoard.h
	C:/Qt/2010.02.1/qt/bin/\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 MapBoard.h -o moc_MapBoard.cpp

moc_TheBigWindow.cpp: CharacterFactory.h \
		CharacterCardModel.h \
		Character.h \
		Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h \
		DragonRider.h \
		Warrior.h \
		Monk.h \
		CharacterCardDeck.h \
		AdventureCardDeck.h \
		DieWidget.h \
		MapSquare.h \
		MapBoard.h \
		MapSquareFactory.h \
		MapSquareModel.h \
		ui_TheBigWindow.h \
		TheBigWindow.h
	C:/Qt/2010.02.1/qt/bin/\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 TheBigWindow.h -o moc_TheBigWindow.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_TheBigWindow.h ui_MapBoard.h ui_AdventureCardEdit.h ui_GameBoard.h
compiler_uic_clean:
	-$(DEL_FILE) ui_TheBigWindow.h ui_MapBoard.h ui_AdventureCardEdit.h ui_GameBoard.h
ui_TheBigWindow.h: TheBigWindow.ui
	c:/Qt/2010.02.1/qt/bin//uic.exe TheBigWindow.ui -o ui_TheBigWindow.h

ui_MapBoard.h: MapBoard.ui
	c:/Qt/2010.02.1/qt/bin//uic.exe MapBoard.ui -o ui_MapBoard.h

ui_AdventureCardEdit.h: AdventureCardEdit.ui
	c:/Qt/2010.02.1/qt/bin//uic.exe AdventureCardEdit.ui -o ui_AdventureCardEdit.h

ui_GameBoard.h: GameBoard.ui
	c:/Qt/2010.02.1/qt/bin//uic.exe GameBoard.ui -o ui_GameBoard.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 



####### Compile

build/Debug/MinGW_Qt-Windows/GameBoard.o: GameBoard.cpp GameBoard.h \
		ui_GameBoard.h \
		DieWidget.h \
		AdventureCardDeck.h \
		Enemy.h \
		AdventureCard.h \
		Die.h \
		CharacterCardDeck.h \
		CharacterFactory.h \
		CharacterCardModel.h \
		Character.h \
		Follower.h \
		DragonRider.h \
		Warrior.h \
		Monk.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/GameBoard.o GameBoard.cpp

build/Debug/MinGW_Qt-Windows/TheBigWindow.o: TheBigWindow.cpp TheBigWindow.h \
		CharacterFactory.h \
		CharacterCardModel.h \
		Character.h \
		Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h \
		DragonRider.h \
		Warrior.h \
		Monk.h \
		CharacterCardDeck.h \
		AdventureCardDeck.h \
		DieWidget.h \
		MapSquare.h \
		MapBoard.h \
		MapSquareFactory.h \
		MapSquareModel.h \
		ui_TheBigWindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/TheBigWindow.o TheBigWindow.cpp

build/Debug/MinGW_Qt-Windows/Warrior.o: Warrior.cpp Warrior.h \
		Character.h \
		Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/Warrior.o Warrior.cpp

build/Debug/MinGW_Qt-Windows/AdventureCardDeck.o: AdventureCardDeck.cpp AdventureCardDeck.h \
		Enemy.h \
		AdventureCard.h \
		Die.h \
		AdventureCardModel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/AdventureCardDeck.o AdventureCardDeck.cpp

build/Debug/MinGW_Qt-Windows/CharacterCardDeck.o: CharacterCardDeck.cpp CharacterCardDeck.h \
		CharacterFactory.h \
		CharacterCardModel.h \
		Character.h \
		Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h \
		DragonRider.h \
		Warrior.h \
		Monk.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/CharacterCardDeck.o CharacterCardDeck.cpp

build/Debug/MinGW_Qt-Windows/main.o: main.cpp DieWidget.h \
		GameBoard.h \
		ui_GameBoard.h \
		AdventureCardDeck.h \
		Enemy.h \
		AdventureCard.h \
		Die.h \
		CharacterCardDeck.h \
		CharacterFactory.h \
		CharacterCardModel.h \
		Character.h \
		Follower.h \
		DragonRider.h \
		Warrior.h \
		Monk.h \
		MapSquare.h \
		MapBoard.h \
		MapSquareFactory.h \
		MapSquareModel.h \
		TheBigWindow.h \
		ui_TheBigWindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/main.o main.cpp

build/Debug/MinGW_Qt-Windows/DragonRider.o: DragonRider.cpp DragonRider.h \
		Character.h \
		Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/DragonRider.o DragonRider.cpp

build/Debug/MinGW_Qt-Windows/Monk.o: Monk.cpp Monk.h \
		Character.h \
		Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/Monk.o Monk.cpp

build/Debug/MinGW_Qt-Windows/MapSquareFactory.o: MapSquareFactory.cpp MapSquareFactory.h \
		MapSquareModel.h \
		MapSquare.h \
		Character.h \
		Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/MapSquareFactory.o MapSquareFactory.cpp

build/Debug/MinGW_Qt-Windows/CharacterCardModel.o: CharacterCardModel.cpp CharacterCardModel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/CharacterCardModel.o CharacterCardModel.cpp

build/Debug/MinGW_Qt-Windows/DieWidget.o: DieWidget.cpp DieWidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/DieWidget.o DieWidget.cpp

build/Debug/MinGW_Qt-Windows/AdventureCardModel.o: AdventureCardModel.cpp AdventureCardModel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/AdventureCardModel.o AdventureCardModel.cpp

build/Debug/MinGW_Qt-Windows/Character.o: Character.cpp Character.h \
		Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/Character.o Character.cpp

build/Debug/MinGW_Qt-Windows/MapBoard.o: MapBoard.cpp MapBoard.h \
		MapSquare.h \
		Character.h \
		Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h \
		MapSquareFactory.h \
		MapSquareModel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/MapBoard.o MapBoard.cpp

build/Debug/MinGW_Qt-Windows/Armor.o: Armor.cpp Armor.h \
		AdventureCard.h \
		Die.h \
		Character.h \
		Enemy.h \
		Follower.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/Armor.o Armor.cpp

build/Debug/MinGW_Qt-Windows/CharacterFactory.o: CharacterFactory.cpp CharacterFactory.h \
		CharacterCardModel.h \
		Character.h \
		Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h \
		DragonRider.h \
		Warrior.h \
		Monk.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/CharacterFactory.o CharacterFactory.cpp

build/Debug/MinGW_Qt-Windows/MapSquareModel.o: MapSquareModel.cpp MapSquareModel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/MapSquareModel.o MapSquareModel.cpp

build/Debug/MinGW_Qt-Windows/Enemy.o: Enemy.cpp Enemy.h \
		AdventureCard.h \
		Die.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/Enemy.o Enemy.cpp

build/Debug/MinGW_Qt-Windows/Weapon.o: Weapon.cpp Weapon.h \
		AdventureCard.h \
		Die.h \
		Character.h \
		Enemy.h \
		Follower.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/Weapon.o Weapon.cpp

build/Debug/MinGW_Qt-Windows/AdventureCardEdit.o: AdventureCardEdit.cpp AdventureCardEdit.h \
		ui_AdventureCardEdit.h \
		AdventureCardModel.h \
		AdventureCard.h \
		Die.h \
		Enemy.h \
		Follower.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/AdventureCardEdit.o AdventureCardEdit.cpp

build/Debug/MinGW_Qt-Windows/Die.o: Die.cpp Die.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/Die.o Die.cpp

build/Debug/MinGW_Qt-Windows/Follower.o: Follower.cpp Follower.h \
		AdventureCard.h \
		Die.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/Follower.o Follower.cpp

build/Debug/MinGW_Qt-Windows/AdventureCard.o: AdventureCard.cpp AdventureCard.h \
		Die.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/AdventureCard.o AdventureCard.cpp

build/Debug/MinGW_Qt-Windows/AdventureCardFactory.o: AdventureCardFactory.cpp AdventureCardFactory.h \
		AdventureCardModel.h \
		AdventureCard.h \
		Die.h \
		Enemy.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/AdventureCardFactory.o AdventureCardFactory.cpp

build/Debug/MinGW_Qt-Windows/MapSquare.o: MapSquare.cpp MapSquare.h \
		Character.h \
		Die.h \
		Enemy.h \
		AdventureCard.h \
		Follower.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/MapSquare.o MapSquare.cpp

build/Debug/MinGW_Qt-Windows/moc_CharacterCardDeck.o: moc_CharacterCardDeck.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/moc_CharacterCardDeck.o moc_CharacterCardDeck.cpp

build/Debug/MinGW_Qt-Windows/moc_AdventureCardDeck.o: moc_AdventureCardDeck.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/moc_AdventureCardDeck.o moc_AdventureCardDeck.cpp

build/Debug/MinGW_Qt-Windows/moc_AdventureCardEdit.o: moc_AdventureCardEdit.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/moc_AdventureCardEdit.o moc_AdventureCardEdit.cpp

build/Debug/MinGW_Qt-Windows/moc_Character.o: moc_Character.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/moc_Character.o moc_Character.cpp

build/Debug/MinGW_Qt-Windows/moc_GameBoard.o: moc_GameBoard.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/moc_GameBoard.o moc_GameBoard.cpp

build/Debug/MinGW_Qt-Windows/moc_MapBoard.o: moc_MapBoard.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/moc_MapBoard.o moc_MapBoard.cpp

build/Debug/MinGW_Qt-Windows/moc_TheBigWindow.o: moc_TheBigWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW_Qt-Windows/moc_TheBigWindow.o moc_TheBigWindow.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

