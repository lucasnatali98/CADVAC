#include "patientmanagementwindow.h"
#include "ui_patientmanagementwindow.h"

PatientManagementWindow::PatientManagementWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PatientManagementWindow)
{
    ui->setupUi(this);
}

PatientManagementWindow::~PatientManagementWindow()
{
    delete ui;
}

void PatientManagementWindow::on_createPostButton_clicked()
{

}

void PatientManagementWindow::on_findPostButton_clicked()
{

}
