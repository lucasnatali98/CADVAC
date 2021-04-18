#include "patientmanagementwindow.h"
#include "ui_patientmanagementwindow.h"

PatientManagementWindow::PatientManagementWindow(QWidget *parent, User *currentUser) : QMainWindow(parent), ui(new Ui::PatientManagementWindow)
{
    ui->setupUi(this);

    ui->secretaryName->setText(QString::fromStdString(currentUser->getName()));

    createPatientWindow = new CreatePatientWindow(this, currentUser);
    searchPatientWindow = new SearchPatientWindow(this, currentUser);
}

PatientManagementWindow::~PatientManagementWindow()
{
    delete ui;
}

void PatientManagementWindow::on_findPatientButton_clicked()
{
//    this->close();
    searchPatientWindow->setVisible(true);
}

void PatientManagementWindow::on_createPatientButton_clicked()
{
//    this->close();
    createPatientWindow->setVisible(true);
}

void PatientManagementWindow::on_previusPageCommandButton_clicked()
{
    this->close();
}
