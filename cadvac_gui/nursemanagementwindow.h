#ifndef NURSEMANAGEMENTWINDOW_H
#define NURSEMANAGEMENTWINDOW_H
#include "createnursewindow.h"
#include "searchnursewindow.h"
#include "user.h"
#include "connectdb.h"
#include <iostream>
#include <QMainWindow>
#include <QLineEdit>
using namespace std;

namespace Ui {
class NurseManagementWindow;
}

class NurseManagementWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NurseManagementWindow(QWidget *parent = 0, User *currentUser = 0);
    ~NurseManagementWindow();

    CreateNurseWindow *createNurseWindow;
    SearchNurseWindow *searchNurseWindow;

private slots:
    void on_previusPageCommandButton_clicked();
    void on_createNurseButton_clicked();
    void on_findNurseButton_clicked();
private:
    Ui::NurseManagementWindow *ui;
};

#endif // NURSEMANAGEMENTWINDOW_H
