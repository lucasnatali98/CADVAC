#include "nursemanagementwindow.h"
#include "ui_nursemanagementwindow.h"

NurseManagementWindow::NurseManagementWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NurseManagementWindow)
{
    ui->setupUi(this);
    sys = new System();
    createNurseWindow = new CreateNurseWindow();
    searchNurseWindow = new SearchNurseWindow();
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
    createNurseWindow->setVisible(true);
    sys->nurse = createNurseWindow->getSys()->nurse;
}

void NurseManagementWindow::on_findNurseButton_clicked()
{
    searchNurseWindow->setVisible(true);
    searchNurseWindow->sys = sys;

    //searchNurseWindow->sys->nurse->listNurses();

}

Ui::NurseManagementWindow *NurseManagementWindow::getUi() const
{
    return ui;
}

QLineEdit *NurseManagementWindow::getSecretaryName() const
{
    return ui->secretaryName;
}
