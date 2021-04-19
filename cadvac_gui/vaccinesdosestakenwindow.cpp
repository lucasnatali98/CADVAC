#include "vaccinesdosestakenwindow.h"
#include "ui_vaccinesdosestakenwindow.h"

VaccinesDosesTakenWindow::VaccinesDosesTakenWindow(QWidget *parent, Patient* searchPatient) : QMainWindow(parent), ui(new Ui::VaccinesDosesTakenWindow)
{
    ui->setupUi(this);
    patient = searchPatient;
    parentWindown = parent;

//    parent->setVisible(true);

    ui->vaccine->setText(QString::number(patient->getVaccineDosesTaken()));
}

VaccinesDosesTakenWindow::~VaccinesDosesTakenWindow()
{
    delete ui;
}

void VaccinesDosesTakenWindow::on_buttonBox_accepted()
{
    if(!dataBase.openDb()){
        QMessageBox::warning(this, "ERROR", "Conexão com a base de dados falhou");

    } else{

        QString vaccine = ui->vaccine->text();

        QSqlQuery query;
        if(query.prepare("UPDATE Patients SET doses='"+vaccine+"'"
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

void VaccinesDosesTakenWindow::clearForm()
{
    ui->vaccine->clear();
}
