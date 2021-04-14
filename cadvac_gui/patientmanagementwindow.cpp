#include "patientmanagementwindow.h"
#include "ui_patientmanagementwindow.h"

PatientManagementWindow::PatientManagementWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PatientManagementWindow)
{
    ui->setupUi(this);
    sys = new System();
    createPatientWindow = new CreatePatientWindow();
    searchPatientWindow = new SearchPatientWindow();
}

PatientManagementWindow::~PatientManagementWindow()
{
    delete ui;
}

QLineEdit *PatientManagementWindow::getSecretary()
{
    return ui->secretaryName;
}



void PatientManagementWindow::on_findPatientButton_clicked()
{
    searchPatientWindow->setVisible(true);
    searchPatientWindow->sys = sys;

    searchPatientWindow->sys->patient->listPatients();
}

void PatientManagementWindow::on_createPatientButton_clicked()
{
    createPatientWindow->setVisible(true);
    sys->patient = createPatientWindow->getSys()->patient;
}

void PatientManagementWindow::on_previusPageCommandButton_clicked()
{
    this->close();
}
