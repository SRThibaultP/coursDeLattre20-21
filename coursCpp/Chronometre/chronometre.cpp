#include "chronometre.h"
#include "ui_chronometre.h"
#include <QDebug>

Chronometre::Chronometre(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Chronometre)
{

    ui -> setupUi(this);
    m_lcd = new QLCDNumber();


/*QWidget *zoneCentrale = new QWidget;
setCentralWidget(zoneCentrale);             // Définition de la fenêtre
//---------------------------------------------------------------------//
m_bout_start = new QPushButton("Start");    // Liste des Widgets
m_bout_reset = new QPushButton("Reset");
m_bout_stop  = new QPushButton("Stop");*/
m_lcd = new QLCDNumber();/*
//---------------------------------------------------------------------//
m_layout = new QGridLayout();               // Création du calque
m_layout->addWidget(m_bout_start,0,0);
m_layout->addWidget(m_bout_stop,1,0);
m_layout->addWidget(m_lcd,0,1);
m_layout->addWidget(m_bout_reset,1,1);

zoneCentrale->setLayout(m_layout);
//---------------------------------------------------------------------//
timer_chrono = new QTimer();                // Création du Compteur
resetCount();                               // MAZ variable de comptage
//---------------------------------------------------------------------//
connect( m_bout_start, SIGNAL(clicked()), this, SLOT(on_start_clicked()));
connect( timer_chrono, SIGNAL(timeout()), this, SLOT(onTimer_Tick()));
connect( m_bout_stop, SIGNAL(clicked()), timer_chrono, SLOT(stop()));
connect( m_bout_reset, SIGNAL(clicked()), this, SLOT(on_reset_clicked()));
//---------------------------------------------------------------------//
//              AFFICHAGE BARRE DE MENUS
//---------------------------------------------------------------------//
QMenu *menuFichier = menuBar()->addMenu("&Fichier");
QAction *actionQuitter = new QAction("&Quitter", this);
menuFichier->addAction(actionQuitter);
connect(actionQuitter, SIGNAL(triggered()), qApp, SLOT(quit()));*/

// ui->setupUi(this);
}



//=========================================================================//
void Chronometre::resetCount()
{
    countTimer=0;
}
//=========================================================================//
void Chronometre::updateCount()
{
    countTimer++;
    qDebug() << m_lcd->digitCount();
}
//=========================================================================//
void Chronometre::on_start_clicked()
{
    timer_chrono -> start(1000); // 1000 ms
    m_lcd -> setDigitCount(6);
    qDebug() << "heya";
    qDebug() << m_lcd->digitCount();
}
//=========================================================================//
void Chronometre::on_reset_clicked()
{
    resetCount();
    m_lcd -> setDigitCount(countTimer);
}
//=========================================================================//
void Chronometre::onTimer_Tick()
{
    qDebug() << "tac";

    updateCount();
    m_lcd -> setDigitCount(countTimer);
}
//=========================================================================//


Chronometre::~Chronometre()
{
    delete ui;
}


