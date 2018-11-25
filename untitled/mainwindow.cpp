//Muhammet Metin
//15010011029

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QPropertyAnimation>
#include <QLabel>
#include <QMessageBox>
#include <QApplication>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            grafim[i][j]=0;
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

struct Edge
{
    int src, dest, weight;
};

struct Graph
{
    int V, E;
    struct Edge* edge;
};

struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;

    graph->edge = new Edge[E];

    return graph;
}

struct subset
{
    int parent;
    int rank;
};

int MainWindow::find(struct subset subsets[], int i)
{
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);

    return subsets[i].parent;
}

void MainWindow::Union(struct subset subsets[], int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

int MainWindow::myComp(const void* a, const void* b)
{
    struct Edge* a1 = (struct Edge*)a;
    struct Edge* b1 = (struct Edge*)b;
    return a1->weight > b1->weight;
}

int MainWindow::minKey(int key[], bool mstSet[])
{
    //o anki noddan en kısa hangi node gidebileceğimizi gösterir.
    int min = INT_MAX, min_index;
     for (int v = 0; v < counter; v++)
       if (mstSet[v] == false && key[v] < min)
           min = key[v], min_index = v;

     return min_index;
}

void MainWindow::on_nodeEkle_clicked()
{
    buton *dugme =new buton(this);
    butonlar.push_back(dugme);
    dugme->anaform=this;
    int x=rand()%300;
    int y=rand()%300;

    dugme->setGeometry(x+50,y+50,40,40);
    dugme->setText(QString::number(sayac));
    dugme->setStyleSheet("background-color:red");
    dugme->show();
    X+=45;
    sayac++;
    syc++;

}

void MainWindow::yenidenciz(int bir,int iki)
{
    //cizgiler.clear();
    cizgi.setLine(butonlar[bir]->x()+20,butonlar[bir]->y()+20,butonlar[iki]->x()+20,butonlar[iki]->y()+20);
    cizgiler.push_back(cizgi);
    label *lbl=new label(this);
    int x=(butonlar[iki]->x()-butonlar[bir]->x())/2+butonlar[bir]->x();
    int y=(butonlar[iki]->y()-butonlar[bir]->y())/2+butonlar[bir]->y();
    agirlik= sqrt(x*x+y*y)/10;
    on_agirlik+=agirlik;
    lbl->setGeometry(x,y,50,50);
    lbl->setText(QString::number(agirlik));
    labeller.push_back(lbl);
    lbl->show();
    int src=butonlar[bir]->text().toInt();
    int dist=butonlar[iki]->text().toInt();
    graf[counter][0]=src;
    graf[counter][1]=dist;
    graf[counter][2]=w;
    counter++;

}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter cizici (this);
    QPen kalem(Qt::yellow, Qt::SolidLine);
    kalem.setWidth(5);
    cizici.setPen(kalem);
    cizici.drawLines(cizgiler);
    cizici.drawLines(cizgiler2);
    cizici.drawLines(cizgiler3);
    update();
}

void MainWindow::on_kacNode_returnPressed()
{
    //line editteki değeri enter ile alırız.
    QString linedit;
    QString s1,s2;
    bool bosluk=false;
    bool devamEt=false;
    linedit=ui->kacNode->text();
    for(int i=0 ; i< linedit.length();++i){
        if(linedit[i]==' '){
            devamEt=true;
            continue;
        }
    }

    if(devamEt==false){
        //uygulamayı yeniden başlatır.
        QMessageBox::information(this,"uyarı","Yanlış formatta giriş yaptınız "
                                              "                                                                                     "
                                              "Uygun Format:1.node boşluk ikinci node","TAMAM");

        ui->kacNode->clear();
       return;
    }

    for (int i = 0; i < linedit.length(); ++i) {
        if(linedit[i]!=' ' && bosluk==false){
            s1+=linedit[i];
        }
        else if(linedit[i]==' ') {
            i++;
            bosluk=true;

        }
        if(linedit[i]!=' ' && bosluk==true){
            s2+=linedit[i];
        }
    }    
    if(s1.toInt()>syc || s2.toInt()>syc){
        QMessageBox::information(this,"uyarı","Mevcut olmayan bir node girdiniz.","TAMAM");
        return;
    }
    for (int i = 0; i < node_liste.length(); ++i) {
        if(node_liste.value(i)==s1+""+s2){
            QMessageBox::information(this,"uyarı","O nodlar arasında zaten çizgi var.","TAMAM");
            return;
        }
    }
    node_liste.push_back(s1+""+s2);
    yenidenciz(s1.toInt(),s2.toInt());
    //grafimizi grafim adlı çift boyutlu bir matrise atarız
    QSize ilk(40,40);
    QSize son(60,60);
    QPropertyAnimation *animation = new QPropertyAnimation(butonlar[s1.toInt()],"size");
    animation->setDuration(5000);
    animation->setEasingCurve(QEasingCurve::OutElastic);
    animation->setStartValue(ilk);
    animation->setEndValue(son);
    animation->start();
    animation->stop();
    animation->setDuration(5000);
    animation->setEasingCurve(QEasingCurve::OutElastic);
    animation->setStartValue(son);
    animation->setEndValue(ilk);
    animation->start();
    QPropertyAnimation *animation2 = new QPropertyAnimation(butonlar[s2.toInt()],"size");
    animation2->setDuration(5000);
    animation2->setEasingCurve(QEasingCurve::OutElastic);
    animation2->setStartValue(ilk);
    animation2->setEndValue(son);
    animation2->start();
    animation2->stop();
    animation2->setDuration(5000);
    animation2->setEasingCurve(QEasingCurve::OutElastic);
    animation2->setStartValue(son);
    animation2->setEndValue(ilk);
    animation2->start();

    grafim[s1.toInt()][s2.toInt()]=agirlik;
}

void MainWindow::on_kruksal_clicked()
{
    //grafimizi uygun formatta graph değişkenine alıp KruksalMST metoduna gönderiyoruz
    struct Graph* graph = createGraph(sayac, counter);
    for(int i =0 ; i< counter ; i++){
        graph->edge[i].src = graf[i][0];
        graph->edge[i].dest = graf[i][1];
        graph->edge[i].weight = graf[i][2];
    }
    KruskalMST(graph);  
    QMessageBox::information(this,"Bilgi","Kruksal'dan önceki toplam ağırlık "+QString::number(on_agirlik)+" sonraki toplam ağırlık "+QString::number(top_agirlik)+" olmuştur");

}

void MainWindow::on_prims_clicked()
{    
    //uygun formattaki matrisi primMST fonksiyonuna göndeririz
    primMST(grafim);

    QMessageBox::information(this,"Bilgi","Prims'ten önceki toplam ağırlık "+QString::number(on_agirlik)+" sonraki toplam ağırlık "+QString::number(top_agirlik)+" olmuştur");
}

//prims algoritması
void MainWindow::primMST(int graph[100][100])
{
     int parent[40];
     int key[40];
     bool mstSet[40];
     for (int i = 0; i < syc; i++)
        key[i] = INT_MAX, mstSet[i] = false;
     key[0] = 0;
     parent[0] = -1;     
     for (int count = 0; count < syc-1; count++)
     {
        int u = minKey(key, mstSet);
        mstSet[u] = true;
        for (int v = 0; v < syc; v++)

          if (graph[u][v] && mstSet[v] == false && graph[u][v] <  key[v]){              
             parent[v]  = u, key[v] = graph[u][v];
          }
     }
     //prims algoritması uygulandıktan sonra yeni çizgilerin
     //çizilmesini sağlar
     for (int i = 1; i < sayac; i++) {
         //ui->listWidget->addItem(QString::number(i));
         cizgi.setLine(butonlar[parent[i]]->x()+20,butonlar[parent[i]]->y()+20,butonlar[i]->x()+20,butonlar[i]->y()+20);
         cizgiler3.push_back(cizgi);
         label *lbl2=new label(this);
         int x=(butonlar[i]->x()-butonlar[parent[i]]->x())/2+butonlar[parent[i]]->x();
         int y=(butonlar[i]->y()-butonlar[parent[i]]->y())/2+butonlar[parent[i]]->y();
         //int x=23,y=234;
         w=sqrt(x*x+y*y)/10;
         top_agirlik+=w;
         lbl2->setGeometry(x,y,50,50);
         lbl2->setText(QString::number(w));
         labeller3.push_back(lbl2);
         lbl2->show();
     }

     cizgiler.clear();

     for (int i = 0; i < labeller.length(); ++i) {
         delete labeller.value(i);
     }
    return;
}

//kruksal algoritması
void MainWindow::KruskalMST(struct Graph* graph)
{
    int V = graph->V;
    struct Edge result[V];
    int e = 0;
    int i = 0;
    //qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp);
    struct subset *subsets = (struct subset*) malloc( V * sizeof(struct subset) );
    for (int v = 0; v < V; ++v)
    {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }
    while (e < V - 1)
    {
        struct Edge next_edge = graph->edge[i++];

        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);

        if (x != y)
        {
            result[e++] = next_edge;
            Union(subsets, x, y);
        }

    }

   for (int i = 0; i < e; ++i) {
        cizgi.setLine(butonlar[result[i].src]->x()+20,butonlar[result[i].src]->y()+20,butonlar[result[i].dest]->x()+20,butonlar[result[i].dest]->y()+20);
        cizgiler2.push_back(cizgi);
        label *lbl2=new label(this);
        int x=(butonlar[result[i].dest]->x()-butonlar[result[i].src]->x())/2+butonlar[result[i].src]->x();
        int y=(butonlar[result[i].dest]->y()-butonlar[result[i].src]->y())/2+butonlar[result[i].src]->y();
        w=sqrt(x*x+y*y)/10;
        top_agirlik+=w;
        lbl2->setGeometry(x,y,50,50);
        lbl2->setText(QString::number(w));
        labeller2.push_back(lbl2);
        lbl2->show();
    }
    cizgiler.clear();
    for (int i = 0; i < labeller.length(); ++i) {
        delete labeller.value(i);
    }
    return;
}

void MainWindow::on_ekrani_temizle_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "UYARI", "Ekranı temizlemek istediğinize emin misiniz??",QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QApplication::quit();
      } else {
        return;
      }


    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

void MainWindow::on_pushButton_clicked()
{
    on_kacNode_returnPressed();
}
