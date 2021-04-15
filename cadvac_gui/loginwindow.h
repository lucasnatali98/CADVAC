#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include "healthsecretarywindow.h"
#include "../src/system.h"
#include <QMainWindow>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    HealthSecretaryWindow *health;
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
