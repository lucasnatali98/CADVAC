#ifndef CREATENURSEWINDOW_H
#define CREATENURSEWINDOW_H
#include "user.h"
#include "connectdb.h"
#include <iostream>
#include <QtDebug>
#include <QMainWindow>
#include <QMessageBox>

using namespace std;

namespace Ui {
class CreateNurseWindow;
}

class CreateNurseWindow : public QMainWindow
{
    Q_OBJECT

    friend class testeGUI;

public:
    explicit CreateNurseWindow(QWidget *parent = 0, User *currentUser = 0);
    ~CreateNurseWindow();

    User *currentUser;
    ConnectDb dataBase;

private slots:
    void on_pushButton_clicked();
    void clearForm();

private:
    Ui::CreateNurseWindow *ui;
};

#endif // CREATENURSEWINDOW_H
