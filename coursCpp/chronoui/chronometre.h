#ifndef CHRONOMETRE_H
#define CHRONOMETRE_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class chronometre; }
QT_END_NAMESPACE

class chronometre : public QMainWindow
{
    Q_OBJECT

public:
    chronometre(QWidget *parent = nullptr);
    ~chronometre();

private slots:
    void on_start_clicked();

    void on_stop_clicked();

    void on_quit_clicked();

    void slotTimeOut();

    void on_reset_clicked();

private:
    Ui::chronometre *ui;
    QTimer *mon_timer;
        int compteur;
};
#endif // CHRONOMETRE_H
