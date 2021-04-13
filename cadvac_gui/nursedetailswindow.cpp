#include "nursedetailswindow.h"
#include "ui_nursedetailswindow.h"

NurseDetailsWindow::NurseDetailsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NurseDetailsWindow)
{
    ui->setupUi(this);
}

NurseDetailsWindow::~NurseDetailsWindow()
{
    delete ui;
}

void NurseDetailsWindow::on_removePatientButton_clicked()
{

}

void NurseDetailsWindow::on_updatePatientButton_clicked()
{

}
