/* 
 * File:   DieWidget.h
 * Author: Alex
 *
 * Created on November 2, 2012, 3:29 PM
 */

#ifndef DIEWIDGET_H
#define	DIEWIDGET_H
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <QPainter>
#include <QWidget>
using namespace std;

class DieWidget : public QWidget {
public:
    DieWidget();
    virtual ~DieWidget();
    void roll();
    int getRolledNumber();
protected:
    void paintEvent(QPaintEvent*);
    //void mouseDoubleClickEvent(QMouseEvent*);
private:
    int rolledNumber;
};

#endif	/* DIEWIDGET_H */

