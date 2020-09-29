#include "helloqt.h"
#include "ui_helloqt.h"
#include <QPushButton>
#include <QApplication>

HelloQt::HelloQt(QWidget *parent) :
QMainWindow(parent),
ui(new Ui::HelloQt)
{
ui->setupUi(this);
this->setFixedSize(300,200);
this->setWindowTitle("Hello Qt !");
// déclaration du nouveau bouton
QPushButton *pbQuitter = new QPushButton("Quitter",this);
// Quand on clique sur le nouveau bouton , on change le texte de celui-ci
pbQuitter->setMinimumSize(500)
}
HelloQt::~HelloQt()
{
delete ui;
}
