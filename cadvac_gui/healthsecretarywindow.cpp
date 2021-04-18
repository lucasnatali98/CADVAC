#include "healthsecretarywindow.h"
#include "ui_healthsecretarywindow.h"

HealthSecretaryWindow::HealthSecretaryWindow(QWidget *parent, User *user) : QMainWindow(parent), ui(new Ui::HealthSecretaryWindow)
{
    ui->setupUi(this);

    currentUser = user;

    ui->secretaryName->setText(QString::fromStdString(currentUser->getName()));

    if(currentUser->getType() == 1){
        // secretary
        ui->patientManagementButton->setDisabled(true);
    }
    if(currentUser->getType() == 2){
        // cordinator
        // reports
        ui->patientManagementButton->setDisabled(true);
        ui->nurseManagementButton->setDisabled(true);
        ui->postsManagementButton->setDisabled(true);
    }
    if(currentUser->getType() == 3) {
        // nurse
        ui->nurseManagementButton->setDisabled(true);
        ui->postsManagementButton->setDisabled(true);
    }

    nurse_mw = new NurseManagementWindow(this, currentUser);
    patient_mw = new PatientManagementWindow(this, currentUser);
    posts_mw = new PostsManagementWindow(this, currentUser);

}

HealthSecretaryWindow::~HealthSecretaryWindow()
{
    delete ui;
}

void HealthSecretaryWindow::on_nurseManagementButton_clicked()
{
    nurse_mw->setVisible(true);
}

void HealthSecretaryWindow::on_patientManagementButton_clicked()
{
    patient_mw->setVisible(true);

}

void HealthSecretaryWindow::on_postsManagementButton_clicked()
{
    posts_mw->setVisible(true);
}

void HealthSecretaryWindow::on_exitSystemLinkButton_clicked()
{
    this->close();
}
