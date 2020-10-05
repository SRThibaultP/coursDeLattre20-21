#include "chronometre.h"
#include "ui_chronometre.h"

chronometre::chronometre(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::chronometre)
{
    ui->setupUi(this);
    // création du timer
        mon_timer = new QTimer(this);
        // connexion du signal timeout du timer au slot slotTimeOut
          connect(mon_timer, SIGNAL(timeout()),this,SLOT(slotTimeOut()));
         compteur=0;
}

chronometre::~chronometre()
{
    delete ui;

}


void chronometre::on_start_clicked()
{
    mon_timer->start(1000);
}

void chronometre::on_stop_clicked()
{
    mon_timer->stop();
}

void chronometre::on_quit_clicked()
{
    close();
}

void chronometre::slotTimeOut()
{
    static int i=0;
      ui->lcdNumber->display(compteur);
      i++;
      compteur++;
}

void chronometre::on_reset_clicked()
{
    compteur = 0;
    ui->lcdNumber->display(compteur);
}
