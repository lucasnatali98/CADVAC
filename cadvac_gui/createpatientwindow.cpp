#include "createpatientwindow.h"
#include "ui_createpatientwindow.h"

CreatePatientWindow::CreatePatientWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreatePatientWindow)
{
    ui->setupUi(this);
}

CreatePatientWindow::~CreatePatientWindow()
{
    delete ui;
}

void CreatePatientWindow::on_addPatientButton_clicked()
{

}
