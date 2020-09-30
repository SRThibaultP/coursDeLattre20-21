#ifndef HELLOQT_H
#define HELLOQT_H

#include <QMainWindow>
#include <QtWidgets/QPushButton>
#include <QPushButton>

namespace Ui {
class HelloQt;
}

class HelloQt : public QMainWindow
{
    Q_OBJECT

public:
    explicit HelloQt(QWidget *parent = 0);
    ~HelloQt();
private:
    Ui::HelloQt *ui;
    QPushButton *pbQuitter;

};


#endif // HELLOQT_H
