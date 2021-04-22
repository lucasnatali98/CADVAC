#include "healthsecretarywindow.h"
#include "loginwindow.h"
#include "user.h"
#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //CreateNurseWindow cnw;
    LoginWindow loginWindow;
    loginWindow.show();

    //HealthSecretaryWindow healthSecretary;
    //healthSecretary.show();
    //cnw.show();

    return a.exec();
}
