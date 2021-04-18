#include "nursemanagementwindow.h"
#include "ui_nursemanagementwindow.h"

NurseManagementWindow::NurseManagementWindow(QWidget *parent, User *currentUser) : QMainWindow(parent), ui(new Ui::NurseManagementWindow)
{
    ui->setupUi(this);

    ui->secretaryName->setText(QString::fromStdString(currentUser->getName()));

    createNurseWindow = new CreateNurseWindow(this, currentUser);
    searchNurseWindow = new SearchNurseWindow(this, currentUser);
}

NurseManagementWindow::~NurseManagementWindow()
{
    delete ui;
}

void NurseManagementWindow::on_previusPageCommandButton_clicked()
{
    this->close();
}

void NurseManagementWindow::on_createNurseButton_clicked()
{
//    this->close();
    createNurseWindow->setVisible(true);
}

void NurseManagementWindow::on_findNurseButton_clicked()
{
//    this->close();
    searchNurseWindow->setVisible(true);
}
