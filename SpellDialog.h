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
    SpellDialog(QWidget *parent, Character *c, vector<Spell*> &v);
    virtual ~SpellDialog();
public slots:
    void currentIndexChanged (int index);
    void btnCastClicked ();
private:
    Ui::SpellDialog widget;
    int currentIndex;
    vector<Spell*> cards;
    vector<Spell*> *spells;
};

#endif	/* _SPELLDIALOG_H */
