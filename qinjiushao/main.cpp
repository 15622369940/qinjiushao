#include "mainwindow.h"
#include <QApplication>
//#include "model.h"
//#include "model.cpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
