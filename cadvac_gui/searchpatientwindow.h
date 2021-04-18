#ifndef SEARCHPATIENTWINDOW_H
#define SEARCHPATIENTWINDOW_H
#include "patientdetailswindow.h"
#include "user.h"
#include "patient.h"
#include "connectdb.h"
#include <QMainWindow>
#include <QString>
#include <QDate>
#include <QMessageBox>
#include <iostream>
using namespace std;

namespace Ui {
class SearchPatientWindow;
}

class SearchPatientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchPatientWindow(QWidget *parent = 0, User *currentUser = 0);
    ~SearchPatientWindow();

    PatientDetailsWindow *patientDetailsWindow;
    User *currentUser;
    Patient *searchPatient = Patient::generatePatient();
    ConnectDb dataBase;

private slots:
    void on_searchPatientButton_clicked();
    void clearForm();
private:
    Ui::SearchPatientWindow *ui;
};

#endif // SEARCHPATIENTWINDOW_H
