#ifndef PATIENTMANAGEMENTWINDOW_H
#define PATIENTMANAGEMENTWINDOW_H
#include "createpatientwindow.h"
#include "searchpatientwindow.h"
#include "../src/system.h"
#include <QMainWindow>
#include <QLineEdit>
#include <iostream>
using namespace std;

namespace Ui {
class PatientManagementWindow;
}

class PatientManagementWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    CreatePatientWindow *createPatientWindow;
    SearchPatientWindow *searchPatientWindow;
    explicit PatientManagementWindow(QWidget *parent = 0);
    ~PatientManagementWindow();
    QLineEdit *getSecretary();
private slots:


    void on_findPatientButton_clicked();

    void on_createPatientButton_clicked();

    void on_previusPageCommandButton_clicked();

private:
    Ui::PatientManagementWindow *ui;
};

#endif // PACIENTMANAGEMENTWINDOW_H
