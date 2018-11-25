#ifndef BUTON_H
#define BUTON_H

#include <QPushButton>

class MainWindow;


class buton : public QPushButton
{
    Q_OBJECT
public:
    explicit buton(QWidget *parent = 0);
    MainWindow *anaform;
    QPoint ilkkonum;
    QPoint sonkonum;
    QPoint konum;
    int Xson=0;
    int Yson=0;
    int sayac=0;
    QString s1,s2;
    bool bosluk=false;
signals:

public slots:

private:
    void mousePressEvent(QMouseEvent *);

    void mouseMoveEvent(QMouseEvent *);

};

#endif // BUTON_H
