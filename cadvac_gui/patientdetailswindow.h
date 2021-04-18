#ifndef PATIENTDETAILSWINDOW_H
#define PATIENTDETAILSWINDOW_H
#include "../src/system.h"
#include "updatepatientwindow.h"
#include "vaccinesdosestakenwindow.h"
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
    System *sys;
    VaccinesDosesTakenWindow vaccinesDosesTaken;
    UpdatePatientWindow updatePatient;
    explicit PatientDetailsWindow(QWidget *parent = 0);
    ~PatientDetailsWindow();

    QLineEdit *getCpfLineEdit();
    QLineEdit *getNameLineEdit();
    QLineEdit *getBirthDateLineEdit();
    QLineEdit *getNumberSUSLineEdit();
    QLineEdit *getVaccineDosesTakenLineEdit();
    System *getSys() const;
    void setSys(System *value);

private slots:
    void on_scheduleVaccinationButton_clicked();

    void on_removePatientButton_clicked();

    void on_updatePatientButton_clicked();

    void clearForm();
private:
    Ui::PatientDetailsWindow *ui;
};

#endif // PATIENTDETAILSWINDOW_H
