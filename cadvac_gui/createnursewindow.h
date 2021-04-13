#ifndef CREATENURSEWINDOW_H
#define CREATENURSEWINDOW_H
#include <iostream>
#include <QtDebug>
using namespace std;
#include <QMainWindow>
#include "../src/system.h"
namespace Ui {
class CreateNurseWindow;
}

class CreateNurseWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    explicit CreateNurseWindow(QWidget *parent = 0);
    ~CreateNurseWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CreateNurseWindow *ui;
};

#endif // CREATENURSEWINDOW_H
