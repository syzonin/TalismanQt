/* 
 * File:   WeaponDialog.h
 * Author: Alex
 *
 * Created on December 9, 2012, 6:29 PM
 */

#ifndef _WEAPONDIALOG_H
#define	_WEAPONDIALOG_H
#include "ui_WeaponDialog.h"
#include "Character.h"
#include "AdventureCard.h"
#include "Weapon.h"
using namespace std;

class WeaponDialog : public QDialog {
    Q_OBJECT
public:
    WeaponDialog(QWidget *parent, Character *c, vector<Weapon*> &v);
    virtual ~WeaponDialog();
public slots:
    void currentIndexChanged (int index);
    void btnEquipClicked ();
private:
    Ui::WeaponDialog widget;
    int currentIndex;
    vector<Weapon*> cards;
    vector<Weapon*> *weapons;
};

#endif	/* _WEAPONDIALOG_H */
