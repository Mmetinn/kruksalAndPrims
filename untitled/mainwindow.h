#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "buton.h"
#include <QList>
#include <QLabel>
#include "label.h"


class buton;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void yenidenciz(int,int);
    buton *degiskenler;
    //void kruskal();
    int find(struct subset[],int);
    void Union(struct subset [] ,int ,int);
    int myComp(const void*,const void*);
    void KruskalMST(struct Graph*);
    int grafim[100][100];
    int v=0,e=0;
    bool gidilidMi[];
    void primMST(int [100][100]);
    int minKey(int[100],bool[100]);
    int w;
    int syc=0;
    QList<QString> node_liste;


private slots:
void on_kacNode_returnPressed();
    void on_nodeEkle_clicked();

    void on_kruksal_clicked();

    void on_prims_clicked();

    void on_ekrani_temizle_clicked();


    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;    
    QList<buton*> butonlar;
    QList<QLabel*> labeller;
    QList<QLabel*> labeller2;
    QList<QLabel*> labeller3;
    void paintEvent(QPaintEvent *);
    QLine cizgi;
    QLine cizgi2;
    QLine cizgi3;
    QVector<QLine> cizgiler;
    QVector<QLine> cizgiler2;
    QVector<QLine> cizgiler3;
    int sayac=0;
    int X=50;
    int col =1234;
    int top_agirlik=0;
    int graf[100][3];
    int counter=0;
    int agirlik=0;
    int on_agirlik=0;

};

#endif // MAINWINDOW_H
