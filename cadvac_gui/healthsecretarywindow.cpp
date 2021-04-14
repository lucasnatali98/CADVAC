#include "healthsecretarywindow.h"
#include "ui_healthsecretarywindow.h"

HealthSecretaryWindow::HealthSecretaryWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HealthSecretaryWindow)
{
    ui->setupUi(this);
    ui->secretaryName->setText("Pazuello");


    nurse_mw = new NurseManagementWindow();
    patient_mw = new PatientManagementWindow();
    posts_mw = new PostsManagementWindow();

}

HealthSecretaryWindow::~HealthSecretaryWindow()
{
    delete ui;
}

void HealthSecretaryWindow::on_nurseManagementButton_clicked()
{
    nurse_mw->setVisible(true);
    nurse_mw->getSecretaryName()->setText("Pazuello");
}

void HealthSecretaryWindow::on_patientManagementButton_clicked()
{
    patient_mw->setVisible(true);
    patient_mw->getSecretary()->setText("Pazuello");

}

void HealthSecretaryWindow::on_postsManagementButton_clicked()
{
    posts_mw->setVisible(true);
    posts_mw->getSecretary()->setText("Pazuello");
}

void HealthSecretaryWindow::on_exitSystemLinkButton_clicked()
{
    this->close();
}
