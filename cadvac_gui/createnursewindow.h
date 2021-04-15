#ifndef CREATENURSEWINDOW_H
#define CREATENURSEWINDOW_H
#include <iostream>
#include <QtDebug>
using namespace std;
#include <QMainWindow>
#include <QMessageBox>
//#include "nursemanagementwindow.h"


#include "../src/system.h"
namespace Ui {
class CreateNurseWindow;
}

class CreateNurseWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;

    //NurseManagementWindow *nm;
    explicit CreateNurseWindow(QWidget *parent = 0);
    ~CreateNurseWindow();

    System *getSys() const;

private slots:
    void on_pushButton_clicked();
    void clearForm();

private:
    Ui::CreateNurseWindow *ui;
};

#endif // CREATENURSEWINDOW_H
