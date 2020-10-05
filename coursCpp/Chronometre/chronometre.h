#ifndef CHRONOMETRE_H
#define CHRONOMETRE_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>
#include <QPushButton>
#include <QLCDNumber>

QT_BEGIN_NAMESPACE
namespace Ui { class Chronometre; }
QT_END_NAMESPACE

class Chronometre : public QMainWindow
{
    Q_OBJECT

public:
    Chronometre(QWidget *parent = nullptr);
    ~Chronometre();

private:
    Ui::Chronometre *ui;
public slots:

    void slotStart();
    void slotStop();
    void slotTimeOut();


    void on_start_clicked();

    void on_stop_clicked();

private slots:
    void on_quit_clicked();


private :
    // Attributs prives
    QTimer *mon_timer;
    QLCDNumber *mlcd;
    int compteur;

};
#endif // CHRONOMETRE_H
