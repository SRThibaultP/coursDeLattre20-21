#ifndef TESTESDIG_H
#define TESTESDIG_H

#include <QMainWindow>
#include "PortLpt.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TestESDIg; }
QT_END_NAMESPACE

class TestESDIg : public QMainWindow
{
    Q_OBJECT
    PortLpt *mlpt;
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

private:
    Ui::TestESDIg *ui;
};
#endif // TESTESDIG_H
