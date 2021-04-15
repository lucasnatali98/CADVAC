#include "createpatientwindow.h"
#include "ui_createpatientwindow.h"

System *CreatePatientWindow::getSys() const
{
    return sys;
}



CreatePatientWindow::CreatePatientWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreatePatientWindow)
{
    ui->setupUi(this);
    sys = new System();
}

CreatePatientWindow::~CreatePatientWindow()
{
    delete ui;
}

void CreatePatientWindow::on_addPatientButton_clicked()
{

    sys->patient->createPatient(ui->cpf->text().toStdString(), ui->name->text().toStdString(),
                                ui->dateEdit->text().toStdString(),
                                ui->susNumber->text().toStdString());



    QMessageBox qmsg;
    qmsg.setWindowTitle("Confirmação");
    qmsg.setText("O paciente foi criado com sucesso");
    qmsg.exec();
    //clearForm();

    this->close();
}
void CreatePatientWindow::clearForm()
{
    ui->cpf->clear();
    ui->name->clear();
    ui->dateEdit->clear();
    ui->susNumber->clear();
}
