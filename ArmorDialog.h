/* 
 * File:   ArmorDialog.h
 * Author: Alex
 *
 * Created on December 9, 2012, 8:34 PM
 */

#ifndef _ARMORDIALOG_H
#define	_ARMORDIALOG_H
#include "ui_ArmorDialog.h"
#include "Character.h"
#include "AdventureCard.h"
#include "Armor.h"
using namespace std;

class ArmorDialog : public QDialog {
    Q_OBJECT
public:
    ArmorDialog(QWidget *parent, Character *c, vector<Armor*> &v);
    virtual ~ArmorDialog();
public slots:
    void currentIndexChanged (int index);
    void btnEquipClicked ();
private:
    Ui::ArmorDialog widget;
    int currentIndex;
    vector<Armor*> cards;
    vector<Armor*> *armors;
};

#endif	/* _ARMORDIALOG_H */
