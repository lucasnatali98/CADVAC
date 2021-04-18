#ifndef CREATEPATIENTWINDOW_H
#define CREATEPATIENTWINDOW_H
#include "user.h"
#include "connectdb.h"
#include <iostream>
#include <QtDebug>
#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class CreatePatientWindow;
}

class CreatePatientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreatePatientWindow(QWidget *parent = 0, User *currentUser = 0);
    ~CreatePatientWindow();

    User *currentUser;
    ConnectDb dataBase;

private slots:
    void on_addPatientButton_clicked();
    void clearForm();
private:
    Ui::CreatePatientWindow *ui;
};

#endif // CREATEPATIENTWINDOW_H
