#include "patientdetailswindow.h"
#include "ui_patientdetailswindow.h"

PatientDetailsWindow::PatientDetailsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PatientDetailsWindow)
{
    ui->setupUi(this);
}

PatientDetailsWindow::~PatientDetailsWindow()
{
    delete ui;
}

void PatientDetailsWindow::on_scheduleVaccinationButton_clicked()
{

}

void PatientDetailsWindow::on_removePatientButton_clicked()
{

}

void PatientDetailsWindow::on_updatePatientButton_clicked()
{

}
