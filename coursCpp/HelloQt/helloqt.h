#ifndef HELLOQT_H
#define HELLOQT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class HelloQt; }
QT_END_NAMESPACE

class HelloQt : public QMainWindow
{
    Q_OBJECT

public:
    HelloQt(QWidget *parent = nullptr);
    ~HelloQt();

private:
    Ui::HelloQt *ui;
};
#endif // HELLOQT_H
