/* 
 * File:   AdventureCardEdit.h
 * Author: Alex
 *
 * Created on October 31, 2012, 8:17 PM
 */

#ifndef _ADVENTURECARDEDIT_H
#define	_ADVENTURECARDEDIT_H

#include "ui_AdventureCardEdit.h"
#include "AdventureCardModel.h"
#include "AdventureCard.h"
#include "Enemy.h"
#include "Follower.h"
#include <vector>
#include <QFile>

class AdventureCardEdit : public QWidget {
    Q_OBJECT
public:
    AdventureCardEdit();
    virtual ~AdventureCardEdit();
public slots:
    void currentIndexChanged (int index);
private:
    Ui::AdventureCardEdit widget;
    int currentIndex;
    vector<AdventureCard*> cards;
    void populateForm(int index);
    
public slots:
    void setTitle(const QString& value);
    void setType(const QString& value);
    void setText();
    void setEncounterNumber(const QString& value);
    void setSubType(const QString& value);
    void setAttackPoints(const QString& value);
    void clickedSave();
    void clickedReload();
private:
    void load();
};

#endif	/* _ADVENTURECARDEDIT_H */
