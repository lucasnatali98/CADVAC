#ifndef SEARCHNURSEWINDOW_H
#define SEARCHNURSEWINDOW_H
#include "nursedetailswindow.h"
#include "user.h"
#include "connectdb.h"
#include <QMainWindow>
#include <QString>
#include <QDate>
#include <QMessageBox>
#include <iostream>
using namespace std;

namespace Ui {
class SearchNurseWindow;
}

class SearchNurseWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchNurseWindow(QWidget *parent = 0, User *currentUser = 0);
    ~SearchNurseWindow();

    NurseDetailsWindow *nurseDetailsWindow;
    User *currentUser;
    User *searchUser = User::createUser();
    ConnectDb dataBase;

private slots:
    void on_searchNurseButton_clicked();
    void clearForm();
private:
    Ui::SearchNurseWindow *ui;
};

#endif // SEARCHNURSEWINDOW_H
