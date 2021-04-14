#include "patientdetailswindow.h"
#include "ui_patientdetailswindow.h"

System *PatientDetailsWindow::getSys() const
{
    return sys;
}

void PatientDetailsWindow::setSys(System *value)
{
    sys = value;
}

PatientDetailsWindow::PatientDetailsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PatientDetailsWindow)
{
    ui->setupUi(this);
    sys = new System();
}

PatientDetailsWindow::~PatientDetailsWindow()
{
    delete ui;
}

QLineEdit *PatientDetailsWindow::getCpfLineEdit()
{
    return ui->cpfLineEdit;
}

QLineEdit *PatientDetailsWindow::getNameLineEdit()
{
    return ui->nameLineEdit;
}

QLineEdit *PatientDetailsWindow::getBirthDateLineEdit()
{
    return ui->birthDateLineEdit;
}

QLineEdit *PatientDetailsWindow::getNumberSUSLineEdit()
{
    return ui->numberSUS_lineEdit;
}

QLineEdit *PatientDetailsWindow::getVaccineDosesTakenLineEdit()
{
    return ui->dosesTakenLineEdit;
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

void PatientDetailsWindow::clearForm()
{
    ui->cpfLineEdit->clear();
    ui->birthDateLineEdit->clear();
    ui->nameLineEdit->clear();
    ui->numberSUS_lineEdit->clear();
}
