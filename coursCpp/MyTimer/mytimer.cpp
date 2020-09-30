#include "mytimer.h"
#include "ui_mytimer.h"
#include <QPushButton>
#include <QFont>
#include <QDebug>
#include <QApplication>
MyTimer::MyTimer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyTimer)
{
    ui->setupUi(this);
    // on fixe les dimension du widget
    setMinimumSize(190,100);
    setMaximumSize(190,100);
    // création du timer
    mon_timer = new QTimer(this);
    // connexion du signal timeout du timer au slot slotTimeOut
    connect(mon_timer, SIGNAL(timeout()),this,SLOT(slotTimeOut()));
    // création et connexion du bouton start
    pbStart = new QPushButton("Start",this);
    pbStart->setGeometry(20,10,70,30);
    connect(pbStart, SIGNAL(pressed()),this,SLOT(slotStart()));
    pbStart->setFont( QFont("Times",18,QFont::Bold));
    //................................................................................................
    // création et connexion du bouton stop
    pbStop = new QPushButton("Stop",this);
    connect(pbStop, SIGNAL(pressed()),this,SLOT(slotStop()));
    pbStop->setGeometry(90,10,70,30);
    pbStop->setFont( QFont("Times",18,QFont::Bold));
   // ..........................................................................................................
    // création et connexion du bouton start
    pbQuit = new QPushButton("Quit",this);
    connect(pbQuit, SIGNAL(pressed()),qApp, SLOT(quit()));
    pbQuit->setGeometry(50,50,70,30);
    pbQuit->setFont( QFont("Times",18,QFont::Bold));
    // on connecte le signal du bouton quit à l'alias de l'application qApp
}


void MyTimer::slotStart()
{
mon_timer->start(1000);
}
void MyTimer::slotStop()
{
mon_timer->stop();
}
void MyTimer::slotTimeOut()
{
qDebug() << "Ca marche" ;
}
/*
MyTimer::MyTimer(QWidget *parent) : QmainWindow(parent)
{
// on fixe les dimension du widget
setMinimumSize(190,100);
setMaximumSize(190,100);
// création du timer
mon_timer = new QTimer(this);
// connexion du signal timeout du timer au slot slotTimeOut
connect(mon_timer, SIGNAL(timeout()),this,SLOT(slotTimeOut()));
// création et connexion du bouton start
pbStart = new QPushButton("Start",this);
pbStart->setGeometry(20,10,70,30);
pbStart->setFont( QFont("Times",18,QFont::Bold));
................................................................................................
// création et connexion du bouton stop
pbStop = new QPushButton("Stop",this);
pbStop->setGeometry(90,10,70,30);
pbStop->setFont( QFont("Times",18,QFont::Bold));
..........................................................................................................
// création et connexion du bouton start
pbQuit = new QPushButton("Quit",this);
pbQuit->setGeometry(50,50,70,30);
pbQuit->setFont( QFont("Times",18,QFont::Bold));
// on connecte le signal du bouton quit à l'alias de l'application qApp
..........................................................................................
}
*/
MyTimer::~MyTimer()
{
  //  delete ui;
    delete mon_timer;
}

