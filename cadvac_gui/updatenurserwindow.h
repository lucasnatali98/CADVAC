#ifndef UPDATENURSERWINDOW_H
#define UPDATENURSERWINDOW_H

#include "user.h"
#include "connectdb.h"
#include <iostream>
#include <QtDebug>
#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class UpdateNurserWindow;
}

class UpdateNurserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UpdateNurserWindow(QWidget *parent = nullptr, User *searchUser = 0);
    ~UpdateNurserWindow();

    QWidget *parentWindown;
    User *user;
    ConnectDb dataBase;

private slots:
    void on_pushButton_clicked();
    void clearForm();

private:
    Ui::UpdateNurserWindow *ui;
};

#endif // UPDATENURSERWINDOW_H
