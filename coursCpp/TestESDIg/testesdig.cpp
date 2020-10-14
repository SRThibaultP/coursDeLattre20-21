#include "testesdig.h"
#include "ui_testesdig.h"

TestESDIg::TestESDIg(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TestESDIg)
{
    ui->setupUi(this);
    mlpt=new PortLpt();
}

TestESDIg::~TestESDIg()
{
    delete mlpt;
    delete ui;
}

void TestESDIg::on_etatBPE_clicked()
{
    QPixmap *pixmap_img;
    pixmap_img = new QPixmap("ouvert.png");
    // mon_logo se trouve dans le repertoire qui contient mon exe
    ui->labelBT1->setPixmap(*pixmap_img);
    ui->gridWidgetBT1->show();
    delete pixmap_img;
}

void TestESDIg::on_etatBPS_clicked()
{
    QPixmap *pixmap_img;
    pixmap_img = new QPixmap("ouvert.png");
    // mon_logo se trouve dans le repertoire qui contient mon exe
    ui->labelBT2->setPixmap(*pixmap_img);
    ui->gridWidgetBT2->show();
    delete pixmap_img;
}

void TestESDIg::on_presenceVehiculeEntree_clicked()
{
    QPixmap *pixmap_img;
    pixmap_img = new QPixmap("voiture.jpg");
    // mon_logo se trouve dans le repertoire qui contient mon exe
    ui->labelBT3->setPixmap(*pixmap_img);
    ui->gridWidgetBT3->show();
    delete pixmap_img;
}

void TestESDIg::on_presenceVehiculeSortie_clicked()
{
    QPixmap *pixmap_img;
    pixmap_img = new QPixmap("voiture.jpg");
    // mon_logo se trouve dans le repertoire qui contient mon exe
    ui->labelBT4->setPixmap(*pixmap_img);
    ui->gridWidgetBT4->show();
    delete pixmap_img;
}

void TestESDIg::on_modifierAfficheur_clicked()
{
    mlpt->setLSB4(ui->spinBox->value());
}

void TestESDIg::on_DescenteBE_clicked()
{
    mlpt->setBit(0x40, true);
    mlpt->setBit(0x80, false);
}

void TestESDIg::on_MonteeBE_clicked()
{
    mlpt->setBit(0x40, false);
    mlpt->setBit(0x80, true);
}

void TestESDIg::on_ArretBE_clicked()
{
    mlpt->setBit(0x40, false);
    mlpt->setBit(0x80, false);
}

void TestESDIg::on_DescenteBS_clicked()
{
    mlpt->setBit(0x20, true);
    mlpt->setBit(0x10, false);
}

void TestESDIg::on_MonteeBS_clicked()
{
    mlpt->setBit(0x20, false);
    mlpt->setBit(0x10, true);
}

void TestESDIg::on_ArretBS_clicked()
{
    mlpt->setBit(0x20, false);
    mlpt->setBit(0x10, false);
}
