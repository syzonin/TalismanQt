/* 
 * File:   SpellDialog.h
 * Author: Alex
 *
 * Created on December 9, 2012, 1:49 PM
 */

#ifndef _SPELLDIALOG_H
#define	_SPELLDIALOG_H
#include "ui_SpellDialog.h"
#include "Character.h"
#include "AdventureCard.h"
#include "Spell.h"
using namespace std;

class SpellDialog : public QDialog {
    Q_OBJECT
public:
    SpellDialog(QWidget * parent = 0, Character * character = 0, Enemy * enemy = 0);
    virtual ~SpellDialog();
public slots:
    void currentIndexChanged (int index);
    void btnCastClicked ();
private:
    Ui::SpellDialog widget;
    int currentIndex;
    Character *c;
    Enemy *e;
    vector<Spell*> cards;
};

#endif	/* _SPELLDIALOG_H */
