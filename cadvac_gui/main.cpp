#include "mainwindow.h"
#include "createnursewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    CreateNurseWindow cnw;
    cnw.show();

    return a.exec();
}
