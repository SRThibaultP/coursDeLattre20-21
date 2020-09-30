#ifndef CHRONOMETRE_H
#define CHRONOMETRE_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QLCDNumber>
#include <QTimer>


namespace Ui { class Chronometre; }


class Chronometre : public QMainWindow
{
    Q_OBJECT

public:
    explicit Chronometre(QWidget *parent = 0);
    ~Chronometre();
    void resetCount();
    void updateCount();

public slots:
    void onTimer_Tick();
    void onButton_Start();
    void onButton_Reset();

private:
    Ui::Chronometre *ui;
    QPushButton *m_bout_start;
    QPushButton *m_bout_stop;
    QPushButton *m_bout_reset;

    QGridLayout *m_layout;

    QLCDNumber *m_lcd;

    QTimer *timer_chrono;

    int     countTimer;
};
#endif // CHRONOMETRE_H
