#include "nursedetailswindow.h"
#include "ui_nursedetailswindow.h"

System *NurseDetailsWindow::getSys() const
{
    return sys;
}

void NurseDetailsWindow::setSys(System *value)
{
    sys = value;
}

QLineEdit *NurseDetailsWindow::getCpfLineEdit()
{
    return ui->cpfLineEdit;
}

QLineEdit *NurseDetailsWindow::getNameLineEdit()
{
    return ui->nameLineEdit;
}

QLineEdit *NurseDetailsWindow::getCorenLineEdit()
{
    return ui->numberCorenlineEdit;
}

QLineEdit *NurseDetailsWindow::getBirthDateLineEdit()
{
    return ui->birthDateLineEdit;
}

NurseDetailsWindow::NurseDetailsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NurseDetailsWindow)
{
    ui->setupUi(this);

    sys = new System();

}

NurseDetailsWindow::~NurseDetailsWindow()
{
    delete ui;
}


void NurseDetailsWindow::on_updateNurseButton_clicked()
{

}

void NurseDetailsWindow::on_removeNurseButton_clicked()
{
    cout<<"REMOVE NURSE"<<endl;
    sys->nurse->listNurses();
}

void NurseDetailsWindow::clearForm()
{

}
