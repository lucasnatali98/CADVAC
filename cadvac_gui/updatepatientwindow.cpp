#include "updatepatientwindow.h"
#include "ui_updatepatientwindow.h"

UpdatePatientWindow::UpdatePatientWindow(QWidget *parent, Patient* searchPatient) : QMainWindow(parent), ui(new Ui::UpdatePatientWindow)
{
    ui->setupUi(this);
    patient = searchPatient;
    parentWindown = parent;

//    parent->setVisible(true);

    ui->cpf->setText(QString::fromStdString(patient->getCpf()));
    ui->name->setText(QString::fromStdString(patient->getName()));
    ui->sus->setText(QString::fromStdString(patient->getSusNumber()));
    ui->date->setText(QString::fromStdString(patient->getBirthDate()));
}

UpdatePatientWindow::~UpdatePatientWindow()
{
    delete ui;
}

void UpdatePatientWindow::clearForm()
{
    ui->cpf->clear();
    ui->sus->clear();
    ui->date->clear();
    ui->name->clear();
}
void UpdatePatientWindow::on_pushButton_clicked()
{
    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

        QString cpf = ui->cpf->text();
        QString name = ui->name->text();
        QString sus = ui->sus->text();
        QString date = ui->date->text();

        QSqlQuery query;
        if(query.prepare("UPDATE Patients SET name='"+name+"', cpf='"+cpf+"', birth='"+date+"', sus='"+sus+"'"
                         " WHERE cpf='"+QString::fromStdString(patient->getCpf())+"'")){
           if(query.exec()){
               QMessageBox::information(this, "SUCCESS", "Paciente atualizado com sucesso");
               clearForm();
               dataBase.closeDb();
               this->close();
           } else{
               QMessageBox::warning(this, "ERROR", "Erro ao atualizar");
           }
        } else {
            QMessageBox::warning(this, "ERROR", "Erro");
        }
    }

    dataBase.closeDb();
}
