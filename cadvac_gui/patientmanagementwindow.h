#ifndef PATIENTMANAGEMENTWINDOW_H
#define PATIENTMANAGEMENTWINDOW_H
#include "createpatientwindow.h"
#include "searchpatientwindow.h"
#include "user.h"
#include "connectdb.h"
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
    explicit PatientManagementWindow(QWidget *parent = 0, User *currentUser = 0);
    ~PatientManagementWindow();

    CreatePatientWindow *createPatientWindow;
    SearchPatientWindow *searchPatientWindow;

private slots:
    void on_findPatientButton_clicked();
    void on_createPatientButton_clicked();
    void on_previusPageCommandButton_clicked();
private:
    Ui::PatientManagementWindow *ui;
};

#endif // PACIENTMANAGEMENTWINDOW_H
