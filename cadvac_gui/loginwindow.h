#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include "healthsecretarywindow.h"
#include "connectdb.h"
#include "user.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

    ConnectDb dataBase;
    User *currentUser = User::createUser();
    HealthSecretaryWindow *health;

private slots:
    void on_pushButton_clicked();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
