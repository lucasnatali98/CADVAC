#ifndef NURSEMANAGEMENTWINDOW_H
#define NURSEMANAGEMENTWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include "createnursewindow.h"
#include "searchnursewindow.h"
#include <iostream>
#include "../src/system.h"
using namespace std;
namespace Ui {
class NurseManagementWindow;
}

class NurseManagementWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    CreateNurseWindow *createNurseWindow;
    SearchNurseWindow *searchNurseWindow;
    explicit NurseManagementWindow(QWidget *parent = 0);
    ~NurseManagementWindow();

    Ui::NurseManagementWindow *getUi() const;
    QLineEdit *getSecretaryName() const;
private slots:


    void on_previusPageCommandButton_clicked();

    void on_createNurseButton_clicked();

    void on_findNurseButton_clicked();

private:
    Ui::NurseManagementWindow *ui;
};

#endif // NURSEMANAGEMENTWINDOW_H
