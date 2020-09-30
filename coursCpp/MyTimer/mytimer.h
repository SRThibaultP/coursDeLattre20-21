#ifndef MYTIMER_H
#define MYTIMER_H

#include <QMainWindow>
#include <QTimer>
#include <QPushButton>

namespace Ui {
class MyTimer;
}

class MyTimer : public QMainWindow
{
    Q_OBJECT
    QTimer *mon_timer;
    QPushButton *pbStart;
    QPushButton *pbStop;
    QPushButton *pbQuit;

public:
    explicit MyTimer(QWidget *parent = 0);
    ~MyTimer();
public slots:
    void slotStart();
    void slotStop();
    void slotTimeOut();

private:
    Ui::MyTimer *ui;
};

#endif // MYTIMER_H
