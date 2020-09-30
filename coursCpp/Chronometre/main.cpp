#include "chronometre.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Chronometre w;
    w.show();
    return a.exec();
}
