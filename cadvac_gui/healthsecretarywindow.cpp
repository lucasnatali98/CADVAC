#include "healthsecretarywindow.h"
#include "ui_healthsecretarywindow.h"

HealthSecretaryWindow::HealthSecretaryWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HealthSecretaryWindow)
{
    ui->setupUi(this);
}

HealthSecretaryWindow::~HealthSecretaryWindow()
{
    delete ui;
}

void HealthSecretaryWindow::on_nurseManagementButton_clicked()
{

}

void HealthSecretaryWindow::on_patientManagementButton_clicked()
{

}

void HealthSecretaryWindow::on_postsManagementButton_clicked()
{

}

void HealthSecretaryWindow::on_exitSystemLinkButton_clicked()
{

}
