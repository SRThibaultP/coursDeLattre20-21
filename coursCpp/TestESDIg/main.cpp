#include "testesdig.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestESDIg w;
    w.show();
    return a.exec();
}
