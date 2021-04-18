#ifndef PATIENTDETAILSWINDOW_H
#define PATIENTDETAILSWINDOW_H
#include "user.h"
#include "patient.h"
#include "connectdb.h"
#include <iostream>
#include <QLineEdit>
#include <QMessageBox>
using namespace std;

#include <QMainWindow>

namespace Ui {
class PatientDetailsWindow;
}

class PatientDetailsWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit PatientDetailsWindow(QWidget *parent = 0, Patient *searchPatient = 0);
    ~PatientDetailsWindow();

    Patient *patient;
    QWidget *parentWindown;
    ConnectDb dataBase;

private slots:
    void on_scheduleVaccinationButton_clicked();

    void on_removePatientButton_clicked();

    void on_updatePatientButton_clicked();

    void clearForm();
private:
    Ui::PatientDetailsWindow *ui;
};

#endif // PATIENTDETAILSWINDOW_H
