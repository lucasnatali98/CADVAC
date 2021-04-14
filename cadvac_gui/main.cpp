#include "mainwindow.h"
#include "createnursewindow.h"
#include "healthsecretarywindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //CreateNurseWindow cnw;

    HealthSecretaryWindow healthSecretary;
    healthSecretary.show();
    //cnw.show();

    return a.exec();
}
