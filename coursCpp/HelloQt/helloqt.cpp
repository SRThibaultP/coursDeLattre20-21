#include "mybutton.h"
#include "helloqt.h"
#include "ui_helloqt.h"
#include <QPushButton>
#include <QApplication>
HelloQt::HelloQt(QWidget *parent) :
QMainWindow(parent),
ui(new Ui::HelloQt)
{
ui->setupUi(this);
this->setFixedSize(500,500);
this->setWindowTitle("Hello Qt !");
// déclaration du nouveau bouton
QPushButton *pbQuitter = new QPushButton("Quitter",this);
pbQuitter->setGeometry(1,170,60,30);
MyButton *myb = new MyButton("buttonwow",this);
myb->setGeometry(200, 170, 120, 30);
QObject::connect(pbQuitter, SIGNAL(clicked()), qApp, SLOT(quit()));
// Quand on clique sur le nouveau bouton , on change le texte de celui-ci
connect(myb,SIGNAL(clicked()),myb,SLOT(slotChangeText()));
}



HelloQt::~HelloQt()
{
delete ui;

}
