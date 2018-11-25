#include "buton.h"
#include <QMouseEvent>
#include "mainwindow.h"



buton::buton(QWidget *parent) :
    QPushButton(parent)
{

}

void buton::mousePressEvent(QMouseEvent *event)
{
    ilkkonum = event->pos();
}

void buton::mouseMoveEvent(QMouseEvent *event)
{
    Xson = event->x()-ilkkonum.x()+x();
    Yson = event->y()-ilkkonum.y()+y();
    konum=event->pos()-ilkkonum;

    setGeometry(Xson,Yson,40,40);   
}

