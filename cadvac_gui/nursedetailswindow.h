#ifndef NURSEDETAILSWINDOW_H
#define NURSEDETAILSWINDOW_H
#include <iostream>
#include <QLineEdit>
#include <QMessageBox>
#include <QDateEdit>
#include "../src/system.h"
#include "updatenursewindow.h"
using namespace std;
#include <QMainWindow>

namespace Ui {
class NurseDetailsWindow;
}

class NurseDetailsWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    UpdateNurseWindow updateNurse;
    explicit NurseDetailsWindow(QWidget *parent = 0);
    ~NurseDetailsWindow();

    System *getSys() const;
    void setSys(System *value);
    QLineEdit *getCpfLineEdit();
    QLineEdit *getNameLineEdit();
    QLineEdit *getCorenLineEdit();
    QLineEdit *getBirthDateLineEdit();

private slots:


    void on_updateNurseButton_clicked();

    void on_removeNurseButton_clicked();

    void clearForm();
private:
    Ui::NurseDetailsWindow *ui;
};

#endif // NURSEDETAILSWINDOW_H
