#ifndef NURSEDETAILSWINDOW_H
#define NURSEDETAILSWINDOW_H
#include "user.h"
#include "connectdb.h"
#include "updatenurserwindow.h"
#include <iostream>
#include <QLineEdit>
#include <QDateEdit>
#include <QMainWindow>
#include <QMessageBox>
using namespace std;

namespace Ui {
class NurseDetailsWindow;
}

class NurseDetailsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NurseDetailsWindow(QWidget *parent = 0, User* searchUser = 0);
    ~NurseDetailsWindow();

//    NurseManagementWindow *nurseManagementWindow;
    UpdateNurserWindow *updateNurserWindow;
    QWidget *parentWindown;
    User *user;
    ConnectDb dataBase;

private slots:
    void on_updateNurseButton_clicked();
    void on_removeNurseButton_clicked();
    void clearForm();
    void on_backButton_clicked();

private:
    Ui::NurseDetailsWindow *ui;
};

#endif // NURSEDETAILSWINDOW_H
