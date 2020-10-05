#include "chronometre.h"
#include "ui_chronometre.h"

Chronometre::Chronometre(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Chronometre)
{
    ui->setupUi(this);
   // setMinimumSize(190,100);
   // setMaximumSize(190,100);

    // création du timer
    mon_timer = new QTimer(this);
    // connexion du signal timeout du timer au slot slotTimeOut
      connect(mon_timer, SIGNAL(timeout()),this,SLOT(slotTimeOut()));
     compteur=0;
      // création et connexion du bouton start
  //    QPushButton *pbStart = new QPushButton("Start",this);
   //   pbStart->setGeometry(20,10,70,30);
   //   pbStart->setFont( QFont("Times",18,QFont::Bold));
   //   connect(pbStart, SIGNAL(clicked()),this,SLOT(slotStart()));

      // création et connexion du bouton stop
   //   QPushButton *pbStop = new QPushButton("Stop",this);
   //   pbStop->setGeometry(90,10,70,30);
   //   pbStop->setFont( QFont("Times",18,QFont::Bold));
   //   connect(pbStop, SIGNAL(clicked()),this,SLOT(slotStop()));

      // création et connexion du bouton start
   //   QPushButton *pbQuit = new QPushButton("Quit",this);
   //   pbQuit->setGeometry(20,50,70,30);
   //   pbQuit->setFont( QFont("Times",18,QFont::Bold));

      // on connecte le signal du bouton quit à l'alias de l'application qApp
   //   connect(pbQuit, SIGNAL(clicked()),qApp ,SLOT(quit()));
      
     // mlcd=new QLCDNumber(this);
    //  mlcd->setGeometry(90,50,70,30);

}

Chronometre::~Chronometre()
{
    delete ui;
}

void Chronometre::slotStart()
{
  mon_timer->start(1000);
}

void Chronometre::slotStop()
{
  mon_timer->stop();
}

void Chronometre::slotTimeOut()
{
    static int i=0;
  qDebug() << "...top"  ;
  mlcd->display(compteur);
  i++;
  compteur++;
}


void Chronometre::on_start_clicked()
{
    mon_timer->start(1000);
}

void Chronometre::on_stop_clicked()
{
    mon_timer->stop();
}

void Chronometre::on_quit_clicked()
{
 close();
}
