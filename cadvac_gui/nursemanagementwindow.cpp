#include "nursemanagementwindow.h"
#include "ui_nursemanagementwindow.h"

NurseManagementWindow::NurseManagementWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NurseManagementWindow)
{
    ui->setupUi(this);
}

NurseManagementWindow::~NurseManagementWindow()
{
    delete ui;
}

void NurseManagementWindow::on_createPostButton_clicked()
{

}

void NurseManagementWindow::on_findPostButton_clicked()
{

}

void NurseManagementWindow::on_previusPageCommandButton_clicked()
{

}
