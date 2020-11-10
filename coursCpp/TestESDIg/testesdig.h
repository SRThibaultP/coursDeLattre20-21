#ifndef TESTESDIG_H
#define TESTESDIG_H

#include <QMainWindow>
#include "PortLpt.h"
#include "afficheur.h"
#include "barriere.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TestESDIg; }
QT_END_NAMESPACE

class TestESDIg : public QMainWindow
{
    Q_OBJECT
    PortLpt *mlpt;
    Afficheur * mafficheur;
    Barriere * mbarriere;
public:
    TestESDIg(QWidget *parent = nullptr);
    ~TestESDIg();

private slots:

    void on_presenceVehiculeEntree_clicked();

    void on_etatBPS_clicked();

    void on_etatBPE_clicked();

    void on_presenceVehiculeSortie_clicked();

    void on_modifierAfficheur_clicked();

    void on_DescenteBE_clicked();


    void on_MonteeBE_clicked();

    void on_ArretBE_clicked();

    void on_DescenteBS_clicked();

    void on_MonteeBS_clicked();

    void on_ArretBS_clicked();

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::TestESDIg *ui;
};
/*
class TestESDIg : Mainwindow {
    Q_OBJECT
    PortLpt * m_lpt;
    monafficheur * mafficheur;
}
*/
#endif // TESTESDIG_H
